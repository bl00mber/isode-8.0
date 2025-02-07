/* entry_load.c - load bits of the database */

#ifndef lint
static char *rcsid = "$Header: /xtel/isode/isode/quipu/RCS/entry_load.c,v 9.0 1992/06/16 12:34:01 isode Rel $";
#endif

/*
 * $Header: /xtel/isode/isode/quipu/RCS/entry_load.c,v 9.0 1992/06/16 12:34:01 isode Rel $
 *
 *
 * $Log: entry_load.c,v $
 * Revision 9.0  1992/06/16  12:34:01  isode
 * Release 8.0
 *
 */

/*
 *                                NOTICE
 *
 *    Acquisition, use, and distribution of this module and related
 *    materials are subject to the restrictions of a license agreement.
 *    Consult the Preface in the User's Manual for the full terms of
 *    this agreement.
 *
 */

#include "config.h"
#include "quipu/util.h"
#include "quipu/entry.h"
#include "quipu/ds_error.h"
#include "tailor.h"
#include <sys/stat.h>
#include <errno.h>
#include "quipu/turbo.h"

extern char * treedir;
extern LLog * log_dsap;

extern int parse_status;
extern DN mydsadn;
struct acl_info * acl_dflt ();
#ifdef TURBO_INDEX
extern AttributeType *turbo_index_types;
#endif

static char filename [LINESIZE];
static PS ps;

#define EDBLEN	3	/* length of string "EDB" */

static entry_load_kids ( Avlnode *entryptr, int offset );

int
fileexists (char *fname) {
	struct stat buf;

	if (stat (fname,&buf) != 0) {
		if (errno != ENOENT)
			DLOG (log_dsap,LLOG_DEBUG,("File %s will not stat - %d",fname,errno));
		return FALSE;
	}
	return TRUE;
}

static
dir_exists (char *fname) {
	struct stat buf;

	if (stat (fname,&buf) != 0) {
		if (errno != ENOENT)
			DLOG (log_dsap,LLOG_DEBUG,("File %s will not stat - %d",fname,errno));
		return FALSE;
	}

	if ((buf.st_mode & S_IFMT) == S_IFDIR)
		return TRUE;

	DLOG (log_dsap,LLOG_DEBUG,("File %s is not a directory",fname));


	return FALSE;
}

static
read_mapped_rdn (PS aps, char *name, char *file) {
	FILE * mapfp;
#ifdef	TURBO_DISK
	char *ptr, *newname, *tmp, *fgetline();
#else	/* TURBO_DISK */
	char *ptr, *newname, *tmp, *isode_getline();
#endif	/* TURBO_DISK */
	extern int parse_line;
	int i;

	if ((mapfp = fopen (file,"r")) == (FILE *)NULL) {
		LLOG(log_dsap,LLOG_EXCEPTIONS,("Cannot read \"%s\" (%d)",file,errno));
		return FALSE;
	}

	parse_line = 0;
#ifdef	TURBO_DISK
	while ( (ptr = fgetline(mapfp)) != NULLCP)
#else	/* TURBO_DISK */
	while ( (ptr = isode_getline(mapfp)) != NULLCP)
#endif	/* TURBO_DISK */
	{
		if ((newname = rindex(ptr,'#')) == NULLCP) {
			LLOG(log_dsap,LLOG_EXCEPTIONS,("Seperator missing in map file \"%s\", line %d",file,parse_line));
			fclose (mapfp);
			return FALSE;
		}
		tmp = newname;
		*newname++ = 0;
		while (isspace(*--tmp))
			*tmp = 0;

		if (lexequ (name,ptr) == 0) {
			/* got it - replace in ps*/
			i = strlen (name);
			aps->ps_ptr -= i;
			aps->ps_cnt += i;
			ps_print (aps,SkipSpace(newname));
			fclose (mapfp);
			return TRUE;
		}
	}

	DLOG (log_dsap, LLOG_DEBUG,("%s not found in map file %s",name,file));
	fclose (mapfp);
	return FALSE;
}

static
write_mapped_rdn (PS aps, char *name, char *file) {
	FILE * mapfp;
	char mapname[LINESIZE];
	char sname[LINESIZE];
	char *mptr, *nptr;
	int i;
#ifdef TEMPNAM
	char mapdir[LINESIZE];
	char *cp;
#endif

	if ((int)strlen(name) < MAXFILENAMELEN)
		return FALSE;

	/* Make unique name for it */
	mptr = mapname;
	if ((nptr = index (name,'=')) == NULLCP)
		return FALSE;

	if ( (*nptr!=0) && isalpha(*nptr) )
		*mptr++ = *nptr++;

	++nptr;

#ifndef TEMPNAM
	for (i=0 ; (*nptr!=0) && (i < MAXFILENAMELEN-6) ; nptr++)
		if (isascii(*nptr) && (isalnum(*nptr) || *nptr ==  '-'))
			*mptr++ = *nptr, i++;

	strcpy (sname,name);
	strcpy (mptr,"XXXXXX");
	i = strlen (name);
	nptr = (aps->ps_ptr -= i);
	aps->ps_cnt += i;
	ps_print (aps,mapname);
	*aps->ps_ptr = 0;

	if ((aps->ps_base = mktemp (aps->ps_base)) == NULLCP)
		return FALSE;
#else /* TEMPNAM */
	for (i=0 ; (*nptr!=0) && (i < 5) ; nptr++)
		if (isascii(*nptr) && (isalnum(*nptr) || *nptr ==  '-'))
			*mptr++ = *nptr, i++;
	*mptr = '\0';

	strcpy (sname,name);

	i = strlen (name);
	aps->ps_ptr -= i;
	aps->ps_cnt += i;
	*aps->ps_ptr = 0;

	sprintf (mapdir, "%s", aps->ps_base);

	if ((cp = tempnam (mapdir, mapname)) == NULLCP)
		return FALSE;

	sprintf (aps->ps_base, "%s", cp);
	free (cp);

	nptr = (aps->ps_base + strlen (mapdir));
	aps->ps_ptr = nptr;
#endif /* TEMPNAM */

	DLOG(log_dsap,LLOG_DEBUG,("mapped name %s",aps->ps_base));

	if (mkdir (aps->ps_base,0700) != 0) {
		LLOG (log_dsap,LLOG_EXCEPTIONS,("map rdn mkdir failure \"%s\" (%d)",aps->ps_base,errno));
		return FALSE;
	}

	/* write it to map file */
	if (fileexists(file))
		mapfp = fopen (file,"a");
	else {
		int um;
		um = umask (0177);
		mapfp = fopen (file,"w");
		umask (um);
	}

	if (mapfp == (FILE *)NULL) {
		LLOG(log_dsap,LLOG_EXCEPTIONS,("Can't write to \"%s\" (%d)",file,errno));
		return FALSE;
	}

	if (fprintf (mapfp,"%s#%s\n",sname,nptr) == EOF) {
		LLOG(log_dsap,LLOG_EXCEPTIONS,("Can't write to \"%s\" (%d)",file,errno));
		return FALSE;
	}

	if (fclose (mapfp) != 0) {
		LLOG(log_dsap,LLOG_EXCEPTIONS,("Can't close \"%s\" (%d)",file,errno));
		return FALSE;
	}

	return TRUE;
}

static
rdn2filename (PS aps, RDN rdn, int make) {
	char *start = aps->ps_ptr;
	char mapbuf [LINESIZE];

	/* look for EDB.map file */
	*aps->ps_ptr = 0;
	sprintf (mapbuf, "%sEDB.map",aps->ps_base);

	rdn_print (aps,rdn,DIROUT);
	*aps->ps_ptr = 0;

	if (fileexists (mapbuf) && read_mapped_rdn (aps,start,mapbuf)) {
		*aps->ps_ptr = 0;
		if (dir_exists(aps->ps_base))
			return OK;
		if (make) {
			if (mkdir (aps->ps_base,0700) != 0) {
				LLOG (log_dsap,LLOG_EXCEPTIONS,("dn2file mkdir (mapped) failure \"%s\" (%d)",aps->ps_base,errno));
				return NOTOK;
			}
			LLOG (log_dsap,LLOG_NOTICE,("WARNING: Needed to make mapped directory \"%s\"",aps->ps_base));
			return OK;
		}
		LLOG (log_dsap,LLOG_EXCEPTIONS,("mapped file missing \"%s\"",aps->ps_base));
		return NOTOK;
	}

#if     defined(DEBUG) && defined(SYS5) && !defined(HPUX) && !defined(SVR4)

	else if ( (int)strlen(start) > MAXFILENAMELEN )
		LLOG (log_dsap,LLOG_NOTICE,("Potential problem with \"%s\" (name too long)",start));

#endif

	if (dir_exists(aps->ps_base))
		return OK;

	if (make) {
		if (write_mapped_rdn (aps,start,mapbuf))
			return OK;
		if (mkdir (aps->ps_base,0700) != 0) {
			LLOG (log_dsap,LLOG_EXCEPTIONS,("dn2file mkdir failure \"%s\" (%d)",aps->ps_base,errno));
			return NOTOK;
		}
		return OK;
	}

	return NOTOK;
}

static
dn2filename (PS aps, DN dn, int make) {
	if (treedir != NULLCP) {
		ps_print (aps,isodefile(treedir,0));
		if (make) {
			*aps->ps_ptr = 0;
			if ((! dir_exists (aps->ps_base)) &&
					(mkdir (aps->ps_base,0700) != 0)) {
				LLOG (log_dsap,LLOG_EXCEPTIONS,("dn2file mkdir failure \"%s\" (%d)",aps->ps_base,errno));
				return NOTOK;
			}
		}
		if (*(aps->ps_ptr - 1) != '/')
			ps_print (aps,"/");
	} else
		ps_print (aps,"./");

	if (dn != NULLDN) {
		if (rdn2filename (aps,dn->dn_rdn,make) == NOTOK)
			return NOTOK;
		if (dn->dn_parent != NULLDN) {
			DN eptr;
			for (eptr = dn->dn_parent; eptr != NULLDN; eptr = eptr->dn_parent) {
				ps_print (aps,"/");
				if (rdn2filename (aps,eptr->dn_rdn,make) == NOTOK)
					return NOTOK;
			}
		}
	}

	return OK;

}

char *
dn2edbfile (DN dn) {
	PS aps;
	static char result [LINESIZE];

	if ((aps = ps_alloc (str_open)) == NULLPS) {
		LLOG (log_dsap, LLOG_EXCEPTIONS, ("dn2dir ps_alloc failed"));
		return NULLCP;
	}
	if (str_setup (aps,result,LINESIZE,1) == NOTOK) {
		LLOG (log_dsap, LLOG_EXCEPTIONS, ("dn2dir ps_alloc failed"));
		return NULLCP;
	}

	if (dn2filename (aps,dn,TRUE) != OK)
		return NULLCP;

	if (*(aps->ps_ptr - 1) != '/')
		ps_print (aps,"/EDB");
	else
		ps_print (aps,"EDB");
	*aps->ps_ptr = 0;

	ps_free (aps);

	return result;
}

static
file_check (int offset, Entry entryptr) {
	ps->ps_ptr = filename + offset;
	ps->ps_cnt = LINESIZE - offset;

	if (rdn2filename (ps,entryptr->e_name,FALSE) == OK) {
		if (*(ps->ps_ptr - 1) != '/')
			ps_print (ps,"/EDB");
		else
			ps_print (ps,"EDB");
		*ps->ps_ptr = 0;
		return (OK);
	}
	return (NOTOK);
}

static
sibling_expected (Entry e) {
	AV_Sequence avs;

	if (e->e_external)
		return FALSE;

	for (avs = e->e_master; avs != NULLAV; avs=avs->avseq_next) {
		if (avs->avseq_av.av_struct == NULL)
			continue;
		if (dn_cmp ((DN)avs->avseq_av.av_struct,mydsadn) == 0)
			return TRUE;
	}
	for (avs = e->e_slave; avs != NULLAV; avs=avs->avseq_next) {
		if (avs->avseq_av.av_struct == NULL)
			continue;
		if (dn_cmp ((DN)avs->avseq_av.av_struct,mydsadn) == 0)
			return TRUE;
	}
	return FALSE;
}

static char got_all = TRUE;

static
load_a_kid (Entry e, int offset) {
	if ((!e->e_external) &&
			(e->e_master == NULLAV) &&
			(e->e_slave == NULLAV)) {
		e->e_leaf = TRUE;
		e->e_allchildrenpresent = 2;
		return(OK);
	}

	if (file_check(offset, e) == OK) {
		if ((e->e_children = getentry_block(e, filename)) == NULLAVL) {
			if (parse_status != 0)
				return(NOTOK);

			if (e->e_allchildrenpresent != FALSE &&
					e->e_leaf == FALSE) {
				got_all = FALSE;
				return(OK);
			} else
				return(NOTOK) ;
		}
		if (parse_status != 0)
			return(NOTOK);

		e->e_leaf = FALSE;

		if (entry_load_kids(e->e_children, strlen( filename ) - EDBLEN)
				== NOTOK)
			return (NOTOK);
		if (e->e_allchildrenpresent != 2)
			got_all = FALSE;
	} else {
		if (sibling_expected (e))
			LLOG (log_dsap, LLOG_EXCEPTIONS, ("Warning sibling file %s/EDB NOT found", filename));
		e->e_allchildrenpresent = FALSE;
		got_all = FALSE;
	}

	return(OK);
}


static
entry_load_kids (
	Avlnode *entryptr,	/* in this case, entryptr is really a tree of kids */
	int offset
) {
	Entry	akid, parent;

	ps->ps_ptr = filename + offset;
	ps->ps_cnt = LINESIZE - offset;
	*ps->ps_ptr = 0;


	if (entryptr == NULLAVL)
		return(OK);

	got_all = TRUE;

	if (avl_apply(entryptr, load_a_kid,  (caddr_t) offset, NOTOK, AVL_PREORDER)
			== NOTOK)
		return(NOTOK);

	akid = (Entry) avl_getone(entryptr);
	if (akid && (parent = akid->e_parent)) {
		if (got_all) {
			if (parent->e_allchildrenpresent == 1)
				parent->e_allchildrenpresent = 2;
		} else if (parent->e_allchildrenpresent == 2)
			parent->e_allchildrenpresent = 1;
	}

	return (OK);
}

static char got_subtree;

static
check_entry_free (Entry e) {
	if (e->e_allchildrenpresent < 2)
		got_subtree = FALSE;
	entry_free(e);
}

int
parent_link (Entry e, Entry parent) {
	e->e_parent = parent;
	set_inheritance (e);
	return(OK);
}

static
merge_entry (Entry newentry, Avlnode *oldtree) {
	Entry   p;
	int     entry_cmp();

	newentry->e_parent = ((Entry) avl_getone(oldtree))->e_parent;

	if ((p = (Entry) avl_find(oldtree, (caddr_t) newentry, entry_cmp))
			!= NULLENTRY ) {
		newentry->e_leaf = FALSE;
		newentry->e_allchildrenpresent = p->e_allchildrenpresent;
		newentry->e_children = p->e_children;

		avl_apply(newentry->e_children, parent_link, (caddr_t) newentry,
				  NOTOK, AVL_PREORDER);

		if (p->e_edbversion != NULLCP)
			newentry->e_edbversion = strdup(p->e_edbversion);
	} else {
		got_subtree = FALSE;
		newentry->e_allchildrenpresent = FALSE;
	}

	return(OK);
}

Entry
subtree_load (Entry parent, DN dn) {
	char failed = FALSE;
	Avlnode	*treetop;
	Entry	akid;
	int	entry_free();


	got_subtree = TRUE;

	if ((parent != NULLENTRY) && (parent->e_children != NULLAVL)) {
		akid = (Entry) avl_getone(parent->e_children);
		if (akid->e_data != E_TYPE_CONSTRUCTOR)
			return (parent);
	}

	if ((ps = ps_alloc (str_open)) == NULLPS) {
		LLOG (log_dsap,LLOG_EXCEPTIONS,("file open ps_alloc failed"));
		return (NULLENTRY);
	}
	if (str_setup (ps,filename,LINESIZE,1) == NOTOK) {
		LLOG (log_dsap,LLOG_EXCEPTIONS,("file open ps_alloc failed"));
		return (NULLENTRY);
	}

	dn2filename (ps,dn,FALSE);
	if (*(ps->ps_ptr - 1) != '/')
		ps_print (ps,"/EDB");
	else
		ps_print (ps,"EDB");
	*ps->ps_ptr = 0;

	if (parent != NULLENTRY && parent->e_children != NULLAVL) {
		/* yuk - already got an edb lower in the DIT ... */
		treetop = getentry_block (parent,filename);
		if (parse_status != 0)
			return NULLENTRY;

		/*
		 * go through the tree we just loaded, merging it with the
		 * tree previously loaded.
		 */

		avl_apply(treetop, merge_entry, (caddr_t) parent->e_children,
				  NOTOK, AVL_PREORDER);

		if (got_subtree && (parent->e_allchildrenpresent == 1))
			parent->e_allchildrenpresent = 2;

		got_subtree = TRUE;

		/* free the old tree and set got_subtree */
		avl_free(parent->e_children, check_entry_free);

		if (got_subtree && (parent->e_allchildrenpresent == 1))
			parent->e_allchildrenpresent = 2;

		parent->e_children = treetop;


		ps_free (ps);
		parent->e_children = treetop;
		return(parent);
	}

	if (dn == NULLDN) {
		parent = get_default_entry (NULLENTRY);
		parent->e_leaf = FALSE;
		parent->e_acl = acl_alloc();
		parent->e_acl->ac_child = acl_dflt ();
		parent->e_acl->ac_entry = acl_dflt ();
		parent->e_acl->ac_default = acl_dflt ();
		if ((treetop = getentry_block (parent,filename)) == NULLAVL)
			return (NULLENTRY);
	} else
		treetop = getentry_block (parent,filename);

	if (parse_status != 0)
		failed = TRUE;

	parent->e_children = treetop;

	if (entry_load_kids (treetop,strlen (filename) - EDBLEN) == NOTOK) {
		parse_status++;
		return (NULLENTRY);
	}

	ps_free (ps);

	if (failed) {
		parse_status++;
		return (NULLENTRY);
	}

	return(parent);
}

int	refreshing;

int
refresh_from_disk (DN dn) {
	Entry child;
	Entry parent;
	Entry tmp;
	Entry entry_cpy();
	extern Entry database_root;

	if ((parent = local_find_entry (dn,FALSE)) == NULLENTRY)
		return (NOTOK);

	if (parent->e_data != E_DATA_MASTER)
		LLOG (log_dsap,LLOG_EXCEPTIONS, ("WARNING: refreshing SLAVE EDB file -- should not be needed"));

	child = entry_cpy(parent);
	child->e_parent = parent->e_parent;
	child->e_children = parent->e_children;
	parent->e_children = NULLAVL;

	refreshing = TRUE;
	if (dn == NULLDN)
		tmp = subtree_load (NULLENTRY,NULLDN);
	else
		tmp = subtree_load (parent,dn);
	refreshing = FALSE;
	if (tmp == NULLENTRY)
		return (NOTOK);

	if (dn == NULLDN) {
		database_root = child;
		directory_free (child);
		database_root = tmp;
	} else
		directory_free(child);

	return (OK);
}

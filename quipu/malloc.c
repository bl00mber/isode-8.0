/* malloc.c - Quipu DSA specific memory management */

#ifndef	lint
static char *rcsid = "$Header: /xtel/isode/isode/quipu/RCS/malloc.c,v 9.0 1992/06/16 12:34:01 isode Rel $";
#endif

/*
 * $Header: /xtel/isode/isode/quipu/RCS/malloc.c,v 9.0 1992/06/16 12:34:01 isode Rel $
 *
 *
 * $Log: malloc.c,v $
 * Revision 9.0  1992/06/16  12:34:01  isode
 * Release 8.0
 *
 */

/*
 *				  NOTICE
 *
 *    Acquisition, use, and distribution of this module and related
 *    materials are subject to the restrictions of a license agreement.
 *    Consult the Preface in the User's Manual for the full terms of
 *    this agreement.
 *
 */

#include <stdio.h>
#include "manifest.h"
#include "quipu/util.h"
#ifndef MALLOC_TEST
#include "quipu/malloc.h"
#endif

#if (defined (SYS5) || defined (__STDC__) || defined (_AIX)) && !defined (HPUX) && !defined (masscomp)
#define MALLOC_RETURN void *
#define FREE_RETURN void
#else
#define MALLOC_RETURN char *
#define FREE_RETURN int
#endif

static int malloc_file = 0;

#ifdef MALLOC_TEST
#define QUIPU_MALLOC
#undef LLOG
#define LLOG(a,b,c)
#define attempt_restart()
int mem_heap = 0;
#endif

#ifdef QUIPU_MALLOC

#ifndef MALLOC_TEST
extern LLog * log_dsap;
extern SFD attempt_restart();
#endif

#ifdef MALLOCDEBUG

#ifdef sun3
#define MALLOCSTACK
#include <frame.h>
#endif

#ifdef sun4
#define MALLOCSTACK
#include <machine/frame.h>
#endif

#endif /* MALLOCDEBUG */

#ifdef MALLOCSTACK
#include "sys.file.h"
off_t lseek();

#ifndef MALLOCTRACE
#define MALLOCTRACE
#endif

#else   /* MALLOCSTACK */

#define write_stack(x)

#endif	/* MALLOCSTACK */


#define MAXHEAP		100		/* Number of heaps */
#ifndef	BSD42
#define PAGESIZE	0x2000		/* The systems memory page size */
#else
#define	PAGESIZE	pagesize
#endif

#define ALIGN(x)	(((x) + (sizeof(char *) - 1)) & ~(sizeof(char *) - 1))
#define PAGEALIGN(x)	(((x) + pageminusone) & pagemask)
#define SMALLMAX	smallmax  /* largest block a short can reference */


struct header {
	union {
		struct {
			unsigned short 	 control;
			unsigned short   size;
		} small;
		size_t big;
	} un;
};

#define bigsize		un.big
#define smallsize	un.small.size
#define use		un.small.control

#define INUSE           0x1000
#define USED(x)         (x->use & INUSE)

/* sizes chosen for anticipated QUIPU behaviour */

#define BUCKETS 8
static size_t sizes [BUCKETS] = { 0, 12, 24, 68, 512, 1028, 8204, MAXINT};

struct freelist {
	struct header * block;
	size_t size;
	struct freelist * next;
	struct freelist * prev;
};

struct freehead {
	struct header	head;
	struct freelist * flist;
};

static struct freelist  heaps[MAXHEAP][BUCKETS];
static struct freelist *heapptr[MAXHEAP];
static struct freelist  bigmem = { 0,0,&bigmem, &bigmem};
static struct freelist  *bigfree = &bigmem;
static struct freelist  freemem = { 0,0,&freemem, &freemem};
static struct freelist  *listfree = &freemem;

static int first_malloc = 1;
static char * top_mem;

#ifdef	BSD42
static size_t pagesize = 0x2000;
#endif

/* all calculated later - initialise for safety */
static size_t pagemask = 0xE000;
static size_t pageminusone = 0x1FFF;
static unsigned short smallmax = 0xDFFF;

extern caddr_t sbrk();

#ifdef MALLOCTRACE
static int malloc_started = 0;
static char * malloc_fname = (char *)0;
#endif

#ifndef MALLOCTRACE
/* ARGSUSED */
#endif

#endif	/* QUIPU_MALLOC */

int
start_malloc_trace (char *f) {
#ifdef MALLOCTRACE
	char * env, *getenv ();

	if (((env = getenv ("TRACE_MEMORY")) == (char *)0) || (*env == 0))
		return;

	if (! malloc_started) {
		if (f == (char *)0)
			malloc_fname = "memory.out";
		else
			malloc_fname = f;
		malloc_file = creat (malloc_fname,0644);
		malloc_started = 1;
	} else {
		malloc_file = open (malloc_fname,1);
		lseek (malloc_file,0l,2);
	}
#else
	malloc_file = 0;
#endif
}

int
stop_malloc_trace (void) {
#ifdef MALLOCTRACE
	if (malloc_file)
		close (malloc_file);
#endif
	malloc_file = 0;
}

#ifdef QUIPU_MALLOC
#ifdef MALLOCTRACE

static
write_string (char *p) {
	char *q;

	if (!malloc_file)
		return;

	q = p;
	while (*q++)
		;
	write(malloc_file, p, q-p-1);
}

static
write_addr (char *addr) {
	char buf[20];
	static char hex[] = "0123456789abcdef";
	char *ptr;
	int x;

	if (!malloc_file)
		return;

	x = (int) addr;

	if (x == 0) {
		write(malloc_file, "0 ",2);
		return;
	}

	ptr = buf;
	while (x > 0)
		*ptr++ = hex[x % 16], x /= 16;
	*ptr = 0;

	while (ptr != buf)
		write(malloc_file, --ptr,1);

	write (malloc_file," ",1);
}

static
write_int (unsigned x) {
	char buf[20];
	static char dec[] = "0123456789";
	char *ptr;

	if (!malloc_file)
		return;

	if (x == 0) {
		write(malloc_file, "0 ",2);
		return;
	}

	ptr = buf;
	while (x > 0)
		*ptr++ = dec[x % 10], x /= 10;

	while (ptr != buf)
		write(malloc_file, --ptr,1);

	write (malloc_file," ",1);
}

static
log_realloc (size_t oldlen, size_t newlen, size_t bsize, char *addr) {
	write_string ("realloc of ");
	write_int (oldlen);
	write_string ("at ");
	write_addr (addr);
	write_string ("\n");
	write_stack("x");

	write_string ("realloc-to of ");
	write_int (newlen);
	write_string ("gets ");
	write_int (bsize);
	write_string ("at ");
	write_addr (addr);
	write_string ("\n");
	write_stack("x");
}

static
print_free_list (size_t heap) {
	int i;
	struct freelist * top;
	struct freelist * ptr;

	write_string ("free list for heap ");
	write_int(heap);
	write_string(":\n");
	for (i=0; i<BUCKETS; i++) {
		top = &heaps[heap][i];
		write_int (sizes[i]);
		write_string (": ");
		for (ptr = top->next ; ptr != top; ptr=ptr->next)
			write_int (ptr->size);
		write_string ("\n");
	}
}

#ifdef MALLOCSTACK

#ifdef sun4
/* ARGSUSED */
#endif

static write_stack (x)
char * x;
{
	struct frame *fp;

	if (!malloc_file)
		return;

#ifdef sun3
	for (fp = ((struct frame*)(&x-2))->next ;
			fp;
			fp = fp->fr_savfp)
#endif
#ifdef sun4
		for ( fp = (struct frame *) (&fp+1);
				fp->fr_savfp;
				fp = fp->fr_savfp)
#endif
		{
			write_string ("C ");
			write_addr ((char *)fp->fr_savpc);
			write_string ("\n");
		}
	write_string ("\n");
}

#endif /* MALLOCSTACK */
#endif /* MALLOCTRACE */

#define return_freelist(z) { \
	z->next = listfree->next; \
	z->prev = listfree; \
	listfree->next->prev = z; \
	listfree->next = z; }

static struct freelist *
new_freelist (void) {
	struct freelist * flist;
	int i;
	struct freelist * next;

	if ((flist = (struct freelist *) sbrk ((int)PAGESIZE)) == (struct freelist *)-1) {
		/* there are 100s of places where Quipu would choke on a naff malloc */
		attempt_restart (-2);
		return ((struct freelist *)0);
	}
	top_mem = (char *)flist + PAGESIZE;
	next = (struct freelist *)flist;
	next++;
	for (i=sizeof (struct freelist); i< PAGESIZE ; i+=sizeof (struct freelist)) {
		return_freelist (next);
		next++;
	}

	return (flist);
}


static char *
big_malloc (
	/* used for mallocs of > MAXSMALL */
	unsigned realsize
) {
	size_t blocksize;
	struct freelist * flist;
	struct header * head = (struct header *)0;
	char * mem;

	for (flist = bigfree->next; flist != bigfree; flist=flist->next) {
		if (flist->size >= realsize) {
			head = flist->block;
			flist->prev->next = flist->next;
			flist->next->prev = flist->prev;
			return_freelist (flist);
			break;
		}
	}

	if (head == (struct header *)0) {
		/* go and get one then !!! */
		blocksize = PAGEALIGN(realsize);
		if ((head = (struct header *) sbrk ((int)blocksize)) == (struct header *)-1) {
			/* there are 100s of places where Quipu would choke on a naff malloc */
			attempt_restart (-2);
			return ((char *)0);
		}
		top_mem = (char *)head + blocksize;
		head->bigsize = blocksize | 0x01;
	} else
		head->bigsize |= 0x01;

	mem = (char *) head + ALIGN(sizeof (struct header));

#ifdef MALLOCTRACE
	write_string ("gets ");
	write_int (head->bigsize & ~1 );
	write_string ("at ");
	write_addr (mem);
	write_string ("\n");
	write_stack("x");
#endif

	return (mem);

}

static
big_free (struct header *ptr) {
	struct freelist *next;
	struct freehead *x;

	if (listfree->next == listfree) {
		if ((next = new_freelist ()) == (struct freelist *)0)
			return;
	} else {
		next = listfree->next;
		next->prev->next = next->next;
		next->next->prev = next->prev;
	}

	ptr->bigsize &= ~1;
	next->size = ptr->bigsize;
	next->block = ptr;
	next->next = bigfree->next;
	next->prev = bigfree;
	bigfree->next->prev = next;
	bigfree->next = next;

	x = (struct freehead *) ptr;

	x->flist = next;
}

static
add_free (struct header *x) {
	struct freelist *next, *c;
	size_t * p = sizes;

	x->use &= ~INUSE;

	if ((c = heapptr[x->use]) == (struct freelist *) 0)
		c = heapptr[x->use] = heaps[x->use];

	while ( x->smallsize > *p++ )
		;

	c = &c[ (p-1) - sizes];

	if (listfree->next == listfree) {
		if ((next = new_freelist ()) == (struct freelist *)0)
			return;
	} else {
		next = listfree->next;
		next->prev->next = next->next;
		next->next->prev = next->prev;
	}

	next->size = x->smallsize;
	next->block = x;
	next->next = c->next;
	next->prev = c;
	c->next->prev = next;
	c->next = next;

	((struct freehead *) x)->flist = next;
}

#define remove_free(a) { \
	a->block->use |= INUSE;	\
	a->prev->next = a->next; \
	a->next->prev = a->prev; \
	return_freelist(a); }

static struct header *
next_free_block (struct header *ptr) {
	struct header * next;

	next = (struct header *)((char *)ptr + ptr->smallsize);

	if (((size_t)(next - 1) & pagemask) != ((size_t)next & pagemask))
		return (struct header *)0;

	if (((char *)next < top_mem) && (next->use == (ptr->use & ~INUSE)))
		return (next);

	return (struct header *)0;

}

#define use_block(ptr,size) if ((ptr->smallsize != size) && (ptr->smallsize >= size + sizeof (struct freehead))) { \
	struct header *unext; \
	unext = (struct header *)((char *)ptr + size); \
	unext->smallsize = ptr->smallsize - size; \
	unext->use = ptr->use & ~INUSE; \
	ptr->smallsize = size; \
	ptr->use |= INUSE; \
	add_free (unext); }

MALLOC_RETURN
#ifdef lint
x_malloc (size)
#else
malloc (size)
#endif
size_t size;
{
	char * mem;
	struct header *head;
	size_t realsize, blocksize;
	struct freelist * top;
	struct freelist * ptr;
	int i;
	size_t * p = sizes;

	if (first_malloc) {
#ifdef	BSD42
		pagesize = getpagesize ();
#endif
		pageminusone = PAGESIZE - 1;
		pagemask = ~pageminusone;
		smallmax = (~0) - PAGESIZE;
	}

	if (mem_heap >= MAXHEAP)
		mem_heap = MAXHEAP - 1;

	if (size < sizeof (struct freelist *))	/* memory will be used when freed for freelist !!! */
		realsize = ALIGN (sizeof (struct freehead));
	else
		realsize = ALIGN (size) + ALIGN (sizeof (struct header));

	if (realsize >= SMALLMAX) {
#ifdef MALLOCTRACE
		write_string ("malloc of ");
		write_int (size);
#endif
		return (big_malloc (realsize));
	}

	if (first_malloc) {
		/* set up freelist */
		size_t x;
		int j;

		for (i = 0; i < MAXHEAP; i++) {
			heapptr[i] = (struct freelist *) 0;
			for (j = 0 ; j<BUCKETS; j++) {
				heaps[i][j].prev = &heaps[i][j];
				heaps[i][j].next = &heaps[i][j];

				heaps[i][j].size = 0;
			}
		}

		/* align first sbrk to page boundary */
		x = (size_t)sbrk(0);
		x = PAGEALIGN (x) - x;
		blocksize = PAGEALIGN(realsize) + x;
		if ((head = (struct header *) sbrk ((int)blocksize)) == (struct header *)-1) {
			/* there are 100s of places where Quipu would choke on a naff malloc */
			attempt_restart (-2);
			return ((char *)0);
		}
		head->smallsize = blocksize;
		top_mem = (char *)head + blocksize;
		first_malloc = 0;
		head->use = INUSE | mem_heap;
	} else {
		if ((top = heapptr[mem_heap]) == (struct freelist *)0)
			goto allocate_more;

		while ( size > *p++ )
			;

		top = &top[ i = ((p-1) - sizes) ];

		for (; i < BUCKETS ; i++,top++ ) {
			for (ptr = top->next ; ptr != top; ptr=ptr->next) {
				if (ptr->size >= realsize) {
					remove_free (ptr);
					head = ptr->block;
					goto return_memory;
				}
			}
		}

allocate_more:
		;

		blocksize = PAGEALIGN(realsize);
		if ((head = (struct header *) sbrk ((int)blocksize)) == (struct header *)-1) {
			/* there are 100s of places where Quipu would choke on a naff malloc */
			attempt_restart (-2);
			return ((char *)0);
		}
		head->smallsize = blocksize;
		top_mem = (char *)head + blocksize;
		head->use = INUSE | mem_heap;

	}

return_memory:
	;

	use_block (head,realsize);

	mem = (char *) head + ALIGN(sizeof (struct header));

#ifdef MALLOCTRACE
	write_string ("malloc of ");
	write_int (size);
	write_string ("gets ");
	write_int (head->smallsize);
	write_string ("at ");
	write_addr (mem);
	write_string ("heap ");
	write_int (mem_heap);
	write_string ("\n");
	write_stack("x");
#endif

	return (mem);
}

FREE_RETURN
#ifdef lint
x_free(s)
#else
free(s)
#endif
void *s;
{
	struct header * ptr;
	struct header * next;
	
	if (s == NULL)
		return;
	
	ptr = (struct header *) (s - ALIGN (sizeof (struct header)));

	if (ptr->smallsize & 1) {
#ifdef MALLOCTRACE
		write_string ("free of ");
		write_int (ptr->bigsize);
		write_string ("at ");
		write_addr (s);
		write_string ("heap (big)\n");
		write_stack("x");
#endif
		big_free (ptr);
		return;
	}

#ifdef MALLOCTRACE
	write_string ("free of ");
	write_int (ptr->smallsize);
	write_string ("at ");
	write_addr (s);
	write_string ("heap ");
	write_int (ptr->use & ~INUSE);
	write_string ("\n");
	write_stack("x");
#endif

	if (! USED(ptr)) {
		LLOG (log_dsap,LLOG_EXCEPTIONS,("freeing problem"));
		return;		/* already freed !!! */
	}

	/* join forward free block in loop to catch previous back blocks ! */
	while ((next = next_free_block(ptr)) != (struct header *) 0) {
		ptr->smallsize += next->smallsize;
		remove_free (((struct freehead *)next)->flist);
	}
	add_free (ptr);

	return;

}

MALLOC_RETURN
#ifdef lint
x_realloc(s, n)
#else
realloc(s, n)
#endif
void *s;
size_t n;
{
	char * mem;
	size_t realsize;
	struct header * ptr;
	struct header * next;
	size_t copysize;

	ptr = (struct header *) (s - ALIGN (sizeof (struct header)));

	if (ptr->smallsize & 1) {
		DLOG (log_dsap,LLOG_DEBUG,("re-alloc of big block"));
#ifdef MALLOCTRACE
		write_stack ("x");
#endif
		realsize = ALIGN (n) + ALIGN (sizeof (struct header));
		copysize = ptr->bigsize & ~1;

		if (copysize >= realsize)
			/* its big enough - carry on */
			return s;

		goto out;
	}

	copysize = ptr->smallsize;

	if (! USED(ptr)) {
		LLOG (log_dsap,LLOG_EXCEPTIONS,("re-alloc problem"));
#ifdef MALLOCTRACE
		write_stack ("x");
#endif
		goto out;
	}

	realsize = ALIGN (n) + ALIGN (sizeof (struct header));

	if (realsize >= SMALLMAX) {
		DLOG (log_dsap,LLOG_DEBUG,("re-alloc in to big block"));
#ifdef MALLOCTRACE
		write_stack ("x");
#endif
		goto out;

	}
	if (ptr->smallsize >= realsize) {
#ifdef MALLOCTRACE
		log_realloc (ptr->smallsize,realsize,ptr->smallsize,s);
#endif
		return (s);
	}

	/* see if next block is free */
	if ((next = next_free_block(ptr)) != (struct header *) 0) {
		struct header * top;

		top = next;
		/* join with other free blocks */
		while ((next = next_free_block(top)) != (struct header *) 0) {
			top->smallsize += next->smallsize;
			remove_free (((struct freehead *)next)->flist);
		}
		remove_free (((struct freehead *)top)->flist);

		/* is it big enough ? */
		if (ptr->smallsize + top->smallsize >= realsize) {
#ifdef MALLOCTRACE
			size_t savesize;
			savesize = ptr->smallsize;
#endif

			ptr->smallsize += top->smallsize;
			use_block (ptr,realsize);
#ifdef MALLOCTRACE
			log_realloc (savesize,realsize,ptr->smallsize,s);
#endif
			return (s);
		} else
			/* return to free list */
			add_free (top);
	}

out:
	;
	if ((mem = malloc (n)) == (char *)0)
		return ((char *)0);

	copysize -= ALIGN (sizeof (struct header));
	copysize = MIN (copysize, n);
	bcopy (s,mem,(int)copysize);
	free (s);

	return (mem);
}

MALLOC_RETURN
#ifdef lint
x_calloc(n, size)
#else
calloc(n, size)
#endif
size_t n, size;
{
	char * mem;
	size_t x;

	x= n*size;
	if ((mem = malloc (x)) == (char *)0)
		return ((char *)0);
	bzero (mem,(int)x);
	return (mem);
}

FREE_RETURN
#ifdef lint
x_cfree(mem)
#else
cfree(mem)
#endif
char *  mem;
{
	free(mem);
}

#endif	/* QUIPUMALLOC */

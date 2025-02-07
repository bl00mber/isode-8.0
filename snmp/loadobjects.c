/* compiled */

#include <stdio.h>
#include "objects.h"

static unsigned int _elems[] = {
	0, 0, /* ccitt */
	0, 0, 0, /* localAgent */
	1, 0, /* iso */
	1, 3, 6, 1, 0, /* internet */
	1, 3, 6, 1, 1, 0, /* directory */
	1, 3, 6, 1, 2, 0, /* mgmt */
	1, 3, 6, 1, 2, 1, 0, /* mib-2 */
	1, 3, 6, 1, 2, 1, 1, 0, /* system */
	1, 3, 6, 1, 2, 1, 1, 1, 0, /* sysDescr */
	1, 3, 6, 1, 2, 1, 1, 2, 0, /* sysObjectID */
	1, 3, 6, 1, 2, 1, 1, 3, 0, /* sysUpTime */
	1, 3, 6, 1, 2, 1, 1, 4, 0, /* sysContact */
	1, 3, 6, 1, 2, 1, 1, 5, 0, /* sysName */
	1, 3, 6, 1, 2, 1, 1, 6, 0, /* sysLocation */
	1, 3, 6, 1, 2, 1, 1, 7, 0, /* sysServices */
	1, 3, 6, 1, 2, 1, 2, 0, /* interfaces */
	1, 3, 6, 1, 2, 1, 2, 1, 0, /* ifNumber */
	1, 3, 6, 1, 2, 1, 2, 2, 0, /* ifTable */
	1, 3, 6, 1, 2, 1, 2, 2, 1, 0, /* ifEntry */
	1, 3, 6, 1, 2, 1, 2, 2, 1, 1, 0, /* ifIndex */
	1, 3, 6, 1, 2, 1, 2, 2, 1, 2, 0, /* ifDescr */
	1, 3, 6, 1, 2, 1, 2, 2, 1, 3, 0, /* ifType */
	1, 3, 6, 1, 2, 1, 2, 2, 1, 4, 0, /* ifMtu */
	1, 3, 6, 1, 2, 1, 2, 2, 1, 5, 0, /* ifSpeed */
	1, 3, 6, 1, 2, 1, 2, 2, 1, 6, 0, /* ifPhysAddress */
	1, 3, 6, 1, 2, 1, 2, 2, 1, 7, 0, /* ifAdminStatus */
	1, 3, 6, 1, 2, 1, 2, 2, 1, 8, 0, /* ifOperStatus */
	1, 3, 6, 1, 2, 1, 2, 2, 1, 9, 0, /* ifLastChange */
	1, 3, 6, 1, 2, 1, 2, 2, 1, 10, 0, /* ifInOctets */
	1, 3, 6, 1, 2, 1, 2, 2, 1, 11, 0, /* ifInUcastPkts */
	1, 3, 6, 1, 2, 1, 2, 2, 1, 12, 0, /* ifInNUcastPkts */
	1, 3, 6, 1, 2, 1, 2, 2, 1, 13, 0, /* ifInDiscards */
	1, 3, 6, 1, 2, 1, 2, 2, 1, 14, 0, /* ifInErrors */
	1, 3, 6, 1, 2, 1, 2, 2, 1, 15, 0, /* ifInUnknownProtos */
	1, 3, 6, 1, 2, 1, 2, 2, 1, 16, 0, /* ifOutOctets */
	1, 3, 6, 1, 2, 1, 2, 2, 1, 17, 0, /* ifOutUcastPkts */
	1, 3, 6, 1, 2, 1, 2, 2, 1, 18, 0, /* ifOutNUcastPkts */
	1, 3, 6, 1, 2, 1, 2, 2, 1, 19, 0, /* ifOutDiscards */
	1, 3, 6, 1, 2, 1, 2, 2, 1, 20, 0, /* ifOutErrors */
	1, 3, 6, 1, 2, 1, 2, 2, 1, 21, 0, /* ifOutQLen */
	1, 3, 6, 1, 2, 1, 2, 2, 1, 22, 0, /* ifSpecific */
	1, 3, 6, 1, 2, 1, 3, 0, /* at */
	1, 3, 6, 1, 2, 1, 3, 1, 0, /* atTable */
	1, 3, 6, 1, 2, 1, 3, 1, 1, 0, /* atEntry */
	1, 3, 6, 1, 2, 1, 3, 1, 1, 1, 0, /* atIfIndex */
	1, 3, 6, 1, 2, 1, 3, 1, 1, 2, 0, /* atPhysAddress */
	1, 3, 6, 1, 2, 1, 3, 1, 1, 3, 0, /* atNetAddress */
	1, 3, 6, 1, 2, 1, 4, 0, /* ip */
	1, 3, 6, 1, 2, 1, 4, 1, 0, /* ipForwarding */
	1, 3, 6, 1, 2, 1, 4, 2, 0, /* ipDefaultTTL */
	1, 3, 6, 1, 2, 1, 4, 3, 0, /* ipInReceives */
	1, 3, 6, 1, 2, 1, 4, 4, 0, /* ipInHdrErrors */
	1, 3, 6, 1, 2, 1, 4, 5, 0, /* ipInAddrErrors */
	1, 3, 6, 1, 2, 1, 4, 6, 0, /* ipForwDatagrams */
	1, 3, 6, 1, 2, 1, 4, 7, 0, /* ipInUnknownProtos */
	1, 3, 6, 1, 2, 1, 4, 8, 0, /* ipInDiscards */
	1, 3, 6, 1, 2, 1, 4, 9, 0, /* ipInDelivers */
	1, 3, 6, 1, 2, 1, 4, 10, 0, /* ipOutRequests */
	1, 3, 6, 1, 2, 1, 4, 11, 0, /* ipOutDiscards */
	1, 3, 6, 1, 2, 1, 4, 12, 0, /* ipOutNoRoutes */
	1, 3, 6, 1, 2, 1, 4, 13, 0, /* ipReasmTimeout */
	1, 3, 6, 1, 2, 1, 4, 14, 0, /* ipReasmReqds */
	1, 3, 6, 1, 2, 1, 4, 15, 0, /* ipReasmOKs */
	1, 3, 6, 1, 2, 1, 4, 16, 0, /* ipReasmFails */
	1, 3, 6, 1, 2, 1, 4, 17, 0, /* ipFragOKs */
	1, 3, 6, 1, 2, 1, 4, 18, 0, /* ipFragFails */
	1, 3, 6, 1, 2, 1, 4, 19, 0, /* ipFragCreates */
	1, 3, 6, 1, 2, 1, 4, 20, 0, /* ipAddrTable */
	1, 3, 6, 1, 2, 1, 4, 20, 1, 0, /* ipAddrEntry */
	1, 3, 6, 1, 2, 1, 4, 20, 1, 1, 0, /* ipAdEntAddr */
	1, 3, 6, 1, 2, 1, 4, 20, 1, 2, 0, /* ipAdEntIfIndex */
	1, 3, 6, 1, 2, 1, 4, 20, 1, 3, 0, /* ipAdEntNetMask */
	1, 3, 6, 1, 2, 1, 4, 20, 1, 4, 0, /* ipAdEntBcastAddr */
	1, 3, 6, 1, 2, 1, 4, 20, 1, 5, 0, /* ipAdEntReasmMaxSize */
	1, 3, 6, 1, 2, 1, 4, 21, 0, /* ipRouteTable */
	1, 3, 6, 1, 2, 1, 4, 21, 1, 0, /* ipRouteEntry */
	1, 3, 6, 1, 2, 1, 4, 21, 1, 1, 0, /* ipRouteDest */
	1, 3, 6, 1, 2, 1, 4, 21, 1, 2, 0, /* ipRouteIfIndex */
	1, 3, 6, 1, 2, 1, 4, 21, 1, 3, 0, /* ipRouteMetric1 */
	1, 3, 6, 1, 2, 1, 4, 21, 1, 4, 0, /* ipRouteMetric2 */
	1, 3, 6, 1, 2, 1, 4, 21, 1, 5, 0, /* ipRouteMetric3 */
	1, 3, 6, 1, 2, 1, 4, 21, 1, 6, 0, /* ipRouteMetric4 */
	1, 3, 6, 1, 2, 1, 4, 21, 1, 7, 0, /* ipRouteNextHop */
	1, 3, 6, 1, 2, 1, 4, 21, 1, 8, 0, /* ipRouteType */
	1, 3, 6, 1, 2, 1, 4, 21, 1, 9, 0, /* ipRouteProto */
	1, 3, 6, 1, 2, 1, 4, 21, 1, 10, 0, /* ipRouteAge */
	1, 3, 6, 1, 2, 1, 4, 21, 1, 11, 0, /* ipRouteMask */
	1, 3, 6, 1, 2, 1, 4, 21, 1, 12, 0, /* ipRouteMetric5 */
	1, 3, 6, 1, 2, 1, 4, 21, 1, 13, 0, /* ipRouteInfo */
	1, 3, 6, 1, 2, 1, 4, 22, 0, /* ipNetToMediaTable */
	1, 3, 6, 1, 2, 1, 4, 22, 1, 0, /* ipNetToMediaEntry */
	1, 3, 6, 1, 2, 1, 4, 22, 1, 1, 0, /* ipNetToMediaIfIndex */
	1, 3, 6, 1, 2, 1, 4, 22, 1, 2, 0, /* ipNetToMediaPhysAddress */
	1, 3, 6, 1, 2, 1, 4, 22, 1, 3, 0, /* ipNetToMediaNetAddress */
	1, 3, 6, 1, 2, 1, 4, 22, 1, 4, 0, /* ipNetToMediaType */
	1, 3, 6, 1, 2, 1, 4, 23, 0, /* ipRoutingDiscards */
	1, 3, 6, 1, 2, 1, 5, 0, /* icmp */
	1, 3, 6, 1, 2, 1, 5, 1, 0, /* icmpInMsgs */
	1, 3, 6, 1, 2, 1, 5, 2, 0, /* icmpInErrors */
	1, 3, 6, 1, 2, 1, 5, 3, 0, /* icmpInDestUnreachs */
	1, 3, 6, 1, 2, 1, 5, 4, 0, /* icmpInTimeExcds */
	1, 3, 6, 1, 2, 1, 5, 5, 0, /* icmpInParmProbs */
	1, 3, 6, 1, 2, 1, 5, 6, 0, /* icmpInSrcQuenchs */
	1, 3, 6, 1, 2, 1, 5, 7, 0, /* icmpInRedirects */
	1, 3, 6, 1, 2, 1, 5, 8, 0, /* icmpInEchos */
	1, 3, 6, 1, 2, 1, 5, 9, 0, /* icmpInEchoReps */
	1, 3, 6, 1, 2, 1, 5, 10, 0, /* icmpInTimestamps */
	1, 3, 6, 1, 2, 1, 5, 11, 0, /* icmpInTimestampReps */
	1, 3, 6, 1, 2, 1, 5, 12, 0, /* icmpInAddrMasks */
	1, 3, 6, 1, 2, 1, 5, 13, 0, /* icmpInAddrMaskReps */
	1, 3, 6, 1, 2, 1, 5, 14, 0, /* icmpOutMsgs */
	1, 3, 6, 1, 2, 1, 5, 15, 0, /* icmpOutErrors */
	1, 3, 6, 1, 2, 1, 5, 16, 0, /* icmpOutDestUnreachs */
	1, 3, 6, 1, 2, 1, 5, 17, 0, /* icmpOutTimeExcds */
	1, 3, 6, 1, 2, 1, 5, 18, 0, /* icmpOutParmProbs */
	1, 3, 6, 1, 2, 1, 5, 19, 0, /* icmpOutSrcQuenchs */
	1, 3, 6, 1, 2, 1, 5, 20, 0, /* icmpOutRedirects */
	1, 3, 6, 1, 2, 1, 5, 21, 0, /* icmpOutEchos */
	1, 3, 6, 1, 2, 1, 5, 22, 0, /* icmpOutEchoReps */
	1, 3, 6, 1, 2, 1, 5, 23, 0, /* icmpOutTimestamps */
	1, 3, 6, 1, 2, 1, 5, 24, 0, /* icmpOutTimestampReps */
	1, 3, 6, 1, 2, 1, 5, 25, 0, /* icmpOutAddrMasks */
	1, 3, 6, 1, 2, 1, 5, 26, 0, /* icmpOutAddrMaskReps */
	1, 3, 6, 1, 2, 1, 6, 0, /* tcp */
	1, 3, 6, 1, 2, 1, 6, 1, 0, /* tcpRtoAlgorithm */
	1, 3, 6, 1, 2, 1, 6, 2, 0, /* tcpRtoMin */
	1, 3, 6, 1, 2, 1, 6, 3, 0, /* tcpRtoMax */
	1, 3, 6, 1, 2, 1, 6, 4, 0, /* tcpMaxConn */
	1, 3, 6, 1, 2, 1, 6, 5, 0, /* tcpActiveOpens */
	1, 3, 6, 1, 2, 1, 6, 6, 0, /* tcpPassiveOpens */
	1, 3, 6, 1, 2, 1, 6, 7, 0, /* tcpAttemptFails */
	1, 3, 6, 1, 2, 1, 6, 8, 0, /* tcpEstabResets */
	1, 3, 6, 1, 2, 1, 6, 9, 0, /* tcpCurrEstab */
	1, 3, 6, 1, 2, 1, 6, 10, 0, /* tcpInSegs */
	1, 3, 6, 1, 2, 1, 6, 11, 0, /* tcpOutSegs */
	1, 3, 6, 1, 2, 1, 6, 12, 0, /* tcpRetransSegs */
	1, 3, 6, 1, 2, 1, 6, 13, 0, /* tcpConnTable */
	1, 3, 6, 1, 2, 1, 6, 13, 1, 0, /* tcpConnEntry */
	1, 3, 6, 1, 2, 1, 6, 13, 1, 1, 0, /* tcpConnState */
	1, 3, 6, 1, 2, 1, 6, 13, 1, 2, 0, /* tcpConnLocalAddress */
	1, 3, 6, 1, 2, 1, 6, 13, 1, 3, 0, /* tcpConnLocalPort */
	1, 3, 6, 1, 2, 1, 6, 13, 1, 4, 0, /* tcpConnRemAddress */
	1, 3, 6, 1, 2, 1, 6, 13, 1, 5, 0, /* tcpConnRemPort */
	1, 3, 6, 1, 2, 1, 6, 14, 0, /* tcpInErrs */
	1, 3, 6, 1, 2, 1, 6, 15, 0, /* tcpOutRsts */
	1, 3, 6, 1, 2, 1, 7, 0, /* udp */
	1, 3, 6, 1, 2, 1, 7, 1, 0, /* udpInDatagrams */
	1, 3, 6, 1, 2, 1, 7, 2, 0, /* udpNoPorts */
	1, 3, 6, 1, 2, 1, 7, 3, 0, /* udpInErrors */
	1, 3, 6, 1, 2, 1, 7, 4, 0, /* udpOutDatagrams */
	1, 3, 6, 1, 2, 1, 7, 5, 0, /* udpTable */
	1, 3, 6, 1, 2, 1, 7, 5, 1, 0, /* udpEntry */
	1, 3, 6, 1, 2, 1, 7, 5, 1, 1, 0, /* udpLocalAddress */
	1, 3, 6, 1, 2, 1, 7, 5, 1, 2, 0, /* udpLocalPort */
	1, 3, 6, 1, 2, 1, 8, 0, /* egp */
	1, 3, 6, 1, 2, 1, 8, 1, 0, /* egpInMsgs */
	1, 3, 6, 1, 2, 1, 8, 2, 0, /* egpInErrors */
	1, 3, 6, 1, 2, 1, 8, 3, 0, /* egpOutMsgs */
	1, 3, 6, 1, 2, 1, 8, 4, 0, /* egpOutErrors */
	1, 3, 6, 1, 2, 1, 8, 5, 0, /* egpNeighTable */
	1, 3, 6, 1, 2, 1, 8, 5, 1, 0, /* egpNeighEntry */
	1, 3, 6, 1, 2, 1, 8, 5, 1, 1, 0, /* egpNeighState */
	1, 3, 6, 1, 2, 1, 8, 5, 1, 2, 0, /* egpNeighAddr */
	1, 3, 6, 1, 2, 1, 8, 5, 1, 3, 0, /* egpNeighAs */
	1, 3, 6, 1, 2, 1, 8, 5, 1, 4, 0, /* egpNeighInMsgs */
	1, 3, 6, 1, 2, 1, 8, 5, 1, 5, 0, /* egpNeighInErrs */
	1, 3, 6, 1, 2, 1, 8, 5, 1, 6, 0, /* egpNeighOutMsgs */
	1, 3, 6, 1, 2, 1, 8, 5, 1, 7, 0, /* egpNeighOutErrs */
	1, 3, 6, 1, 2, 1, 8, 5, 1, 8, 0, /* egpNeighInErrMsgs */
	1, 3, 6, 1, 2, 1, 8, 5, 1, 9, 0, /* egpNeighOutErrMsgs */
	1, 3, 6, 1, 2, 1, 8, 5, 1, 10, 0, /* egpNeighStateUps */
	1, 3, 6, 1, 2, 1, 8, 5, 1, 11, 0, /* egpNeighStateDowns */
	1, 3, 6, 1, 2, 1, 8, 5, 1, 12, 0, /* egpNeighIntervalHello */
	1, 3, 6, 1, 2, 1, 8, 5, 1, 13, 0, /* egpNeighIntervalPoll */
	1, 3, 6, 1, 2, 1, 8, 5, 1, 14, 0, /* egpNeighMode */
	1, 3, 6, 1, 2, 1, 8, 5, 1, 15, 0, /* egpNeighEventTrigger */
	1, 3, 6, 1, 2, 1, 8, 6, 0, /* egpAs */
	1, 3, 6, 1, 2, 1, 10, 0, /* transmission */
	1, 3, 6, 1, 2, 1, 10, 18, 0, /* ds1 */
	1, 3, 6, 1, 2, 1, 10, 18, 1, 0, /* ds1ConfigTable */
	1, 3, 6, 1, 2, 1, 10, 18, 1, 1, 0, /* ds1ConfigEntry */
	1, 3, 6, 1, 2, 1, 10, 18, 1, 1, 1, 0, /* ds1CSUIndex */
	1, 3, 6, 1, 2, 1, 10, 18, 1, 1, 2, 0, /* ds1Index */
	1, 3, 6, 1, 2, 1, 10, 18, 1, 1, 3, 0, /* ds1TimeElapsed */
	1, 3, 6, 1, 2, 1, 10, 18, 1, 1, 4, 0, /* ds1ValidIntervals */
	1, 3, 6, 1, 2, 1, 10, 18, 1, 1, 5, 0, /* ds1LineType */
	1, 3, 6, 1, 2, 1, 10, 18, 1, 1, 6, 0, /* ds1ZeroCoding */
	1, 3, 6, 1, 2, 1, 10, 18, 1, 1, 7, 0, /* ds1Loopback */
	1, 3, 6, 1, 2, 1, 10, 18, 1, 1, 8, 0, /* ds1SendCode */
	1, 3, 6, 1, 2, 1, 10, 18, 1, 1, 9, 0, /* ds1YellowAlarm */
	1, 3, 6, 1, 2, 1, 10, 18, 1, 1, 10, 0, /* ds1RedAlarm */
	1, 3, 6, 1, 2, 1, 10, 18, 1, 1, 11, 0, /* ds1CircuitIdentifier */
	1, 3, 6, 1, 2, 1, 10, 18, 2, 0, /* ds1IntervalTable */
	1, 3, 6, 1, 2, 1, 10, 18, 2, 1, 0, /* ds1IntervalEntry */
	1, 3, 6, 1, 2, 1, 10, 18, 2, 1, 1, 0, /* ds1IntervalIndex */
	1, 3, 6, 1, 2, 1, 10, 18, 2, 1, 2, 0, /* ds1IntervalNumber */
	1, 3, 6, 1, 2, 1, 10, 18, 2, 1, 3, 0, /* ds1IntervalESs */
	1, 3, 6, 1, 2, 1, 10, 18, 2, 1, 4, 0, /* ds1IntervalSESs */
	1, 3, 6, 1, 2, 1, 10, 18, 2, 1, 5, 0, /* ds1IntervalSEFSs */
	1, 3, 6, 1, 2, 1, 10, 18, 2, 1, 6, 0, /* ds1IntervalUASs */
	1, 3, 6, 1, 2, 1, 10, 18, 2, 1, 7, 0, /* ds1IntervalCSSs */
	1, 3, 6, 1, 2, 1, 10, 18, 2, 1, 8, 0, /* ds1IntervalBPVs */
	1, 3, 6, 1, 2, 1, 10, 18, 2, 1, 9, 0, /* ds1IntervalCVs */
	1, 3, 6, 1, 2, 1, 10, 18, 3, 0, /* ds1CurrentTable */
	1, 3, 6, 1, 2, 1, 10, 18, 3, 1, 0, /* ds1CurrentEntry */
	1, 3, 6, 1, 2, 1, 10, 18, 3, 1, 1, 0, /* ds1CurrentIndex */
	1, 3, 6, 1, 2, 1, 10, 18, 3, 1, 2, 0, /* ds1CurrentESs */
	1, 3, 6, 1, 2, 1, 10, 18, 3, 1, 3, 0, /* ds1CurrentSESs */
	1, 3, 6, 1, 2, 1, 10, 18, 3, 1, 4, 0, /* ds1CurrentSEFSs */
	1, 3, 6, 1, 2, 1, 10, 18, 3, 1, 5, 0, /* ds1CurrentUASs */
	1, 3, 6, 1, 2, 1, 10, 18, 3, 1, 6, 0, /* ds1CurrentCSSs */
	1, 3, 6, 1, 2, 1, 10, 18, 3, 1, 7, 0, /* ds1CurrentBPVs */
	1, 3, 6, 1, 2, 1, 10, 18, 3, 1, 8, 0, /* ds1CurrentCVs */
	1, 3, 6, 1, 2, 1, 10, 18, 4, 0, /* ds1TotalTable */
	1, 3, 6, 1, 2, 1, 10, 18, 4, 1, 0, /* ds1TotalEntry */
	1, 3, 6, 1, 2, 1, 10, 18, 4, 1, 1, 0, /* ds1TotalIndex */
	1, 3, 6, 1, 2, 1, 10, 18, 4, 1, 2, 0, /* ds1TotalESs */
	1, 3, 6, 1, 2, 1, 10, 18, 4, 1, 3, 0, /* ds1TotalSESs */
	1, 3, 6, 1, 2, 1, 10, 18, 4, 1, 4, 0, /* ds1TotalSEFSs */
	1, 3, 6, 1, 2, 1, 10, 18, 4, 1, 5, 0, /* ds1TotalUASs */
	1, 3, 6, 1, 2, 1, 10, 18, 4, 1, 6, 0, /* ds1TotalCSSs */
	1, 3, 6, 1, 2, 1, 10, 18, 4, 1, 7, 0, /* ds1TotalBPVs */
	1, 3, 6, 1, 2, 1, 10, 18, 4, 1, 8, 0, /* ds1TotalCVs */
	1, 3, 6, 1, 2, 1, 10, 18, 5, 0, /* ds1FracTable */
	1, 3, 6, 1, 2, 1, 10, 18, 5, 1, 0, /* ds1FracEntry */
	1, 3, 6, 1, 2, 1, 10, 18, 5, 1, 1, 0, /* ds1FracIndex */
	1, 3, 6, 1, 2, 1, 10, 18, 5, 1, 2, 0, /* ds1FracNumber */
	1, 3, 6, 1, 2, 1, 10, 18, 5, 1, 3, 0, /* ds1FracIfIndex */
	1, 3, 6, 1, 2, 1, 10, 30, 0, /* ds3 */
	1, 3, 6, 1, 2, 1, 10, 30, 1, 0, /* ds3ConfigTable */
	1, 3, 6, 1, 2, 1, 10, 30, 1, 1, 0, /* ds3ConfigEntry */
	1, 3, 6, 1, 2, 1, 10, 30, 1, 1, 1, 0, /* ds3CSUIndex */
	1, 3, 6, 1, 2, 1, 10, 30, 1, 1, 2, 0, /* ds3Index */
	1, 3, 6, 1, 2, 1, 10, 30, 1, 1, 3, 0, /* ds3TimeElapsed */
	1, 3, 6, 1, 2, 1, 10, 30, 1, 1, 4, 0, /* ds3ValidIntervals */
	1, 3, 6, 1, 2, 1, 10, 30, 1, 1, 5, 0, /* ds3LineType */
	1, 3, 6, 1, 2, 1, 10, 30, 1, 1, 6, 0, /* ds3ZeroCoding */
	1, 3, 6, 1, 2, 1, 10, 30, 1, 1, 7, 0, /* ds3Loopback */
	1, 3, 6, 1, 2, 1, 10, 30, 1, 1, 8, 0, /* ds3SendCode */
	1, 3, 6, 1, 2, 1, 10, 30, 1, 1, 9, 0, /* ds3YellowAlarm */
	1, 3, 6, 1, 2, 1, 10, 30, 1, 1, 10, 0, /* ds3RedAlarm */
	1, 3, 6, 1, 2, 1, 10, 30, 1, 1, 11, 0, /* ds3CircuitIdentifier */
	1, 3, 6, 1, 2, 1, 10, 30, 2, 0, /* ds3IntervalTable */
	1, 3, 6, 1, 2, 1, 10, 30, 2, 1, 0, /* ds3IntervalEntry */
	1, 3, 6, 1, 2, 1, 10, 30, 2, 1, 1, 0, /* ds3IntervalIndex */
	1, 3, 6, 1, 2, 1, 10, 30, 2, 1, 2, 0, /* ds3IntervalNumber */
	1, 3, 6, 1, 2, 1, 10, 30, 2, 1, 3, 0, /* ds3IntervalESs */
	1, 3, 6, 1, 2, 1, 10, 30, 2, 1, 4, 0, /* ds3IntervalSESs */
	1, 3, 6, 1, 2, 1, 10, 30, 2, 1, 5, 0, /* ds3IntervalSEFSs */
	1, 3, 6, 1, 2, 1, 10, 30, 2, 1, 6, 0, /* ds3IntervalUASs */
	1, 3, 6, 1, 2, 1, 10, 30, 2, 1, 7, 0, /* ds3IntervalCSSs */
	1, 3, 6, 1, 2, 1, 10, 30, 2, 1, 8, 0, /* ds3IntervalBPVs */
	1, 3, 6, 1, 2, 1, 10, 30, 2, 1, 9, 0, /* ds3IntervalCVs */
	1, 3, 6, 1, 2, 1, 10, 30, 3, 0, /* ds3CurrentTable */
	1, 3, 6, 1, 2, 1, 10, 30, 3, 1, 0, /* ds3CurrentEntry */
	1, 3, 6, 1, 2, 1, 10, 30, 3, 1, 1, 0, /* ds3CurrentIndex */
	1, 3, 6, 1, 2, 1, 10, 30, 3, 1, 2, 0, /* ds3CurrentESs */
	1, 3, 6, 1, 2, 1, 10, 30, 3, 1, 3, 0, /* ds3CurrentSESs */
	1, 3, 6, 1, 2, 1, 10, 30, 3, 1, 4, 0, /* ds3CurrentSEFSs */
	1, 3, 6, 1, 2, 1, 10, 30, 3, 1, 5, 0, /* ds3CurrentUASs */
	1, 3, 6, 1, 2, 1, 10, 30, 3, 1, 6, 0, /* ds3CurrentCSSs */
	1, 3, 6, 1, 2, 1, 10, 30, 3, 1, 7, 0, /* ds3CurrentBPVs */
	1, 3, 6, 1, 2, 1, 10, 30, 3, 1, 8, 0, /* ds3CurrentCVs */
	1, 3, 6, 1, 2, 1, 10, 30, 4, 0, /* ds3TotalTable */
	1, 3, 6, 1, 2, 1, 10, 30, 4, 1, 0, /* ds3TotalEntry */
	1, 3, 6, 1, 2, 1, 10, 30, 4, 1, 1, 0, /* ds3TotalIndex */
	1, 3, 6, 1, 2, 1, 10, 30, 4, 1, 2, 0, /* ds3TotalESs */
	1, 3, 6, 1, 2, 1, 10, 30, 4, 1, 3, 0, /* ds3TotalSESs */
	1, 3, 6, 1, 2, 1, 10, 30, 4, 1, 4, 0, /* ds3TotalSEFSs */
	1, 3, 6, 1, 2, 1, 10, 30, 4, 1, 5, 0, /* ds3TotalUASs */
	1, 3, 6, 1, 2, 1, 10, 30, 4, 1, 6, 0, /* ds3TotalCSSs */
	1, 3, 6, 1, 2, 1, 10, 30, 4, 1, 7, 0, /* ds3TotalBPVs */
	1, 3, 6, 1, 2, 1, 10, 30, 4, 1, 8, 0, /* ds3TotalCVs */
	1, 3, 6, 1, 2, 1, 11, 0, /* snmp */
	1, 3, 6, 1, 2, 1, 11, 1, 0, /* snmpInPkts */
	1, 3, 6, 1, 2, 1, 11, 2, 0, /* snmpOutPkts */
	1, 3, 6, 1, 2, 1, 11, 3, 0, /* snmpInBadVersions */
	1, 3, 6, 1, 2, 1, 11, 4, 0, /* snmpInBadCommunityNames */
	1, 3, 6, 1, 2, 1, 11, 5, 0, /* snmpInBadCommunityUses */
	1, 3, 6, 1, 2, 1, 11, 6, 0, /* snmpInASNParseErrs */
	1, 3, 6, 1, 2, 1, 11, 8, 0, /* snmpInTooBigs */
	1, 3, 6, 1, 2, 1, 11, 9, 0, /* snmpInNoSuchNames */
	1, 3, 6, 1, 2, 1, 11, 10, 0, /* snmpInBadValues */
	1, 3, 6, 1, 2, 1, 11, 11, 0, /* snmpInReadOnlys */
	1, 3, 6, 1, 2, 1, 11, 12, 0, /* snmpInGenErrs */
	1, 3, 6, 1, 2, 1, 11, 13, 0, /* snmpInTotalReqVars */
	1, 3, 6, 1, 2, 1, 11, 14, 0, /* snmpInTotalSetVars */
	1, 3, 6, 1, 2, 1, 11, 15, 0, /* snmpInGetRequests */
	1, 3, 6, 1, 2, 1, 11, 16, 0, /* snmpInGetNexts */
	1, 3, 6, 1, 2, 1, 11, 17, 0, /* snmpInSetRequests */
	1, 3, 6, 1, 2, 1, 11, 18, 0, /* snmpInGetResponses */
	1, 3, 6, 1, 2, 1, 11, 19, 0, /* snmpInTraps */
	1, 3, 6, 1, 2, 1, 11, 20, 0, /* snmpOutTooBigs */
	1, 3, 6, 1, 2, 1, 11, 21, 0, /* snmpOutNoSuchNames */
	1, 3, 6, 1, 2, 1, 11, 22, 0, /* snmpOutBadValues */
	1, 3, 6, 1, 2, 1, 11, 24, 0, /* snmpOutGenErrs */
	1, 3, 6, 1, 2, 1, 11, 25, 0, /* snmpOutGetRequests */
	1, 3, 6, 1, 2, 1, 11, 26, 0, /* snmpOutGetNexts */
	1, 3, 6, 1, 2, 1, 11, 27, 0, /* snmpOutSetRequests */
	1, 3, 6, 1, 2, 1, 11, 28, 0, /* snmpOutGetResponses */
	1, 3, 6, 1, 2, 1, 11, 29, 0, /* snmpOutTraps */
	1, 3, 6, 1, 2, 1, 11, 30, 0, /* snmpEnableAuthenTraps */
	1, 3, 6, 1, 2, 1, 12, 0, /* ifExtensions */
	1, 3, 6, 1, 2, 1, 12, 1, 0, /* ifExtnsTable */
	1, 3, 6, 1, 2, 1, 12, 1, 1, 0, /* ifExtnsEntry */
	1, 3, 6, 1, 2, 1, 12, 1, 1, 1, 0, /* ifExtnsIfIndex */
	1, 3, 6, 1, 2, 1, 12, 1, 1, 2, 0, /* ifExtnsChipSet */
	1, 3, 6, 1, 2, 1, 12, 1, 1, 3, 0, /* ifExtnsRevWare */
	1, 3, 6, 1, 2, 1, 12, 1, 1, 4, 0, /* ifExtnsMulticastsTransmittedOks */
	1, 3, 6, 1, 2, 1, 12, 1, 1, 5, 0, /* ifExtnsBroadcastsTransmittedOks */
	1, 3, 6, 1, 2, 1, 12, 1, 1, 6, 0, /* ifExtnsMulticastsReceivedOks */
	1, 3, 6, 1, 2, 1, 12, 1, 1, 7, 0, /* ifExtnsBroadcastsReceivedOks */
	1, 3, 6, 1, 2, 1, 12, 1, 1, 8, 0, /* ifExtnsPromiscuous */
	1, 3, 6, 1, 2, 1, 12, 2, 0, /* ifExtnsTestTable */
	1, 3, 6, 1, 2, 1, 12, 2, 1, 0, /* ifExtnsTestEntry */
	1, 3, 6, 1, 2, 1, 12, 2, 1, 1, 0, /* ifExtnsTestIfIndex */
	1, 3, 6, 1, 2, 1, 12, 2, 1, 2, 0, /* ifExtnsTestCommunity */
	1, 3, 6, 1, 2, 1, 12, 2, 1, 3, 0, /* ifExtnsTestRequestId */
	1, 3, 6, 1, 2, 1, 12, 2, 1, 4, 0, /* ifExtnsTestType */
	1, 3, 6, 1, 2, 1, 12, 2, 1, 5, 0, /* ifExtnsTestResult */
	1, 3, 6, 1, 2, 1, 12, 2, 1, 6, 0, /* ifExtnsTestCode */
	1, 3, 6, 1, 2, 1, 12, 3, 0, /* ifExtnsRcvAddrTable */
	1, 3, 6, 1, 2, 1, 12, 3, 1, 0, /* ifExtnsRcvAddrEntry */
	1, 3, 6, 1, 2, 1, 12, 3, 1, 1, 0, /* ifExtnsRcvAddrIfIndex */
	1, 3, 6, 1, 2, 1, 12, 3, 1, 2, 0, /* ifExtnsRcvAddress */
	1, 3, 6, 1, 2, 1, 12, 3, 1, 3, 0, /* ifExtnsRcvAddrStatus */
	1, 3, 6, 1, 2, 1, 12, 4, 0, /* wellKnownTests */
	1, 3, 6, 1, 2, 1, 12, 4, 1, 0, /* testFullDuplexLoopBack */
	1, 3, 6, 1, 2, 1, 13, 0, /* appletalk */
	1, 3, 6, 1, 2, 1, 13, 1, 0, /* llap */
	1, 3, 6, 1, 2, 1, 13, 1, 1, 0, /* llapTable */
	1, 3, 6, 1, 2, 1, 13, 1, 1, 1, 0, /* llapEntry */
	1, 3, 6, 1, 2, 1, 13, 1, 1, 1, 1, 0, /* llapIfIndex */
	1, 3, 6, 1, 2, 1, 13, 1, 1, 1, 2, 0, /* llapInPkts */
	1, 3, 6, 1, 2, 1, 13, 1, 1, 1, 3, 0, /* llapOutPkts */
	1, 3, 6, 1, 2, 1, 13, 1, 1, 1, 4, 0, /* llapInNoHandlers */
	1, 3, 6, 1, 2, 1, 13, 1, 1, 1, 5, 0, /* llapInLengthErrors */
	1, 3, 6, 1, 2, 1, 13, 1, 1, 1, 6, 0, /* llapInErrors */
	1, 3, 6, 1, 2, 1, 13, 1, 1, 1, 7, 0, /* llapCollisions */
	1, 3, 6, 1, 2, 1, 13, 1, 1, 1, 8, 0, /* llapDefers */
	1, 3, 6, 1, 2, 1, 13, 1, 1, 1, 9, 0, /* llapNoDataErrors */
	1, 3, 6, 1, 2, 1, 13, 1, 1, 1, 10, 0, /* llapRandomCTSErrors */
	1, 3, 6, 1, 2, 1, 13, 1, 1, 1, 11, 0, /* llapFCSErrors */
	1, 3, 6, 1, 2, 1, 13, 2, 0, /* aarp */
	1, 3, 6, 1, 2, 1, 13, 2, 1, 0, /* aarpTable */
	1, 3, 6, 1, 2, 1, 13, 2, 1, 1, 0, /* aarpEntry */
	1, 3, 6, 1, 2, 1, 13, 2, 1, 1, 1, 0, /* aarpIfIndex */
	1, 3, 6, 1, 2, 1, 13, 2, 1, 1, 2, 0, /* aarpPhysAddress */
	1, 3, 6, 1, 2, 1, 13, 2, 1, 1, 3, 0, /* aarpNetAddress */
	1, 3, 6, 1, 2, 1, 13, 3, 0, /* atport */
	1, 3, 6, 1, 2, 1, 13, 3, 1, 0, /* atportTable */
	1, 3, 6, 1, 2, 1, 13, 3, 1, 1, 0, /* atportEntry */
	1, 3, 6, 1, 2, 1, 13, 3, 1, 1, 1, 0, /* atportIndex */
	1, 3, 6, 1, 2, 1, 13, 3, 1, 1, 2, 0, /* atportDescr */
	1, 3, 6, 1, 2, 1, 13, 3, 1, 1, 3, 0, /* atportType */
	1, 3, 6, 1, 2, 1, 13, 3, 1, 1, 4, 0, /* atportNetStart */
	1, 3, 6, 1, 2, 1, 13, 3, 1, 1, 5, 0, /* atportNetEnd */
	1, 3, 6, 1, 2, 1, 13, 3, 1, 1, 6, 0, /* atportNetAddress */
	1, 3, 6, 1, 2, 1, 13, 3, 1, 1, 7, 0, /* atportStatus */
	1, 3, 6, 1, 2, 1, 13, 3, 1, 1, 8, 0, /* atportNetConfig */
	1, 3, 6, 1, 2, 1, 13, 3, 1, 1, 9, 0, /* atportZoneConfig */
	1, 3, 6, 1, 2, 1, 13, 3, 1, 1, 10, 0, /* atportZone */
	1, 3, 6, 1, 2, 1, 13, 3, 1, 1, 11, 0, /* atportIfIndex */
	1, 3, 6, 1, 2, 1, 13, 4, 0, /* ddp */
	1, 3, 6, 1, 2, 1, 13, 4, 1, 0, /* ddpOutRequests */
	1, 3, 6, 1, 2, 1, 13, 4, 2, 0, /* ddpOutShorts */
	1, 3, 6, 1, 2, 1, 13, 4, 3, 0, /* ddpOutLongs */
	1, 3, 6, 1, 2, 1, 13, 4, 4, 0, /* ddpInReceives */
	1, 3, 6, 1, 2, 1, 13, 4, 5, 0, /* ddpForwRequests */
	1, 3, 6, 1, 2, 1, 13, 4, 6, 0, /* ddpInLocalDatagrams */
	1, 3, 6, 1, 2, 1, 13, 4, 7, 0, /* ddpNoProtocolHandlers */
	1, 3, 6, 1, 2, 1, 13, 4, 8, 0, /* ddpOutNoRoutes */
	1, 3, 6, 1, 2, 1, 13, 4, 9, 0, /* ddpTooShortErrors */
	1, 3, 6, 1, 2, 1, 13, 4, 10, 0, /* ddpTooLongErrors */
	1, 3, 6, 1, 2, 1, 13, 4, 11, 0, /* ddpBroadcastErrors */
	1, 3, 6, 1, 2, 1, 13, 4, 12, 0, /* ddpShortDDPErrors */
	1, 3, 6, 1, 2, 1, 13, 4, 13, 0, /* ddpHopCountErrors */
	1, 3, 6, 1, 2, 1, 13, 4, 14, 0, /* ddpChecksumErrors */
	1, 3, 6, 1, 2, 1, 13, 5, 0, /* rtmp */
	1, 3, 6, 1, 2, 1, 13, 5, 1, 0, /* rtmpTable */
	1, 3, 6, 1, 2, 1, 13, 5, 1, 1, 0, /* rtmpEntry */
	1, 3, 6, 1, 2, 1, 13, 5, 1, 1, 1, 0, /* rtmpRangeStart */
	1, 3, 6, 1, 2, 1, 13, 5, 1, 1, 2, 0, /* rtmpRangeEnd */
	1, 3, 6, 1, 2, 1, 13, 5, 1, 1, 3, 0, /* rtmpNextHop */
	1, 3, 6, 1, 2, 1, 13, 5, 1, 1, 4, 0, /* rtmpType */
	1, 3, 6, 1, 2, 1, 13, 5, 1, 1, 5, 0, /* rtmpPort */
	1, 3, 6, 1, 2, 1, 13, 5, 1, 1, 6, 0, /* rtmpHops */
	1, 3, 6, 1, 2, 1, 13, 5, 1, 1, 7, 0, /* rtmpState */
	1, 3, 6, 1, 2, 1, 13, 6, 0, /* kip */
	1, 3, 6, 1, 2, 1, 13, 6, 1, 0, /* kipTable */
	1, 3, 6, 1, 2, 1, 13, 6, 1, 1, 0, /* kipEntry */
	1, 3, 6, 1, 2, 1, 13, 6, 1, 1, 1, 0, /* kipNetStart */
	1, 3, 6, 1, 2, 1, 13, 6, 1, 1, 2, 0, /* kipNetEnd */
	1, 3, 6, 1, 2, 1, 13, 6, 1, 1, 3, 0, /* kipNextHop */
	1, 3, 6, 1, 2, 1, 13, 6, 1, 1, 4, 0, /* kipHopCount */
	1, 3, 6, 1, 2, 1, 13, 6, 1, 1, 5, 0, /* kipBCastAddr */
	1, 3, 6, 1, 2, 1, 13, 6, 1, 1, 6, 0, /* kipCore */
	1, 3, 6, 1, 2, 1, 13, 6, 1, 1, 7, 0, /* kipType */
	1, 3, 6, 1, 2, 1, 13, 6, 1, 1, 8, 0, /* kipState */
	1, 3, 6, 1, 2, 1, 13, 6, 1, 1, 9, 0, /* kipShare */
	1, 3, 6, 1, 2, 1, 13, 7, 0, /* zip */
	1, 3, 6, 1, 2, 1, 13, 7, 1, 0, /* zipTable */
	1, 3, 6, 1, 2, 1, 13, 7, 1, 1, 0, /* zipEntry */
	1, 3, 6, 1, 2, 1, 13, 7, 1, 1, 1, 0, /* zipZoneName */
	1, 3, 6, 1, 2, 1, 13, 7, 1, 1, 2, 0, /* zipZoneIndex */
	1, 3, 6, 1, 2, 1, 13, 7, 1, 1, 3, 0, /* zipZoneNetStart */
	1, 3, 6, 1, 2, 1, 13, 7, 1, 1, 4, 0, /* zipZoneNetEnd */
	1, 3, 6, 1, 2, 1, 13, 7, 1, 1, 5, 0, /* zipZoneState */
	1, 3, 6, 1, 2, 1, 13, 8, 0, /* nbp */
	1, 3, 6, 1, 2, 1, 13, 8, 1, 0, /* nbpTable */
	1, 3, 6, 1, 2, 1, 13, 8, 1, 1, 0, /* nbpEntry */
	1, 3, 6, 1, 2, 1, 13, 8, 1, 1, 1, 0, /* nbpIndex */
	1, 3, 6, 1, 2, 1, 13, 8, 1, 1, 2, 0, /* nbpObject */
	1, 3, 6, 1, 2, 1, 13, 8, 1, 1, 3, 0, /* nbpType */
	1, 3, 6, 1, 2, 1, 13, 8, 1, 1, 4, 0, /* nbpZone */
	1, 3, 6, 1, 2, 1, 13, 8, 1, 1, 5, 0, /* nbpState */
	1, 3, 6, 1, 2, 1, 13, 9, 0, /* atecho */
	1, 3, 6, 1, 2, 1, 13, 9, 1, 0, /* atechoRequests */
	1, 3, 6, 1, 2, 1, 13, 9, 2, 0, /* atechoReplies */
	1, 3, 6, 1, 2, 1, 14, 0, /* ospf */
	1, 3, 6, 1, 2, 1, 14, 1, 0, /* ospfGeneralGroup */
	1, 3, 6, 1, 2, 1, 14, 1, 1, 0, /* ospfRouterId */
	1, 3, 6, 1, 2, 1, 14, 1, 2, 0, /* ospfAdminStat */
	1, 3, 6, 1, 2, 1, 14, 1, 3, 0, /* ospfVersionNumber */
	1, 3, 6, 1, 2, 1, 14, 1, 4, 0, /* ospfAreaBdrRtrStatus */
	1, 3, 6, 1, 2, 1, 14, 1, 5, 0, /* ospfASBdrRtrStatus */
	1, 3, 6, 1, 2, 1, 14, 1, 6, 0, /* ospfExternLSACount */
	1, 3, 6, 1, 2, 1, 14, 1, 7, 0, /* ospfExternLSACksumSum */
	1, 3, 6, 1, 2, 1, 14, 1, 8, 0, /* ospfTOSSupport */
	1, 3, 6, 1, 2, 1, 14, 1, 9, 0, /* ospfOriginateNewLSAs */
	1, 3, 6, 1, 2, 1, 14, 1, 10, 0, /* ospfRxNewLSAs */
	1, 3, 6, 1, 2, 1, 14, 2, 0, /* ospfAreaTable */
	1, 3, 6, 1, 2, 1, 14, 2, 1, 0, /* ospfAreaEntry */
	1, 3, 6, 1, 2, 1, 14, 2, 1, 1, 0, /* ospfAreaId */
	1, 3, 6, 1, 2, 1, 14, 2, 1, 2, 0, /* ospfAuthType */
	1, 3, 6, 1, 2, 1, 14, 2, 1, 3, 0, /* ospfImportASExtern */
	1, 3, 6, 1, 2, 1, 14, 2, 1, 4, 0, /* ospfSpfRuns */
	1, 3, 6, 1, 2, 1, 14, 2, 1, 5, 0, /* ospfAreaBdrRtrCount */
	1, 3, 6, 1, 2, 1, 14, 2, 1, 6, 0, /* ospfASBdrRtrCount */
	1, 3, 6, 1, 2, 1, 14, 2, 1, 7, 0, /* ospfAreaLSACount */
	1, 3, 6, 1, 2, 1, 14, 2, 1, 8, 0, /* ospfAreaLSACksumSum */
	1, 3, 6, 1, 2, 1, 14, 3, 0, /* ospfStubAreaTable */
	1, 3, 6, 1, 2, 1, 14, 3, 1, 0, /* ospfStubAreaEntry */
	1, 3, 6, 1, 2, 1, 14, 3, 1, 1, 0, /* ospfStubAreaID */
	1, 3, 6, 1, 2, 1, 14, 3, 1, 2, 0, /* ospfStubTOS */
	1, 3, 6, 1, 2, 1, 14, 3, 1, 3, 0, /* ospfStubMetric */
	1, 3, 6, 1, 2, 1, 14, 3, 1, 4, 0, /* ospfStubStatus */
	1, 3, 6, 1, 2, 1, 14, 4, 0, /* ospfLsdbTable */
	1, 3, 6, 1, 2, 1, 14, 4, 1, 0, /* ospfLsdbEntry */
	1, 3, 6, 1, 2, 1, 14, 4, 1, 1, 0, /* ospfLsdbAreaId */
	1, 3, 6, 1, 2, 1, 14, 4, 1, 2, 0, /* ospfLsdbType */
	1, 3, 6, 1, 2, 1, 14, 4, 1, 3, 0, /* ospfLsdbLSID */
	1, 3, 6, 1, 2, 1, 14, 4, 1, 4, 0, /* ospfLsdbRouterId */
	1, 3, 6, 1, 2, 1, 14, 4, 1, 5, 0, /* ospfLsdbSequence */
	1, 3, 6, 1, 2, 1, 14, 4, 1, 6, 0, /* ospfLsdbAge */
	1, 3, 6, 1, 2, 1, 14, 4, 1, 7, 0, /* ospfLsdbChecksum */
	1, 3, 6, 1, 2, 1, 14, 4, 1, 8, 0, /* ospfLsdbAdvertisement */
	1, 3, 6, 1, 2, 1, 14, 5, 0, /* ospfAreaRangeTable */
	1, 3, 6, 1, 2, 1, 14, 5, 1, 0, /* ospfAreaRangeEntry */
	1, 3, 6, 1, 2, 1, 14, 5, 1, 1, 0, /* ospfAreaRangeAreaID */
	1, 3, 6, 1, 2, 1, 14, 5, 1, 2, 0, /* ospfAreaRangeNet */
	1, 3, 6, 1, 2, 1, 14, 5, 1, 3, 0, /* ospfAreaRangeMask */
	1, 3, 6, 1, 2, 1, 14, 5, 1, 4, 0, /* ospfAreaRangeStatus */
	1, 3, 6, 1, 2, 1, 14, 6, 0, /* ospfHostTable */
	1, 3, 6, 1, 2, 1, 14, 6, 1, 0, /* ospfHostEntry */
	1, 3, 6, 1, 2, 1, 14, 6, 1, 1, 0, /* ospfHostIpAddress */
	1, 3, 6, 1, 2, 1, 14, 6, 1, 2, 0, /* ospfHostTOS */
	1, 3, 6, 1, 2, 1, 14, 6, 1, 3, 0, /* ospfHostMetric */
	1, 3, 6, 1, 2, 1, 14, 6, 1, 4, 0, /* ospfHostStatus */
	1, 3, 6, 1, 2, 1, 14, 7, 0, /* ospfIfTable */
	1, 3, 6, 1, 2, 1, 14, 7, 1, 0, /* ospfIfEntry */
	1, 3, 6, 1, 2, 1, 14, 7, 1, 1, 0, /* ospfIfIpAddress */
	1, 3, 6, 1, 2, 1, 14, 7, 1, 2, 0, /* ospfAddressLessIf */
	1, 3, 6, 1, 2, 1, 14, 7, 1, 3, 0, /* ospfIfAreaId */
	1, 3, 6, 1, 2, 1, 14, 7, 1, 4, 0, /* ospfIfType */
	1, 3, 6, 1, 2, 1, 14, 7, 1, 5, 0, /* ospfIfAdminStat */
	1, 3, 6, 1, 2, 1, 14, 7, 1, 6, 0, /* ospfIfRtrPriority */
	1, 3, 6, 1, 2, 1, 14, 7, 1, 7, 0, /* ospfIfTransitDelay */
	1, 3, 6, 1, 2, 1, 14, 7, 1, 8, 0, /* ospfIfRetransInterval */
	1, 3, 6, 1, 2, 1, 14, 7, 1, 9, 0, /* ospfIfHelloInterval */
	1, 3, 6, 1, 2, 1, 14, 7, 1, 10, 0, /* ospfIfRtrDeadInterval */
	1, 3, 6, 1, 2, 1, 14, 7, 1, 11, 0, /* ospfIfPollInterval */
	1, 3, 6, 1, 2, 1, 14, 7, 1, 12, 0, /* ospfIfState */
	1, 3, 6, 1, 2, 1, 14, 7, 1, 13, 0, /* ospfIfDesignatedRouter */
	1, 3, 6, 1, 2, 1, 14, 7, 1, 14, 0, /* ospfIfBackupDesignatedRouter */
	1, 3, 6, 1, 2, 1, 14, 7, 1, 15, 0, /* ospfIfEvents */
	1, 3, 6, 1, 2, 1, 14, 7, 1, 16, 0, /* ospfIfAuthKey */
	1, 3, 6, 1, 2, 1, 14, 8, 0, /* ospfIfMetricTable */
	1, 3, 6, 1, 2, 1, 14, 8, 1, 0, /* ospfIfMetricEntry */
	1, 3, 6, 1, 2, 1, 14, 8, 1, 1, 0, /* ospfIfMetricIpAddress */
	1, 3, 6, 1, 2, 1, 14, 8, 1, 2, 0, /* ospfIfMetricAddressLessIf */
	1, 3, 6, 1, 2, 1, 14, 8, 1, 3, 0, /* ospfIfMetricTOS */
	1, 3, 6, 1, 2, 1, 14, 8, 1, 4, 0, /* ospfIfMetricMetric */
	1, 3, 6, 1, 2, 1, 14, 8, 1, 5, 0, /* ospfIfMetricStatus */
	1, 3, 6, 1, 2, 1, 14, 9, 0, /* ospfVirtIfTable */
	1, 3, 6, 1, 2, 1, 14, 9, 1, 0, /* ospfVirtIfEntry */
	1, 3, 6, 1, 2, 1, 14, 9, 1, 1, 0, /* ospfVirtIfAreaID */
	1, 3, 6, 1, 2, 1, 14, 9, 1, 2, 0, /* ospfVirtIfNeighbor */
	1, 3, 6, 1, 2, 1, 14, 9, 1, 3, 0, /* ospfVirtIfTransitDelay */
	1, 3, 6, 1, 2, 1, 14, 9, 1, 4, 0, /* ospfVirtIfRetransInterval */
	1, 3, 6, 1, 2, 1, 14, 9, 1, 5, 0, /* ospfVirtIfHelloInterval */
	1, 3, 6, 1, 2, 1, 14, 9, 1, 6, 0, /* ospfVirtIfRtrDeadInterval */
	1, 3, 6, 1, 2, 1, 14, 9, 1, 7, 0, /* ospfVirtIfState */
	1, 3, 6, 1, 2, 1, 14, 9, 1, 8, 0, /* ospfVirtIfEvents */
	1, 3, 6, 1, 2, 1, 14, 9, 1, 9, 0, /* ospfVirtIfAuthKey */
	1, 3, 6, 1, 2, 1, 14, 9, 1, 10, 0, /* ospfVirtIfStatus */
	1, 3, 6, 1, 2, 1, 14, 10, 0, /* ospfNbrTable */
	1, 3, 6, 1, 2, 1, 14, 10, 1, 0, /* ospfNbrEntry */
	1, 3, 6, 1, 2, 1, 14, 10, 1, 1, 0, /* ospfNbrIpAddr */
	1, 3, 6, 1, 2, 1, 14, 10, 1, 2, 0, /* ospfNbrAddressLessIndex */
	1, 3, 6, 1, 2, 1, 14, 10, 1, 3, 0, /* ospfNbrRtrId */
	1, 3, 6, 1, 2, 1, 14, 10, 1, 4, 0, /* ospfNbrOptions */
	1, 3, 6, 1, 2, 1, 14, 10, 1, 5, 0, /* ospfNbrPriority */
	1, 3, 6, 1, 2, 1, 14, 10, 1, 6, 0, /* ospfNbrState */
	1, 3, 6, 1, 2, 1, 14, 10, 1, 7, 0, /* ospfNbrEvents */
	1, 3, 6, 1, 2, 1, 14, 10, 1, 8, 0, /* ospfNbrLSRetransQLen */
	1, 3, 6, 1, 2, 1, 14, 10, 1, 9, 0, /* ospfNBMANbrStatus */
	1, 3, 6, 1, 2, 1, 14, 11, 0, /* ospfVirtNbrTable */
	1, 3, 6, 1, 2, 1, 14, 11, 1, 0, /* ospfVirtNbrEntry */
	1, 3, 6, 1, 2, 1, 14, 11, 1, 1, 0, /* ospfVirtNbrArea */
	1, 3, 6, 1, 2, 1, 14, 11, 1, 2, 0, /* ospfVirtNbrRtrId */
	1, 3, 6, 1, 2, 1, 14, 11, 1, 3, 0, /* ospfVirtNbrIpAddr */
	1, 3, 6, 1, 2, 1, 14, 11, 1, 4, 0, /* ospfVirtNbrOptions */
	1, 3, 6, 1, 2, 1, 14, 11, 1, 5, 0, /* ospfVirtNbrState */
	1, 3, 6, 1, 2, 1, 14, 11, 1, 6, 0, /* ospfVirtNbrEvents */
	1, 3, 6, 1, 2, 1, 14, 11, 1, 7, 0, /* ospfVirtNbrLSRetransQLen */
	1, 3, 6, 1, 2, 1, 15, 0, /* bgp */
	1, 3, 6, 1, 2, 1, 15, 1, 0, /* bgpVersion */
	1, 3, 6, 1, 2, 1, 15, 2, 0, /* bgpLocalAs */
	1, 3, 6, 1, 2, 1, 15, 3, 0, /* bgpPeerTable */
	1, 3, 6, 1, 2, 1, 15, 3, 1, 0, /* bgpPeerEntry */
	1, 3, 6, 1, 2, 1, 15, 3, 1, 1, 0, /* bgpPeerIdentifier */
	1, 3, 6, 1, 2, 1, 15, 3, 1, 2, 0, /* bgpPeerState */
	1, 3, 6, 1, 2, 1, 15, 3, 1, 3, 0, /* bgpPeerAdminStatus */
	1, 3, 6, 1, 2, 1, 15, 3, 1, 4, 0, /* bgpPeerNegotiatedVersion */
	1, 3, 6, 1, 2, 1, 15, 3, 1, 5, 0, /* bgpPeerLocalAddr */
	1, 3, 6, 1, 2, 1, 15, 3, 1, 6, 0, /* bgpPeerLocalPort */
	1, 3, 6, 1, 2, 1, 15, 3, 1, 7, 0, /* bgpPeerRemoteAddr */
	1, 3, 6, 1, 2, 1, 15, 3, 1, 8, 0, /* bgpPeerRemotePort */
	1, 3, 6, 1, 2, 1, 15, 3, 1, 9, 0, /* bgpPeerRemoteAs */
	1, 3, 6, 1, 2, 1, 15, 3, 1, 10, 0, /* bgpPeerInUpdates */
	1, 3, 6, 1, 2, 1, 15, 3, 1, 11, 0, /* bgpPeerOutUpdates */
	1, 3, 6, 1, 2, 1, 15, 3, 1, 12, 0, /* bgpPeerInTotalMessages */
	1, 3, 6, 1, 2, 1, 15, 3, 1, 13, 0, /* bgpPeerOutTotalMessages */
	1, 3, 6, 1, 2, 1, 15, 3, 1, 14, 0, /* bgpPeerLastError */
	1, 3, 6, 1, 2, 1, 15, 4, 0, /* bgpIdentifier */
	1, 3, 6, 1, 2, 1, 15, 5, 0, /* bgpRcvdPathAttrTable */
	1, 3, 6, 1, 2, 1, 15, 5, 1, 0, /* bgpPathAttrEntry */
	1, 3, 6, 1, 2, 1, 15, 5, 1, 1, 0, /* bgpPathAttrPeer */
	1, 3, 6, 1, 2, 1, 15, 5, 1, 2, 0, /* bgpPathAttrDestNetwork */
	1, 3, 6, 1, 2, 1, 15, 5, 1, 3, 0, /* bgpPathAttrOrigin */
	1, 3, 6, 1, 2, 1, 15, 5, 1, 4, 0, /* bgpPathAttrASPath */
	1, 3, 6, 1, 2, 1, 15, 5, 1, 5, 0, /* bgpPathAttrNextHop */
	1, 3, 6, 1, 2, 1, 15, 5, 1, 6, 0, /* bgpPathAttrInterASMetric */
	1, 3, 6, 1, 2, 1, 16, 0, /* rmon */
	1, 3, 6, 1, 2, 1, 16, 1, 0, /* statistics */
	1, 3, 6, 1, 2, 1, 16, 1, 1, 0, /* etherStatsTable */
	1, 3, 6, 1, 2, 1, 16, 1, 1, 1, 0, /* etherStatsEntry */
	1, 3, 6, 1, 2, 1, 16, 1, 1, 1, 1, 0, /* etherStatsIndex */
	1, 3, 6, 1, 2, 1, 16, 1, 1, 1, 2, 0, /* etherStatsDataSource */
	1, 3, 6, 1, 2, 1, 16, 1, 1, 1, 3, 0, /* etherStatsDropEvents */
	1, 3, 6, 1, 2, 1, 16, 1, 1, 1, 4, 0, /* etherStatsOctets */
	1, 3, 6, 1, 2, 1, 16, 1, 1, 1, 5, 0, /* etherStatsPkts */
	1, 3, 6, 1, 2, 1, 16, 1, 1, 1, 6, 0, /* etherStatsBroadcastPkts */
	1, 3, 6, 1, 2, 1, 16, 1, 1, 1, 7, 0, /* etherStatsMulticastPkts */
	1, 3, 6, 1, 2, 1, 16, 1, 1, 1, 8, 0, /* etherStatsCRCAlignErrors */
	1, 3, 6, 1, 2, 1, 16, 1, 1, 1, 9, 0, /* etherStatsUndersizePkts */
	1, 3, 6, 1, 2, 1, 16, 1, 1, 1, 10, 0, /* etherStatsOversizePkts */
	1, 3, 6, 1, 2, 1, 16, 1, 1, 1, 11, 0, /* etherStatsFragments */
	1, 3, 6, 1, 2, 1, 16, 1, 1, 1, 12, 0, /* etherStatsJabbers */
	1, 3, 6, 1, 2, 1, 16, 1, 1, 1, 13, 0, /* etherStatsCollisions */
	1, 3, 6, 1, 2, 1, 16, 1, 1, 1, 14, 0, /* etherStatsPkts64Octets */
	1, 3, 6, 1, 2, 1, 16, 1, 1, 1, 15, 0, /* etherStatsPkts65to127Octets */
	1, 3, 6, 1, 2, 1, 16, 1, 1, 1, 16, 0, /* etherStatsPkts128to255Octets */
	1, 3, 6, 1, 2, 1, 16, 1, 1, 1, 17, 0, /* etherStatsPkts256to511Octets */
	1, 3, 6, 1, 2, 1, 16, 1, 1, 1, 18, 0, /* etherStatsPkts512to1023Octets */
	1, 3, 6, 1, 2, 1, 16, 1, 1, 1, 19, 0, /* etherStatsPkts1024to1518Octets */
	1, 3, 6, 1, 2, 1, 16, 1, 1, 1, 20, 0, /* etherStatsOwner */
	1, 3, 6, 1, 2, 1, 16, 1, 1, 1, 21, 0, /* etherStatsStatus */
	1, 3, 6, 1, 2, 1, 16, 2, 0, /* history */
	1, 3, 6, 1, 2, 1, 16, 2, 1, 0, /* historyControlTable */
	1, 3, 6, 1, 2, 1, 16, 2, 1, 1, 0, /* historyControlEntry */
	1, 3, 6, 1, 2, 1, 16, 2, 1, 1, 1, 0, /* historyControlIndex */
	1, 3, 6, 1, 2, 1, 16, 2, 1, 1, 2, 0, /* historyControlDataSource */
	1, 3, 6, 1, 2, 1, 16, 2, 1, 1, 3, 0, /* historyControlBucketsRequested */
	1, 3, 6, 1, 2, 1, 16, 2, 1, 1, 4, 0, /* historyControlBucketsGranted */
	1, 3, 6, 1, 2, 1, 16, 2, 1, 1, 5, 0, /* historyControlInterval */
	1, 3, 6, 1, 2, 1, 16, 2, 1, 1, 6, 0, /* historyControlOwner */
	1, 3, 6, 1, 2, 1, 16, 2, 1, 1, 7, 0, /* historyControlStatus */
	1, 3, 6, 1, 2, 1, 16, 2, 2, 0, /* etherHistoryTable */
	1, 3, 6, 1, 2, 1, 16, 2, 2, 1, 0, /* etherHistoryEntry */
	1, 3, 6, 1, 2, 1, 16, 2, 2, 1, 1, 0, /* etherHistoryIndex */
	1, 3, 6, 1, 2, 1, 16, 2, 2, 1, 2, 0, /* etherHistorySampleIndex */
	1, 3, 6, 1, 2, 1, 16, 2, 2, 1, 3, 0, /* etherHistoryIntervalStart */
	1, 3, 6, 1, 2, 1, 16, 2, 2, 1, 4, 0, /* etherHistoryDropEvents */
	1, 3, 6, 1, 2, 1, 16, 2, 2, 1, 5, 0, /* etherHistoryOctets */
	1, 3, 6, 1, 2, 1, 16, 2, 2, 1, 6, 0, /* etherHistoryPkts */
	1, 3, 6, 1, 2, 1, 16, 2, 2, 1, 7, 0, /* etherHistoryBroadcastPkts */
	1, 3, 6, 1, 2, 1, 16, 2, 2, 1, 8, 0, /* etherHistoryMulticastPkts */
	1, 3, 6, 1, 2, 1, 16, 2, 2, 1, 9, 0, /* etherHistoryCRCAlignErrors */
	1, 3, 6, 1, 2, 1, 16, 2, 2, 1, 10, 0, /* etherHistoryUndersizePkts */
	1, 3, 6, 1, 2, 1, 16, 2, 2, 1, 11, 0, /* etherHistoryOversizePkts */
	1, 3, 6, 1, 2, 1, 16, 2, 2, 1, 12, 0, /* etherHistoryFragments */
	1, 3, 6, 1, 2, 1, 16, 2, 2, 1, 13, 0, /* etherHistoryJabbers */
	1, 3, 6, 1, 2, 1, 16, 2, 2, 1, 14, 0, /* etherHistoryCollisions */
	1, 3, 6, 1, 2, 1, 16, 2, 2, 1, 15, 0, /* etherHistoryUtilization */
	1, 3, 6, 1, 2, 1, 16, 3, 0, /* alarm */
	1, 3, 6, 1, 2, 1, 16, 3, 1, 0, /* alarmTable */
	1, 3, 6, 1, 2, 1, 16, 3, 1, 1, 0, /* alarmEntry */
	1, 3, 6, 1, 2, 1, 16, 3, 1, 1, 1, 0, /* alarmIndex */
	1, 3, 6, 1, 2, 1, 16, 3, 1, 1, 2, 0, /* alarmInterval */
	1, 3, 6, 1, 2, 1, 16, 3, 1, 1, 3, 0, /* alarmVariable */
	1, 3, 6, 1, 2, 1, 16, 3, 1, 1, 4, 0, /* alarmSampleType */
	1, 3, 6, 1, 2, 1, 16, 3, 1, 1, 5, 0, /* alarmValue */
	1, 3, 6, 1, 2, 1, 16, 3, 1, 1, 6, 0, /* alarmStartupAlarm */
	1, 3, 6, 1, 2, 1, 16, 3, 1, 1, 7, 0, /* alarmRisingThreshold */
	1, 3, 6, 1, 2, 1, 16, 3, 1, 1, 8, 0, /* alarmFallingThreshold */
	1, 3, 6, 1, 2, 1, 16, 3, 1, 1, 9, 0, /* alarmRisingEventIndex */
	1, 3, 6, 1, 2, 1, 16, 3, 1, 1, 10, 0, /* alarmFallingEventIndex */
	1, 3, 6, 1, 2, 1, 16, 3, 1, 1, 11, 0, /* alarmOwner */
	1, 3, 6, 1, 2, 1, 16, 3, 1, 1, 12, 0, /* alarmStatus */
	1, 3, 6, 1, 2, 1, 16, 4, 0, /* hosts */
	1, 3, 6, 1, 2, 1, 16, 4, 1, 0, /* hostControlTable */
	1, 3, 6, 1, 2, 1, 16, 4, 1, 1, 0, /* hostControlEntry */
	1, 3, 6, 1, 2, 1, 16, 4, 1, 1, 1, 0, /* hostControlIndex */
	1, 3, 6, 1, 2, 1, 16, 4, 1, 1, 2, 0, /* hostControlDataSource */
	1, 3, 6, 1, 2, 1, 16, 4, 1, 1, 3, 0, /* hostControlTableSize */
	1, 3, 6, 1, 2, 1, 16, 4, 1, 1, 4, 0, /* hostControlLastDeleteTime */
	1, 3, 6, 1, 2, 1, 16, 4, 1, 1, 5, 0, /* hostControlOwner */
	1, 3, 6, 1, 2, 1, 16, 4, 1, 1, 6, 0, /* hostControlStatus */
	1, 3, 6, 1, 2, 1, 16, 4, 2, 0, /* hostTable */
	1, 3, 6, 1, 2, 1, 16, 4, 2, 1, 0, /* hostEntry */
	1, 3, 6, 1, 2, 1, 16, 4, 2, 1, 1, 0, /* hostAddress */
	1, 3, 6, 1, 2, 1, 16, 4, 2, 1, 2, 0, /* hostCreationOrder */
	1, 3, 6, 1, 2, 1, 16, 4, 2, 1, 3, 0, /* hostIndex */
	1, 3, 6, 1, 2, 1, 16, 4, 2, 1, 4, 0, /* hostInPkts */
	1, 3, 6, 1, 2, 1, 16, 4, 2, 1, 5, 0, /* hostOutPkts */
	1, 3, 6, 1, 2, 1, 16, 4, 2, 1, 6, 0, /* hostInOctets */
	1, 3, 6, 1, 2, 1, 16, 4, 2, 1, 7, 0, /* hostOutOctets */
	1, 3, 6, 1, 2, 1, 16, 4, 2, 1, 8, 0, /* hostOutErrors */
	1, 3, 6, 1, 2, 1, 16, 4, 2, 1, 9, 0, /* hostOutBroadcastPkts */
	1, 3, 6, 1, 2, 1, 16, 4, 2, 1, 10, 0, /* hostOutMulticastPkts */
	1, 3, 6, 1, 2, 1, 16, 4, 3, 0, /* hostTimeTable */
	1, 3, 6, 1, 2, 1, 16, 4, 3, 1, 0, /* hostTimeEntry */
	1, 3, 6, 1, 2, 1, 16, 4, 3, 1, 1, 0, /* hostTimeAddress */
	1, 3, 6, 1, 2, 1, 16, 4, 3, 1, 2, 0, /* hostTimeCreationOrder */
	1, 3, 6, 1, 2, 1, 16, 4, 3, 1, 3, 0, /* hostTimeIndex */
	1, 3, 6, 1, 2, 1, 16, 4, 3, 1, 4, 0, /* hostTimeInPkts */
	1, 3, 6, 1, 2, 1, 16, 4, 3, 1, 5, 0, /* hostTimeOutPkts */
	1, 3, 6, 1, 2, 1, 16, 4, 3, 1, 6, 0, /* hostTimeInOctets */
	1, 3, 6, 1, 2, 1, 16, 4, 3, 1, 7, 0, /* hostTimeOutOctets */
	1, 3, 6, 1, 2, 1, 16, 4, 3, 1, 8, 0, /* hostTimeOutErrors */
	1, 3, 6, 1, 2, 1, 16, 4, 3, 1, 9, 0, /* hostTimeOutBroadcastPkts */
	1, 3, 6, 1, 2, 1, 16, 4, 3, 1, 10, 0, /* hostTimeOutMulticastPkts */
	1, 3, 6, 1, 2, 1, 16, 5, 0, /* hostTopN */
	1, 3, 6, 1, 2, 1, 16, 5, 1, 0, /* hostTopNControlTable */
	1, 3, 6, 1, 2, 1, 16, 5, 1, 1, 0, /* hostTopNControlEntry */
	1, 3, 6, 1, 2, 1, 16, 5, 1, 1, 1, 0, /* hostTopNControlIndex */
	1, 3, 6, 1, 2, 1, 16, 5, 1, 1, 2, 0, /* hostTopNHostIndex */
	1, 3, 6, 1, 2, 1, 16, 5, 1, 1, 3, 0, /* hostTopNRateBase */
	1, 3, 6, 1, 2, 1, 16, 5, 1, 1, 4, 0, /* hostTopNTimeRemaining */
	1, 3, 6, 1, 2, 1, 16, 5, 1, 1, 5, 0, /* hostTopNDuration */
	1, 3, 6, 1, 2, 1, 16, 5, 1, 1, 6, 0, /* hostTopNRequestedSize */
	1, 3, 6, 1, 2, 1, 16, 5, 1, 1, 7, 0, /* hostTopNGrantedSize */
	1, 3, 6, 1, 2, 1, 16, 5, 1, 1, 8, 0, /* hostTopNStartTime */
	1, 3, 6, 1, 2, 1, 16, 5, 1, 1, 9, 0, /* hostTopNOwner */
	1, 3, 6, 1, 2, 1, 16, 5, 1, 1, 10, 0, /* hostTopNStatus */
	1, 3, 6, 1, 2, 1, 16, 5, 2, 0, /* hostTopNTable */
	1, 3, 6, 1, 2, 1, 16, 5, 2, 1, 0, /* hostTopNEntry */
	1, 3, 6, 1, 2, 1, 16, 5, 2, 1, 1, 0, /* hostTopNReport */
	1, 3, 6, 1, 2, 1, 16, 5, 2, 1, 2, 0, /* hostTopNIndex */
	1, 3, 6, 1, 2, 1, 16, 5, 2, 1, 3, 0, /* hostTopNAddress */
	1, 3, 6, 1, 2, 1, 16, 5, 2, 1, 4, 0, /* hostTopNRate */
	1, 3, 6, 1, 2, 1, 16, 6, 0, /* matrix */
	1, 3, 6, 1, 2, 1, 16, 6, 1, 0, /* matrixControlTable */
	1, 3, 6, 1, 2, 1, 16, 6, 1, 1, 0, /* matrixControlEntry */
	1, 3, 6, 1, 2, 1, 16, 6, 1, 1, 1, 0, /* matrixControlIndex */
	1, 3, 6, 1, 2, 1, 16, 6, 1, 1, 2, 0, /* matrixControlDataSource */
	1, 3, 6, 1, 2, 1, 16, 6, 1, 1, 3, 0, /* matrixControlTableSize */
	1, 3, 6, 1, 2, 1, 16, 6, 1, 1, 4, 0, /* matrixControlLastDeleteTime */
	1, 3, 6, 1, 2, 1, 16, 6, 1, 1, 5, 0, /* matrixControlOwner */
	1, 3, 6, 1, 2, 1, 16, 6, 1, 1, 6, 0, /* matrixControlStatus */
	1, 3, 6, 1, 2, 1, 16, 6, 2, 0, /* matrixSDTable */
	1, 3, 6, 1, 2, 1, 16, 6, 2, 1, 0, /* matrixSDEntry */
	1, 3, 6, 1, 2, 1, 16, 6, 2, 1, 1, 0, /* matrixSDSourceAddress */
	1, 3, 6, 1, 2, 1, 16, 6, 2, 1, 2, 0, /* matrixSDDestAddress */
	1, 3, 6, 1, 2, 1, 16, 6, 2, 1, 3, 0, /* matrixSDIndex */
	1, 3, 6, 1, 2, 1, 16, 6, 2, 1, 4, 0, /* matrixSDPkts */
	1, 3, 6, 1, 2, 1, 16, 6, 2, 1, 5, 0, /* matrixSDOctets */
	1, 3, 6, 1, 2, 1, 16, 6, 2, 1, 6, 0, /* matrixSDErrors */
	1, 3, 6, 1, 2, 1, 16, 6, 3, 0, /* matrixDSTable */
	1, 3, 6, 1, 2, 1, 16, 6, 3, 1, 0, /* matrixDSEntry */
	1, 3, 6, 1, 2, 1, 16, 6, 3, 1, 1, 0, /* matrixDSSourceAddress */
	1, 3, 6, 1, 2, 1, 16, 6, 3, 1, 2, 0, /* matrixDSDestAddress */
	1, 3, 6, 1, 2, 1, 16, 6, 3, 1, 3, 0, /* matrixDSIndex */
	1, 3, 6, 1, 2, 1, 16, 6, 3, 1, 4, 0, /* matrixDSPkts */
	1, 3, 6, 1, 2, 1, 16, 6, 3, 1, 5, 0, /* matrixDSOctets */
	1, 3, 6, 1, 2, 1, 16, 6, 3, 1, 6, 0, /* matrixDSErrors */
	1, 3, 6, 1, 2, 1, 16, 7, 0, /* filter */
	1, 3, 6, 1, 2, 1, 16, 7, 1, 0, /* filterTable */
	1, 3, 6, 1, 2, 1, 16, 7, 1, 1, 0, /* filterEntry */
	1, 3, 6, 1, 2, 1, 16, 7, 1, 1, 1, 0, /* filterIndex */
	1, 3, 6, 1, 2, 1, 16, 7, 1, 1, 2, 0, /* filterChannelIndex */
	1, 3, 6, 1, 2, 1, 16, 7, 1, 1, 3, 0, /* filterPktDataOffset */
	1, 3, 6, 1, 2, 1, 16, 7, 1, 1, 4, 0, /* filterPktData */
	1, 3, 6, 1, 2, 1, 16, 7, 1, 1, 5, 0, /* filterPktDataMask */
	1, 3, 6, 1, 2, 1, 16, 7, 1, 1, 6, 0, /* filterPktDataNotMask */
	1, 3, 6, 1, 2, 1, 16, 7, 1, 1, 7, 0, /* filterPktStatus */
	1, 3, 6, 1, 2, 1, 16, 7, 1, 1, 8, 0, /* filterPktStatusMask */
	1, 3, 6, 1, 2, 1, 16, 7, 1, 1, 9, 0, /* filterPktStatusNotMask */
	1, 3, 6, 1, 2, 1, 16, 7, 1, 1, 10, 0, /* filterOwner */
	1, 3, 6, 1, 2, 1, 16, 7, 1, 1, 11, 0, /* filterStatus */
	1, 3, 6, 1, 2, 1, 16, 7, 2, 0, /* channelTable */
	1, 3, 6, 1, 2, 1, 16, 7, 2, 1, 0, /* channelEntry */
	1, 3, 6, 1, 2, 1, 16, 7, 2, 1, 1, 0, /* channelIndex */
	1, 3, 6, 1, 2, 1, 16, 7, 2, 1, 2, 0, /* channelIfIndex */
	1, 3, 6, 1, 2, 1, 16, 7, 2, 1, 3, 0, /* channelAcceptType */
	1, 3, 6, 1, 2, 1, 16, 7, 2, 1, 4, 0, /* channelDataControl */
	1, 3, 6, 1, 2, 1, 16, 7, 2, 1, 5, 0, /* channelTurnOnEventIndex */
	1, 3, 6, 1, 2, 1, 16, 7, 2, 1, 6, 0, /* channelTurnOffEventIndex */
	1, 3, 6, 1, 2, 1, 16, 7, 2, 1, 7, 0, /* channelEventIndex */
	1, 3, 6, 1, 2, 1, 16, 7, 2, 1, 8, 0, /* channelEventStatus */
	1, 3, 6, 1, 2, 1, 16, 7, 2, 1, 9, 0, /* channelMatches */
	1, 3, 6, 1, 2, 1, 16, 7, 2, 1, 10, 0, /* channelDescription */
	1, 3, 6, 1, 2, 1, 16, 7, 2, 1, 11, 0, /* channelOwner */
	1, 3, 6, 1, 2, 1, 16, 7, 2, 1, 12, 0, /* channelStatus */
	1, 3, 6, 1, 2, 1, 16, 8, 0, /* capture */
	1, 3, 6, 1, 2, 1, 16, 8, 1, 0, /* bufferControlTable */
	1, 3, 6, 1, 2, 1, 16, 8, 1, 1, 0, /* bufferControlEntry */
	1, 3, 6, 1, 2, 1, 16, 8, 1, 1, 1, 0, /* bufferControlIndex */
	1, 3, 6, 1, 2, 1, 16, 8, 1, 1, 2, 0, /* bufferControlChannelIndex */
	1, 3, 6, 1, 2, 1, 16, 8, 1, 1, 3, 0, /* bufferControlFullStatus */
	1, 3, 6, 1, 2, 1, 16, 8, 1, 1, 4, 0, /* bufferControlFullAction */
	1, 3, 6, 1, 2, 1, 16, 8, 1, 1, 5, 0, /* bufferControlCaptureSliceSize */
	1, 3, 6, 1, 2, 1, 16, 8, 1, 1, 6, 0, /* bufferControlDownloadSliceSize */
	1, 3, 6, 1, 2, 1, 16, 8, 1, 1, 7, 0, /* bufferControlDownloadOffset */
	1, 3, 6, 1, 2, 1, 16, 8, 1, 1, 8, 0, /* bufferControlMaxOctetsRequested */
	1, 3, 6, 1, 2, 1, 16, 8, 1, 1, 9, 0, /* bufferControlMaxOctetsGranted */
	1, 3, 6, 1, 2, 1, 16, 8, 1, 1, 10, 0, /* bufferControlCapturedPackets */
	1, 3, 6, 1, 2, 1, 16, 8, 1, 1, 11, 0, /* bufferControlTurnOnTime */
	1, 3, 6, 1, 2, 1, 16, 8, 1, 1, 12, 0, /* bufferControlOwner */
	1, 3, 6, 1, 2, 1, 16, 8, 1, 1, 13, 0, /* bufferControlStatus */
	1, 3, 6, 1, 2, 1, 16, 8, 2, 0, /* captureBufferTable */
	1, 3, 6, 1, 2, 1, 16, 8, 2, 1, 0, /* captureBufferEntry */
	1, 3, 6, 1, 2, 1, 16, 8, 2, 1, 1, 0, /* captureBufferControlIndex */
	1, 3, 6, 1, 2, 1, 16, 8, 2, 1, 2, 0, /* captureBufferIndex */
	1, 3, 6, 1, 2, 1, 16, 8, 2, 1, 3, 0, /* captureBufferPacketID */
	1, 3, 6, 1, 2, 1, 16, 8, 2, 1, 4, 0, /* captureBufferPacketData */
	1, 3, 6, 1, 2, 1, 16, 8, 2, 1, 5, 0, /* captureBufferPacketLength */
	1, 3, 6, 1, 2, 1, 16, 8, 2, 1, 6, 0, /* captureBufferPacketTime */
	1, 3, 6, 1, 2, 1, 16, 8, 2, 1, 7, 0, /* captureBufferPacketStatus */
	1, 3, 6, 1, 2, 1, 16, 9, 0, /* event */
	1, 3, 6, 1, 2, 1, 16, 9, 1, 0, /* eventTable */
	1, 3, 6, 1, 2, 1, 16, 9, 1, 1, 0, /* eventEntry */
	1, 3, 6, 1, 2, 1, 16, 9, 1, 1, 1, 0, /* eventIndex */
	1, 3, 6, 1, 2, 1, 16, 9, 1, 1, 2, 0, /* eventDescription */
	1, 3, 6, 1, 2, 1, 16, 9, 1, 1, 3, 0, /* eventType */
	1, 3, 6, 1, 2, 1, 16, 9, 1, 1, 4, 0, /* eventCommunity */
	1, 3, 6, 1, 2, 1, 16, 9, 1, 1, 5, 0, /* eventLastTimeSent */
	1, 3, 6, 1, 2, 1, 16, 9, 1, 1, 6, 0, /* eventOwner */
	1, 3, 6, 1, 2, 1, 16, 9, 1, 1, 7, 0, /* eventStatus */
	1, 3, 6, 1, 2, 1, 16, 9, 2, 0, /* logTable */
	1, 3, 6, 1, 2, 1, 16, 9, 2, 1, 0, /* logEntry */
	1, 3, 6, 1, 2, 1, 16, 9, 2, 1, 1, 0, /* logEventIndex */
	1, 3, 6, 1, 2, 1, 16, 9, 2, 1, 2, 0, /* logIndex */
	1, 3, 6, 1, 2, 1, 16, 9, 2, 1, 3, 0, /* logTime */
	1, 3, 6, 1, 2, 1, 16, 9, 2, 1, 4, 0, /* logDescription */
	1, 3, 6, 1, 3, 0, /* experimental */
	1, 3, 6, 1, 3, 1, 0, /* clns */
	1, 3, 6, 1, 3, 1, 1, 0, /* clnp */
	1, 3, 6, 1, 3, 1, 1, 1, 0, /* clnpForwarding */
	1, 3, 6, 1, 3, 1, 1, 2, 0, /* clnpDefaultLifeTime */
	1, 3, 6, 1, 3, 1, 1, 3, 0, /* clnpInReceives */
	1, 3, 6, 1, 3, 1, 1, 4, 0, /* clnpInHdrErrors */
	1, 3, 6, 1, 3, 1, 1, 5, 0, /* clnpInAddrErrors */
	1, 3, 6, 1, 3, 1, 1, 6, 0, /* clnpForwPDUs */
	1, 3, 6, 1, 3, 1, 1, 7, 0, /* clnpInUnknownNLPs */
	1, 3, 6, 1, 3, 1, 1, 8, 0, /* clnpInUnknownULPs */
	1, 3, 6, 1, 3, 1, 1, 9, 0, /* clnpInDiscards */
	1, 3, 6, 1, 3, 1, 1, 10, 0, /* clnpInDelivers */
	1, 3, 6, 1, 3, 1, 1, 11, 0, /* clnpOutRequests */
	1, 3, 6, 1, 3, 1, 1, 12, 0, /* clnpOutDiscards */
	1, 3, 6, 1, 3, 1, 1, 13, 0, /* clnpOutNoRoutes */
	1, 3, 6, 1, 3, 1, 1, 14, 0, /* clnpReasmTimeout */
	1, 3, 6, 1, 3, 1, 1, 15, 0, /* clnpReasmReqds */
	1, 3, 6, 1, 3, 1, 1, 16, 0, /* clnpReasmOKs */
	1, 3, 6, 1, 3, 1, 1, 17, 0, /* clnpReasmFails */
	1, 3, 6, 1, 3, 1, 1, 18, 0, /* clnpSegOKs */
	1, 3, 6, 1, 3, 1, 1, 19, 0, /* clnpSegFails */
	1, 3, 6, 1, 3, 1, 1, 20, 0, /* clnpSegCreates */
	1, 3, 6, 1, 3, 1, 1, 21, 0, /* clnpAddrTable */
	1, 3, 6, 1, 3, 1, 1, 21, 1, 0, /* clnpAddrEntry */
	1, 3, 6, 1, 3, 1, 1, 21, 1, 1, 0, /* clnpAdEntAddr */
	1, 3, 6, 1, 3, 1, 1, 21, 1, 2, 0, /* clnpAdEntIfIndex */
	1, 3, 6, 1, 3, 1, 1, 21, 1, 3, 0, /* clnpAdEntReasmMaxSize */
	1, 3, 6, 1, 3, 1, 1, 22, 0, /* clnpRoutingTable */
	1, 3, 6, 1, 3, 1, 1, 22, 1, 0, /* clnpRouteEntry */
	1, 3, 6, 1, 3, 1, 1, 22, 1, 1, 0, /* clnpRouteDest */
	1, 3, 6, 1, 3, 1, 1, 22, 1, 2, 0, /* clnpRouteIfIndex */
	1, 3, 6, 1, 3, 1, 1, 22, 1, 3, 0, /* clnpRouteMetric1 */
	1, 3, 6, 1, 3, 1, 1, 22, 1, 4, 0, /* clnpRouteMetric2 */
	1, 3, 6, 1, 3, 1, 1, 22, 1, 5, 0, /* clnpRouteMetric3 */
	1, 3, 6, 1, 3, 1, 1, 22, 1, 6, 0, /* clnpRouteMetric4 */
	1, 3, 6, 1, 3, 1, 1, 22, 1, 7, 0, /* clnpRouteNextHop */
	1, 3, 6, 1, 3, 1, 1, 22, 1, 8, 0, /* clnpRouteType */
	1, 3, 6, 1, 3, 1, 1, 22, 1, 9, 0, /* clnpRouteProto */
	1, 3, 6, 1, 3, 1, 1, 22, 1, 10, 0, /* clnpRouteAge */
	1, 3, 6, 1, 3, 1, 1, 22, 1, 11, 0, /* clnpRouteMetric5 */
	1, 3, 6, 1, 3, 1, 1, 22, 1, 12, 0, /* clnpRouteInfo */
	1, 3, 6, 1, 3, 1, 1, 23, 0, /* clnpNetToMediaTable */
	1, 3, 6, 1, 3, 1, 1, 23, 1, 0, /* clnpNetToMediaEntry */
	1, 3, 6, 1, 3, 1, 1, 23, 1, 1, 0, /* clnpNetToMediaIfIndex */
	1, 3, 6, 1, 3, 1, 1, 23, 1, 2, 0, /* clnpNetToMediaPhysAddress */
	1, 3, 6, 1, 3, 1, 1, 23, 1, 3, 0, /* clnpNetToMediaNetAddress */
	1, 3, 6, 1, 3, 1, 1, 23, 1, 4, 0, /* clnpNetToMediaType */
	1, 3, 6, 1, 3, 1, 1, 23, 1, 5, 0, /* clnpNetToMediaAge */
	1, 3, 6, 1, 3, 1, 1, 23, 1, 6, 0, /* clnpNetToMediaHoldTime */
	1, 3, 6, 1, 3, 1, 1, 24, 0, /* clnpMediaToNetTable */
	1, 3, 6, 1, 3, 1, 1, 24, 1, 0, /* clnpMediaToNetEntry */
	1, 3, 6, 1, 3, 1, 1, 24, 1, 1, 0, /* clnpMediaToNetIfIndex */
	1, 3, 6, 1, 3, 1, 1, 24, 1, 2, 0, /* clnpMediaToNetAddress */
	1, 3, 6, 1, 3, 1, 1, 24, 1, 3, 0, /* clnpMediaToNetPhysAddress */
	1, 3, 6, 1, 3, 1, 1, 24, 1, 4, 0, /* clnpMediaToNetType */
	1, 3, 6, 1, 3, 1, 1, 24, 1, 5, 0, /* clnpMediaToNetAge */
	1, 3, 6, 1, 3, 1, 1, 24, 1, 6, 0, /* clnpMediaToNetHoldTime */
	1, 3, 6, 1, 3, 1, 1, 25, 0, /* clnpInOpts */
	1, 3, 6, 1, 3, 1, 1, 26, 0, /* clnpOutOpts */
	1, 3, 6, 1, 3, 1, 1, 27, 0, /* clnpRoutingDiscards */
	1, 3, 6, 1, 3, 1, 2, 0, /* error */
	1, 3, 6, 1, 3, 1, 2, 1, 0, /* clnpInErrors */
	1, 3, 6, 1, 3, 1, 2, 2, 0, /* clnpOutErrors */
	1, 3, 6, 1, 3, 1, 2, 3, 0, /* clnpInErrUnspecs */
	1, 3, 6, 1, 3, 1, 2, 4, 0, /* clnpInErrProcs */
	1, 3, 6, 1, 3, 1, 2, 5, 0, /* clnpInErrCksums */
	1, 3, 6, 1, 3, 1, 2, 6, 0, /* clnpInErrCongests */
	1, 3, 6, 1, 3, 1, 2, 7, 0, /* clnpInErrHdrs */
	1, 3, 6, 1, 3, 1, 2, 8, 0, /* clnpInErrSegs */
	1, 3, 6, 1, 3, 1, 2, 9, 0, /* clnpInErrIncomps */
	1, 3, 6, 1, 3, 1, 2, 10, 0, /* clnpInErrDups */
	1, 3, 6, 1, 3, 1, 2, 11, 0, /* clnpInErrUnreachDsts */
	1, 3, 6, 1, 3, 1, 2, 12, 0, /* clnpInErrUnknownDsts */
	1, 3, 6, 1, 3, 1, 2, 13, 0, /* clnpInErrSRUnspecs */
	1, 3, 6, 1, 3, 1, 2, 14, 0, /* clnpInErrSRSyntaxes */
	1, 3, 6, 1, 3, 1, 2, 15, 0, /* clnpInErrSRUnkAddrs */
	1, 3, 6, 1, 3, 1, 2, 16, 0, /* clnpInErrSRBadPaths */
	1, 3, 6, 1, 3, 1, 2, 17, 0, /* clnpInErrHops */
	1, 3, 6, 1, 3, 1, 2, 18, 0, /* clnpInErrHopReassms */
	1, 3, 6, 1, 3, 1, 2, 19, 0, /* clnpInErrUnsOptions */
	1, 3, 6, 1, 3, 1, 2, 20, 0, /* clnpInErrUnsVersions */
	1, 3, 6, 1, 3, 1, 2, 21, 0, /* clnpInErrUnsSecurities */
	1, 3, 6, 1, 3, 1, 2, 22, 0, /* clnpInErrUnsSRs */
	1, 3, 6, 1, 3, 1, 2, 23, 0, /* clnpInErrUnsRRs */
	1, 3, 6, 1, 3, 1, 2, 24, 0, /* clnpInErrInterferences */
	1, 3, 6, 1, 3, 1, 2, 25, 0, /* clnpOutErrUnspecs */
	1, 3, 6, 1, 3, 1, 2, 26, 0, /* clnpOutErrProcs */
	1, 3, 6, 1, 3, 1, 2, 27, 0, /* clnpOutErrCksums */
	1, 3, 6, 1, 3, 1, 2, 28, 0, /* clnpOutErrCongests */
	1, 3, 6, 1, 3, 1, 2, 29, 0, /* clnpOutErrHdrs */
	1, 3, 6, 1, 3, 1, 2, 30, 0, /* clnpOutErrSegs */
	1, 3, 6, 1, 3, 1, 2, 31, 0, /* clnpOutErrIncomps */
	1, 3, 6, 1, 3, 1, 2, 32, 0, /* clnpOutErrDups */
	1, 3, 6, 1, 3, 1, 2, 33, 0, /* clnpOutErrUnreachDsts */
	1, 3, 6, 1, 3, 1, 2, 34, 0, /* clnpOutErrUnknownDsts */
	1, 3, 6, 1, 3, 1, 2, 35, 0, /* clnpOutErrSRUnspecs */
	1, 3, 6, 1, 3, 1, 2, 36, 0, /* clnpOutErrSRSyntaxes */
	1, 3, 6, 1, 3, 1, 2, 37, 0, /* clnpOutErrSRUnkAddrs */
	1, 3, 6, 1, 3, 1, 2, 38, 0, /* clnpOutErrSRBadPaths */
	1, 3, 6, 1, 3, 1, 2, 39, 0, /* clnpOutErrHops */
	1, 3, 6, 1, 3, 1, 2, 40, 0, /* clnpOutErrHopReassms */
	1, 3, 6, 1, 3, 1, 2, 41, 0, /* clnpOutErrUnsOptions */
	1, 3, 6, 1, 3, 1, 2, 42, 0, /* clnpOutErrUnsVersions */
	1, 3, 6, 1, 3, 1, 2, 43, 0, /* clnpOutErrUnsSecurities */
	1, 3, 6, 1, 3, 1, 2, 44, 0, /* clnpOutErrUnsSRs */
	1, 3, 6, 1, 3, 1, 2, 45, 0, /* clnpOutErrUnsRRs */
	1, 3, 6, 1, 3, 1, 2, 46, 0, /* clnpOutErrInterferences */
	1, 3, 6, 1, 3, 1, 3, 0, /* echo */
	1, 3, 6, 1, 3, 1, 4, 0, /* es-is */
	1, 3, 6, 1, 3, 1, 4, 1, 0, /* esisESHins */
	1, 3, 6, 1, 3, 1, 4, 2, 0, /* esisESHouts */
	1, 3, 6, 1, 3, 1, 4, 3, 0, /* esisISHins */
	1, 3, 6, 1, 3, 1, 4, 4, 0, /* esisISHouts */
	1, 3, 6, 1, 3, 1, 4, 5, 0, /* esisRDUins */
	1, 3, 6, 1, 3, 1, 4, 6, 0, /* esisRDUouts */
	1, 3, 6, 1, 3, 8, 0, /* fddi */
	1, 3, 6, 1, 3, 8, 1, 0, /* snmpFddiSMT */
	1, 3, 6, 1, 3, 8, 1, 1, 0, /* snmpFddiSMTNumber */
	1, 3, 6, 1, 3, 8, 1, 2, 0, /* snmpFddiSMTTable */
	1, 3, 6, 1, 3, 8, 1, 2, 1, 0, /* snmpFddiSMTEntry */
	1, 3, 6, 1, 3, 8, 1, 2, 1, 1, 0, /* snmpFddiSMTIndex */
	1, 3, 6, 1, 3, 8, 1, 2, 1, 2, 0, /* snmpFddiSMTStationId */
	1, 3, 6, 1, 3, 8, 1, 2, 1, 3, 0, /* snmpFddiSMTOpVersionId */
	1, 3, 6, 1, 3, 8, 1, 2, 1, 4, 0, /* snmpFddiSMTHiVersionId */
	1, 3, 6, 1, 3, 8, 1, 2, 1, 5, 0, /* snmpFddiSMTLoVersionId */
	1, 3, 6, 1, 3, 8, 1, 2, 1, 6, 0, /* snmpFddiSMTMACCt */
	1, 3, 6, 1, 3, 8, 1, 2, 1, 7, 0, /* snmpFddiSMTNonMasterCt */
	1, 3, 6, 1, 3, 8, 1, 2, 1, 8, 0, /* snmpFddiSMTMasterCt */
	1, 3, 6, 1, 3, 8, 1, 2, 1, 9, 0, /* snmpFddiSMTPathsAvailable */
	1, 3, 6, 1, 3, 8, 1, 2, 1, 10, 0, /* snmpFddiSMTConfigCapabilities */
	1, 3, 6, 1, 3, 8, 1, 2, 1, 11, 0, /* snmpFddiSMTConfigPolicy */
	1, 3, 6, 1, 3, 8, 1, 2, 1, 12, 0, /* snmpFddiSMTConnectionPolicy */
	1, 3, 6, 1, 3, 8, 1, 2, 1, 13, 0, /* snmpFddiSMTTNotify */
	1, 3, 6, 1, 3, 8, 1, 2, 1, 14, 0, /* snmpFddiSMTStatusReporting */
	1, 3, 6, 1, 3, 8, 1, 2, 1, 15, 0, /* snmpFddiSMTECMState */
	1, 3, 6, 1, 3, 8, 1, 2, 1, 16, 0, /* snmpFddiSMTCFState */
	1, 3, 6, 1, 3, 8, 1, 2, 1, 17, 0, /* snmpFddiSMTHoldState */
	1, 3, 6, 1, 3, 8, 1, 2, 1, 18, 0, /* snmpFddiSMTRemoteDisconnectFlag */
	1, 3, 6, 1, 3, 8, 1, 2, 1, 19, 0, /* snmpFddiSMTStationAction */
	1, 3, 6, 1, 3, 8, 2, 0, /* snmpFddiMAC */
	1, 3, 6, 1, 3, 8, 2, 1, 0, /* snmpFddiMACNumber */
	1, 3, 6, 1, 3, 8, 2, 2, 0, /* snmpFddiMACTable */
	1, 3, 6, 1, 3, 8, 2, 2, 1, 0, /* snmpFddiMACEntry */
	1, 3, 6, 1, 3, 8, 2, 2, 1, 1, 0, /* snmpFddiMACSMTIndex */
	1, 3, 6, 1, 3, 8, 2, 2, 1, 2, 0, /* snmpFddiMACIndex */
	1, 3, 6, 1, 3, 8, 2, 2, 1, 3, 0, /* snmpFddiMACFrameStatusCapabilities */
	1, 3, 6, 1, 3, 8, 2, 2, 1, 4, 0, /* snmpFddiMACTMaxGreatestLowerBound */
	1, 3, 6, 1, 3, 8, 2, 2, 1, 5, 0, /* snmpFddiMACTVXGreatestLowerBound */
	1, 3, 6, 1, 3, 8, 2, 2, 1, 6, 0, /* snmpFddiMACPathsAvailable */
	1, 3, 6, 1, 3, 8, 2, 2, 1, 7, 0, /* snmpFddiMACCurrentPath */
	1, 3, 6, 1, 3, 8, 2, 2, 1, 8, 0, /* snmpFddiMACUpstreamNbr */
	1, 3, 6, 1, 3, 8, 2, 2, 1, 9, 0, /* snmpFddiMACOldUpstreamNbr */
	1, 3, 6, 1, 3, 8, 2, 2, 1, 10, 0, /* snmpFddiMACDupAddrTest */
	1, 3, 6, 1, 3, 8, 2, 2, 1, 11, 0, /* snmpFddiMACPathsRequested */
	1, 3, 6, 1, 3, 8, 2, 2, 1, 12, 0, /* snmpFddiMACDownstreamPORTType */
	1, 3, 6, 1, 3, 8, 2, 2, 1, 13, 0, /* snmpFddiMACSMTAddress */
	1, 3, 6, 1, 3, 8, 2, 2, 1, 14, 0, /* snmpFddiMACTReq */
	1, 3, 6, 1, 3, 8, 2, 2, 1, 15, 0, /* snmpFddiMACTNeg */
	1, 3, 6, 1, 3, 8, 2, 2, 1, 16, 0, /* snmpFddiMACTMax */
	1, 3, 6, 1, 3, 8, 2, 2, 1, 17, 0, /* snmpFddiMACTvxValue */
	1, 3, 6, 1, 3, 8, 2, 2, 1, 18, 0, /* snmpFddiMACTMin */
	1, 3, 6, 1, 3, 8, 2, 2, 1, 19, 0, /* snmpFddiMACCurrentFrameStatus */
	1, 3, 6, 1, 3, 8, 2, 2, 1, 20, 0, /* snmpFddiMACFrameCts */
	1, 3, 6, 1, 3, 8, 2, 2, 1, 21, 0, /* snmpFddiMACErrorCts */
	1, 3, 6, 1, 3, 8, 2, 2, 1, 22, 0, /* snmpFddiMACLostCts */
	1, 3, 6, 1, 3, 8, 2, 2, 1, 23, 0, /* snmpFddiMACFrameErrorThreshold */
	1, 3, 6, 1, 3, 8, 2, 2, 1, 24, 0, /* snmpFddiMACFrameErrorRatio */
	1, 3, 6, 1, 3, 8, 2, 2, 1, 25, 0, /* snmpFddiMACRMTState */
	1, 3, 6, 1, 3, 8, 2, 2, 1, 26, 0, /* snmpFddiMACDaFlag */
	1, 3, 6, 1, 3, 8, 2, 2, 1, 27, 0, /* snmpFddiMACUnaDaFlag */
	1, 3, 6, 1, 3, 8, 2, 2, 1, 28, 0, /* snmpFddiMACFrameCondition */
	1, 3, 6, 1, 3, 8, 2, 2, 1, 29, 0, /* snmpFddiMACChipSet */
	1, 3, 6, 1, 3, 8, 2, 2, 1, 30, 0, /* snmpFddiMACAction */
	1, 3, 6, 1, 3, 8, 3, 0, /* snmpFddiPATH */
	1, 3, 6, 1, 3, 8, 4, 0, /* snmpFddiPORT */
	1, 3, 6, 1, 3, 8, 4, 1, 0, /* snmpFddiPORTNumber */
	1, 3, 6, 1, 3, 8, 4, 2, 0, /* snmpFddiPORTTable */
	1, 3, 6, 1, 3, 8, 4, 2, 1, 0, /* snmpFddiPORTEntry */
	1, 3, 6, 1, 3, 8, 4, 2, 1, 1, 0, /* snmpFddiPORTSMTIndex */
	1, 3, 6, 1, 3, 8, 4, 2, 1, 2, 0, /* snmpFddiPORTIndex */
	1, 3, 6, 1, 3, 8, 4, 2, 1, 3, 0, /* snmpFddiPORTPCType */
	1, 3, 6, 1, 3, 8, 4, 2, 1, 4, 0, /* snmpFddiPORTPCNeighbor */
	1, 3, 6, 1, 3, 8, 4, 2, 1, 5, 0, /* snmpFddiPORTConnectionPolicies */
	1, 3, 6, 1, 3, 8, 4, 2, 1, 6, 0, /* snmpFddiPORTRemoteMACIndicated */
	1, 3, 6, 1, 3, 8, 4, 2, 1, 7, 0, /* snmpFddiPORTCEState */
	1, 3, 6, 1, 3, 8, 4, 2, 1, 8, 0, /* snmpFddiPORTPathsRequested */
	1, 3, 6, 1, 3, 8, 4, 2, 1, 9, 0, /* snmpFddiPORTMACPlacement */
	1, 3, 6, 1, 3, 8, 4, 2, 1, 10, 0, /* snmpFddiPORTAvailablePaths */
	1, 3, 6, 1, 3, 8, 4, 2, 1, 11, 0, /* snmpFddiPORTMACLoopTime */
	1, 3, 6, 1, 3, 8, 4, 2, 1, 12, 0, /* snmpFddiPORTTBMax */
	1, 3, 6, 1, 3, 8, 4, 2, 1, 13, 0, /* snmpFddiPORTBSFlag */
	1, 3, 6, 1, 3, 8, 4, 2, 1, 14, 0, /* snmpFddiPORTLCTFailCts */
	1, 3, 6, 1, 3, 8, 4, 2, 1, 15, 0, /* snmpFddiPORTLerEstimate */
	1, 3, 6, 1, 3, 8, 4, 2, 1, 16, 0, /* snmpFddiPORTLemRejectCts */
	1, 3, 6, 1, 3, 8, 4, 2, 1, 17, 0, /* snmpFddiPORTLemCts */
	1, 3, 6, 1, 3, 8, 4, 2, 1, 18, 0, /* snmpFddiPORTLerCutoff */
	1, 3, 6, 1, 3, 8, 4, 2, 1, 19, 0, /* snmpFddiPORTLerAlarm */
	1, 3, 6, 1, 3, 8, 4, 2, 1, 20, 0, /* snmpFddiPORTConnectState */
	1, 3, 6, 1, 3, 8, 4, 2, 1, 21, 0, /* snmpFddiPORTPCMState */
	1, 3, 6, 1, 3, 8, 4, 2, 1, 22, 0, /* snmpFddiPORTPCWithhold */
	1, 3, 6, 1, 3, 8, 4, 2, 1, 23, 0, /* snmpFddiPORTLerCondition */
	1, 3, 6, 1, 3, 8, 4, 2, 1, 24, 0, /* snmpFddiPORTChipSet */
	1, 3, 6, 1, 3, 8, 4, 2, 1, 25, 0, /* snmpFddiPORTAction */
	1, 3, 6, 1, 3, 8, 5, 0, /* snmpFddiATTACHMENT */
	1, 3, 6, 1, 3, 8, 5, 1, 0, /* snmpFddiATTACHMENTNumber */
	1, 3, 6, 1, 3, 8, 5, 2, 0, /* snmpFddiATTACHMENTTable */
	1, 3, 6, 1, 3, 8, 5, 2, 1, 0, /* snmpFddiATTACHMENTEntry */
	1, 3, 6, 1, 3, 8, 5, 2, 1, 1, 0, /* snmpFddiATTACHMENTSMTIndex */
	1, 3, 6, 1, 3, 8, 5, 2, 1, 2, 0, /* snmpFddiATTACHMENTIndex */
	1, 3, 6, 1, 3, 8, 5, 2, 1, 3, 0, /* snmpFddiATTACHMENTClass */
	1, 3, 6, 1, 3, 8, 5, 2, 1, 4, 0, /* snmpFddiATTACHMENTOpticalBypassPresent */
	1, 3, 6, 1, 3, 8, 5, 2, 1, 5, 0, /* snmpFddiATTACHMENTIMaxExpiration */
	1, 3, 6, 1, 3, 8, 5, 2, 1, 6, 0, /* snmpFddiATTACHMENTInsertedStatus */
	1, 3, 6, 1, 3, 8, 5, 2, 1, 7, 0, /* snmpFddiATTACHMENTInsertPolicy */
	1, 3, 6, 1, 3, 8, 6, 0, /* snmpFddiChipSets */
	1, 3, 6, 1, 3, 8, 6, 1, 0, /* snmpFddiPHYChipSets */
	1, 3, 6, 1, 3, 8, 6, 2, 0, /* snmpFddiMACChipSets */
	1, 3, 6, 1, 3, 8, 6, 3, 0, /* snmpFddiPHYMACChipSets */
	1, 3, 6, 1, 3, 9, 0, /* lanmgr-1 */
	1, 3, 6, 1, 3, 9, 1, 0, /* common */
	1, 3, 6, 1, 3, 9, 1, 1, 0, /* comVersionMaj */
	1, 3, 6, 1, 3, 9, 1, 2, 0, /* comVersionMin */
	1, 3, 6, 1, 3, 9, 1, 3, 0, /* comType */
	1, 3, 6, 1, 3, 9, 1, 4, 0, /* comStatStart */
	1, 3, 6, 1, 3, 9, 1, 5, 0, /* comStatNumNetIOs */
	1, 3, 6, 1, 3, 9, 1, 6, 0, /* comStatFiNetIOs */
	1, 3, 6, 1, 3, 9, 1, 7, 0, /* comStatFcNetIOs */
	1, 3, 6, 1, 3, 9, 2, 0, /* server */
	1, 3, 6, 1, 3, 9, 2, 1, 0, /* svDescription */
	1, 3, 6, 1, 3, 9, 2, 2, 0, /* svSvcNumber */
	1, 3, 6, 1, 3, 9, 2, 3, 0, /* svSvcTable */
	1, 3, 6, 1, 3, 9, 2, 3, 1, 0, /* svSvcEntry */
	1, 3, 6, 1, 3, 9, 2, 3, 1, 1, 0, /* svSvcName */
	1, 3, 6, 1, 3, 9, 2, 3, 1, 2, 0, /* svSvcInstalledState */
	1, 3, 6, 1, 3, 9, 2, 3, 1, 3, 0, /* svSvcOperatingState */
	1, 3, 6, 1, 3, 9, 2, 3, 1, 4, 0, /* svSvcCanBeUninstalled */
	1, 3, 6, 1, 3, 9, 2, 3, 1, 5, 0, /* svSvcCanBePaused */
	1, 3, 6, 1, 3, 9, 2, 4, 0, /* svStatOpens */
	1, 3, 6, 1, 3, 9, 2, 5, 0, /* svStatDevOpens */
	1, 3, 6, 1, 3, 9, 2, 6, 0, /* svStatQueuedJobs */
	1, 3, 6, 1, 3, 9, 2, 7, 0, /* svStatSOpens */
	1, 3, 6, 1, 3, 9, 2, 8, 0, /* svStatErrorOuts */
	1, 3, 6, 1, 3, 9, 2, 9, 0, /* svStatPwErrors */
	1, 3, 6, 1, 3, 9, 2, 10, 0, /* svStatPermErrors */
	1, 3, 6, 1, 3, 9, 2, 11, 0, /* svStatSysErrors */
	1, 3, 6, 1, 3, 9, 2, 12, 0, /* svStatSentBytes */
	1, 3, 6, 1, 3, 9, 2, 13, 0, /* svStatRcvdBytes */
	1, 3, 6, 1, 3, 9, 2, 14, 0, /* svStatAvResponse */
	1, 3, 6, 1, 3, 9, 3, 0, /* workstation */
	1, 3, 6, 1, 3, 9, 3, 1, 0, /* wkstaStatSessStarts */
	1, 3, 6, 1, 3, 9, 3, 2, 0, /* wkstaStatSessFails */
	1, 3, 6, 1, 3, 9, 3, 3, 0, /* wkstaStatUses */
	1, 3, 6, 1, 3, 9, 3, 4, 0, /* wkstaStatUseFails */
	1, 3, 6, 1, 3, 9, 3, 5, 0, /* wkstaStatAutoRecs */
	1, 3, 6, 1, 3, 11, 0, /* view */
	1, 3, 6, 1, 3, 11, 1, 0, /* viewPrimTable */
	1, 3, 6, 1, 3, 11, 1, 1, 0, /* viewPrimEntry */
	1, 3, 6, 1, 3, 11, 1, 1, 1, 0, /* viewPrimName */
	1, 3, 6, 1, 3, 11, 1, 1, 2, 0, /* viewPrimTDomain */
	1, 3, 6, 1, 3, 11, 1, 1, 3, 0, /* viewPrimTAddr */
	1, 3, 6, 1, 3, 11, 1, 1, 4, 0, /* viewPrimUser */
	1, 3, 6, 1, 3, 11, 1, 1, 5, 0, /* viewPrimCommunity */
	1, 3, 6, 1, 3, 11, 1, 1, 6, 0, /* viewPrimType */
	1, 3, 6, 1, 3, 11, 2, 0, /* defaultView */
	1, 3, 6, 1, 3, 11, 2, 1, 0, /* defViewWholeRW */
	1, 3, 6, 1, 3, 11, 2, 2, 0, /* defViewWholeRO */
	1, 3, 6, 1, 3, 11, 2, 3, 0, /* defViewStandardRW */
	1, 3, 6, 1, 3, 11, 2, 4, 0, /* defViewStandardRO */
	1, 3, 6, 1, 3, 11, 2, 5, 0, /* defViewTrapDest */
	1, 3, 6, 1, 3, 11, 3, 0, /* viewDomains */
	1, 3, 6, 1, 3, 11, 3, 1, 0, /* snmpDomain */
	1, 3, 6, 1, 3, 11, 3, 1, 1, 0, /* rfc1157Domain */
	1, 3, 6, 1, 3, 11, 3, 1, 3, 0, /* cltsDomain */
	1, 3, 6, 1, 3, 11, 3, 1, 4, 0, /* cotsNDomain */
	1, 3, 6, 1, 3, 11, 3, 1, 5, 0, /* cotsXDomain */
	1, 3, 6, 1, 3, 11, 4, 0, /* viewAclTable */
	1, 3, 6, 1, 3, 11, 4, 1, 0, /* viewAclEntry */
	1, 3, 6, 1, 3, 11, 4, 1, 1, 0, /* viewAclView */
	1, 3, 6, 1, 3, 11, 4, 1, 2, 0, /* viewAclCommunity */
	1, 3, 6, 1, 3, 11, 4, 1, 3, 0, /* viewAclUser */
	1, 3, 6, 1, 3, 11, 4, 1, 4, 0, /* viewAclPrivileges */
	1, 3, 6, 1, 3, 11, 4, 1, 5, 0, /* viewAclType */
	1, 3, 6, 1, 3, 11, 5, 0, /* viewTrapTable */
	1, 3, 6, 1, 3, 11, 5, 1, 0, /* viewTrapEntry */
	1, 3, 6, 1, 3, 11, 5, 1, 1, 0, /* viewTrapView */
	1, 3, 6, 1, 3, 11, 5, 1, 2, 0, /* viewTrapGenerics */
	1, 3, 6, 1, 3, 11, 5, 1, 3, 0, /* viewTrapSpecifics */
	1, 3, 6, 1, 3, 11, 5, 1, 4, 0, /* viewTrapType */
	1, 3, 6, 1, 3, 11, 6, 0, /* viewTranTable */
	1, 3, 6, 1, 3, 11, 6, 1, 0, /* viewTranEntry */
	1, 3, 6, 1, 3, 11, 6, 1, 1, 0, /* viewSourceName */
	1, 3, 6, 1, 3, 11, 6, 1, 2, 0, /* viewSourceSubtree */
	1, 3, 6, 1, 3, 11, 6, 1, 3, 0, /* viewTargetName */
	1, 3, 6, 1, 3, 11, 6, 1, 4, 0, /* viewTargetSubtree */
	1, 3, 6, 1, 3, 11, 6, 1, 5, 0, /* viewTranType */
	1, 3, 6, 1, 3, 18, 0, /* ppp */
	1, 3, 6, 1, 3, 18, 1, 0, /* pppLinkControlTable */
	1, 3, 6, 1, 3, 18, 1, 1, 0, /* pppLinkControlEntry */
	1, 3, 6, 1, 3, 18, 1, 1, 1, 0, /* pppLinkControlIndex */
	1, 3, 6, 1, 3, 18, 1, 1, 2, 0, /* pppLinkCRCSize */
	1, 3, 6, 1, 3, 18, 1, 1, 3, 0, /* pppLinkRestartTimerValue */
	1, 3, 6, 1, 3, 18, 1, 1, 4, 0, /* pppLinkMaxRestarts */
	1, 3, 6, 1, 3, 18, 1, 1, 5, 0, /* pppLinkLocalMRU */
	1, 3, 6, 1, 3, 18, 1, 1, 6, 0, /* pppLinkRemoteMRU */
	1, 3, 6, 1, 3, 18, 1, 1, 7, 0, /* pppLinkLocalACCMap */
	1, 3, 6, 1, 3, 18, 1, 1, 8, 0, /* pppLinkRemoteACCMap */
	1, 3, 6, 1, 3, 18, 1, 1, 9, 0, /* pppLinkMagicLoopCount */
	1, 3, 6, 1, 3, 18, 1, 1, 10, 0, /* pppLinkCommand */
	1, 3, 6, 1, 3, 18, 2, 0, /* pppLinkStatusTable */
	1, 3, 6, 1, 3, 18, 2, 1, 0, /* pppLinkStatusEntry */
	1, 3, 6, 1, 3, 18, 2, 1, 1, 0, /* pppLinkStatusIndex */
	1, 3, 6, 1, 3, 18, 2, 1, 2, 0, /* pppLinkVersion */
	1, 3, 6, 1, 3, 18, 2, 1, 3, 0, /* pppLinkCurrentState */
	1, 3, 6, 1, 3, 18, 2, 1, 4, 0, /* pppLinkPreviousState */
	1, 3, 6, 1, 3, 18, 2, 1, 5, 0, /* pppLinkChangeTime */
	1, 3, 6, 1, 3, 18, 2, 1, 6, 0, /* pppLinkMagicNumber */
	1, 3, 6, 1, 3, 18, 2, 1, 7, 0, /* pppLinkLocalQualityPeriod */
	1, 3, 6, 1, 3, 18, 2, 1, 8, 0, /* pppLinkRemoteQualityPeriod */
	1, 3, 6, 1, 3, 18, 2, 1, 9, 0, /* pppLinkProtocolCompression */
	1, 3, 6, 1, 3, 18, 2, 1, 10, 0, /* pppLinkACCompression */
	1, 3, 6, 1, 3, 18, 2, 1, 11, 0, /* pppLinkMeasurementsValid */
	1, 3, 6, 1, 3, 18, 2, 1, 12, 0, /* pppLinkQuality */
	1, 3, 6, 1, 3, 18, 2, 1, 13, 0, /* pppLinkPhysical */
	1, 3, 6, 1, 3, 18, 3, 0, /* pppLinkErrorsTable */
	1, 3, 6, 1, 3, 18, 3, 1, 0, /* pppLinkErrorsEntry */
	1, 3, 6, 1, 3, 18, 3, 1, 1, 0, /* pppLinkErrorsIndex */
	1, 3, 6, 1, 3, 18, 3, 1, 2, 0, /* pppLinkBadAddresses */
	1, 3, 6, 1, 3, 18, 3, 1, 3, 0, /* pppLinkLastBadAddress */
	1, 3, 6, 1, 3, 18, 3, 1, 4, 0, /* pppLinkBadControls */
	1, 3, 6, 1, 3, 18, 3, 1, 5, 0, /* pppLinkLastBadControl */
	1, 3, 6, 1, 3, 18, 3, 1, 6, 0, /* pppLinkLastUnknownProtocol */
	1, 3, 6, 1, 3, 18, 3, 1, 7, 0, /* pppLinkInvalidProtocols */
	1, 3, 6, 1, 3, 18, 3, 1, 8, 0, /* pppLinkLastInvalidProtocol */
	1, 3, 6, 1, 3, 18, 3, 1, 9, 0, /* pppLinkPacketTooLongs */
	1, 3, 6, 1, 3, 18, 3, 1, 10, 0, /* pppLinkBadCRCs */
	1, 3, 6, 1, 3, 18, 3, 1, 11, 0, /* pppLinkConfigTimeouts */
	1, 3, 6, 1, 3, 18, 3, 1, 12, 0, /* pppLinkTerminateTimeouts */
	1, 3, 6, 1, 3, 18, 4, 0, /* pppLinkQualityTable */
	1, 3, 6, 1, 3, 18, 4, 1, 0, /* pppLinkQualityEntry */
	1, 3, 6, 1, 3, 18, 4, 1, 1, 0, /* pppLinkQualityIndex */
	1, 3, 6, 1, 3, 18, 4, 1, 2, 0, /* pppLinkInTxLQRs */
	1, 3, 6, 1, 3, 18, 4, 1, 3, 0, /* pppLinkInTxPackets */
	1, 3, 6, 1, 3, 18, 4, 1, 4, 0, /* pppLinkLastOutTxPackets */
	1, 3, 6, 1, 3, 18, 4, 1, 5, 0, /* pppLinkInTxOctets */
	1, 3, 6, 1, 3, 18, 4, 1, 6, 0, /* pppLinkLastOutTxOctets */
	1, 3, 6, 1, 3, 18, 4, 1, 7, 0, /* pppLinkInRxPackets */
	1, 3, 6, 1, 3, 18, 4, 1, 8, 0, /* pppLinkLastInRxPackets */
	1, 3, 6, 1, 3, 18, 4, 1, 9, 0, /* pppLinkInRxOctets */
	1, 3, 6, 1, 3, 18, 4, 1, 10, 0, /* pppLinkLastInRxOctets */
	1, 3, 6, 1, 3, 18, 5, 0, /* pppProtocolTables */
	1, 3, 6, 1, 3, 18, 5, 1, 0, /* pppIPTable */
	1, 3, 6, 1, 3, 18, 5, 1, 1, 0, /* pppIPEntry */
	1, 3, 6, 1, 3, 18, 5, 1, 1, 1, 0, /* pppIPLinkNumber */
	1, 3, 6, 1, 3, 18, 5, 1, 1, 2, 0, /* pppIPRejects */
	1, 3, 6, 1, 3, 18, 5, 1, 1, 3, 0, /* pppIPInPackets */
	1, 3, 6, 1, 3, 18, 5, 1, 1, 4, 0, /* pppIPInOctets */
	1, 3, 6, 1, 3, 18, 5, 1, 1, 5, 0, /* pppIPOutPackets */
	1, 3, 6, 1, 3, 18, 5, 1, 1, 6, 0, /* pppIPOutOctets */
	1, 3, 6, 1, 3, 18, 5, 2, 0, /* pppIPCPTable */
	1, 3, 6, 1, 3, 18, 5, 2, 1, 0, /* pppIPCPEntry */
	1, 3, 6, 1, 3, 18, 5, 2, 1, 1, 0, /* pppIPCPLinkNumber */
	1, 3, 6, 1, 3, 18, 5, 2, 1, 2, 0, /* pppIPCPRejects */
	1, 3, 6, 1, 3, 18, 5, 2, 1, 3, 0, /* pppIPCPInPackets */
	1, 3, 6, 1, 3, 18, 5, 2, 1, 4, 0, /* pppIPCPInOctets */
	1, 3, 6, 1, 3, 18, 5, 2, 1, 5, 0, /* pppIPCPOutPackets */
	1, 3, 6, 1, 3, 18, 5, 2, 1, 6, 0, /* pppIPCPOutOctets */
	1, 3, 6, 1, 3, 18, 5, 2, 1, 7, 0, /* pppIPCPCompressionType */
	1, 3, 6, 1, 3, 18, 5, 3, 0, /* pppLCPTable */
	1, 3, 6, 1, 3, 18, 5, 3, 1, 0, /* pppLCPEntry */
	1, 3, 6, 1, 3, 18, 5, 3, 1, 1, 0, /* pppLCPLinkNumber */
	1, 3, 6, 1, 3, 18, 5, 3, 1, 2, 0, /* pppLCPRejects */
	1, 3, 6, 1, 3, 18, 5, 3, 1, 3, 0, /* pppLCPInPackets */
	1, 3, 6, 1, 3, 18, 5, 3, 1, 4, 0, /* pppLCPInOctets */
	1, 3, 6, 1, 3, 18, 5, 3, 1, 5, 0, /* pppLCPOutPackets */
	1, 3, 6, 1, 3, 18, 5, 3, 1, 6, 0, /* pppLCPOutOctets */
	1, 3, 6, 1, 3, 18, 5, 3, 1, 7, 0, /* pppLCPOutCRs */
	1, 3, 6, 1, 3, 18, 5, 3, 1, 8, 0, /* pppLCPInCRs */
	1, 3, 6, 1, 3, 18, 5, 3, 1, 9, 0, /* pppLCPOutCAs */
	1, 3, 6, 1, 3, 18, 5, 3, 1, 10, 0, /* pppLCPInCAs */
	1, 3, 6, 1, 3, 18, 5, 3, 1, 11, 0, /* pppLCPOutCNs */
	1, 3, 6, 1, 3, 18, 5, 3, 1, 12, 0, /* pppLCPInCNs */
	1, 3, 6, 1, 3, 18, 5, 3, 1, 13, 0, /* pppLCPOutCRejs */
	1, 3, 6, 1, 3, 18, 5, 3, 1, 14, 0, /* pppLCPInCRejs */
	1, 3, 6, 1, 3, 18, 5, 3, 1, 15, 0, /* pppLCPOutTRs */
	1, 3, 6, 1, 3, 18, 5, 3, 1, 16, 0, /* pppLCPInTRs */
	1, 3, 6, 1, 3, 18, 5, 3, 1, 17, 0, /* pppLCPOutTAs */
	1, 3, 6, 1, 3, 18, 5, 3, 1, 18, 0, /* pppLCPInTAs */
	1, 3, 6, 1, 3, 18, 5, 3, 1, 19, 0, /* pppLCPOutCodeRejs */
	1, 3, 6, 1, 3, 18, 5, 3, 1, 20, 0, /* pppLCPInCodeRejs */
	1, 3, 6, 1, 3, 18, 5, 3, 1, 21, 0, /* pppLCPOutEchoReqs */
	1, 3, 6, 1, 3, 18, 5, 3, 1, 22, 0, /* pppLCPInEchoReqs */
	1, 3, 6, 1, 3, 18, 5, 3, 1, 23, 0, /* pppLCPOutEchoReps */
	1, 3, 6, 1, 3, 18, 5, 3, 1, 24, 0, /* pppLCPInEchoReps */
	1, 3, 6, 1, 3, 18, 5, 3, 1, 25, 0, /* pppLCPOutDiscReqs */
	1, 3, 6, 1, 3, 18, 5, 3, 1, 26, 0, /* pppLCPInDiscReqs */
	1, 3, 6, 1, 3, 18, 5, 4, 0, /* pppPAPTable */
	1, 3, 6, 1, 3, 18, 5, 4, 1, 0, /* pppPAPEntry */
	1, 3, 6, 1, 3, 18, 5, 4, 1, 1, 0, /* pppPAPLinkNumber */
	1, 3, 6, 1, 3, 18, 5, 4, 1, 2, 0, /* pppPAPInAuthenticates */
	1, 3, 6, 1, 3, 18, 5, 4, 1, 3, 0, /* pppPAPOutAuthenticates */
	1, 3, 6, 1, 3, 18, 5, 4, 1, 4, 0, /* pppPAPInAcks */
	1, 3, 6, 1, 3, 18, 5, 4, 1, 5, 0, /* pppPAPOutAcks */
	1, 3, 6, 1, 3, 18, 5, 4, 1, 6, 0, /* pppPAPInNaks */
	1, 3, 6, 1, 3, 18, 5, 4, 1, 7, 0, /* pppPAPOutNaks */
	1, 3, 6, 1, 3, 18, 6, 0, /* pppTests */
	1, 3, 6, 1, 3, 18, 6, 1, 0, /* pppEchoTest */
	1, 3, 6, 1, 3, 19, 0, /* char */
	1, 3, 6, 1, 3, 19, 1, 0, /* charNumber */
	1, 3, 6, 1, 3, 19, 2, 0, /* charPortTable */
	1, 3, 6, 1, 3, 19, 2, 1, 0, /* charPortEntry */
	1, 3, 6, 1, 3, 19, 2, 1, 1, 0, /* charPortIndex */
	1, 3, 6, 1, 3, 19, 2, 1, 2, 0, /* charPortName */
	1, 3, 6, 1, 3, 19, 2, 1, 3, 0, /* charPortType */
	1, 3, 6, 1, 3, 19, 2, 1, 4, 0, /* charPortHardware */
	1, 3, 6, 1, 3, 19, 2, 1, 5, 0, /* charPortReset */
	1, 3, 6, 1, 3, 19, 2, 1, 6, 0, /* charPortAdminStatus */
	1, 3, 6, 1, 3, 19, 2, 1, 7, 0, /* charPortOperStatus */
	1, 3, 6, 1, 3, 19, 2, 1, 8, 0, /* charPortLastChange */
	1, 3, 6, 1, 3, 19, 2, 1, 9, 0, /* charPortInFlowType */
	1, 3, 6, 1, 3, 19, 2, 1, 10, 0, /* charPortOutFlowType */
	1, 3, 6, 1, 3, 19, 2, 1, 11, 0, /* charPortInFlowState */
	1, 3, 6, 1, 3, 19, 2, 1, 12, 0, /* charPortOutFlowState */
	1, 3, 6, 1, 3, 19, 2, 1, 13, 0, /* charPortInCharacters */
	1, 3, 6, 1, 3, 19, 2, 1, 14, 0, /* charPortOutCharacters */
	1, 3, 6, 1, 3, 19, 2, 1, 15, 0, /* charPortAdminOrigin */
	1, 3, 6, 1, 3, 19, 2, 1, 16, 0, /* charPortSessionMaximum */
	1, 3, 6, 1, 3, 19, 2, 1, 17, 0, /* charPortSessionNumber */
	1, 3, 6, 1, 3, 19, 2, 1, 18, 0, /* charPortSessionIndex */
	1, 3, 6, 1, 3, 19, 3, 0, /* charSessTable */
	1, 3, 6, 1, 3, 19, 3, 1, 0, /* charSessEntry */
	1, 3, 6, 1, 3, 19, 3, 1, 1, 0, /* charSessPortIndex */
	1, 3, 6, 1, 3, 19, 3, 1, 2, 0, /* charSessIndex */
	1, 3, 6, 1, 3, 19, 3, 1, 3, 0, /* charSessKill */
	1, 3, 6, 1, 3, 19, 3, 1, 4, 0, /* charSessState */
	1, 3, 6, 1, 3, 19, 3, 1, 5, 0, /* charSessProtocol */
	1, 3, 6, 1, 3, 19, 3, 1, 6, 0, /* charSessOperOrigin */
	1, 3, 6, 1, 3, 19, 3, 1, 7, 0, /* charSessInCharacters */
	1, 3, 6, 1, 3, 19, 3, 1, 8, 0, /* charSessOutCharacters */
	1, 3, 6, 1, 3, 19, 3, 1, 9, 0, /* charSessConnectionId */
	1, 3, 6, 1, 3, 19, 3, 1, 10, 0, /* charSessStartTime */
	1, 3, 6, 1, 3, 19, 4, 0, /* wellKnownProtocols */
	1, 3, 6, 1, 3, 19, 4, 1, 0, /* protocolOther */
	1, 3, 6, 1, 3, 19, 4, 2, 0, /* protocolTelnet */
	1, 3, 6, 1, 3, 19, 4, 3, 0, /* protocolRlogin */
	1, 3, 6, 1, 3, 19, 4, 4, 0, /* protocolLat */
	1, 3, 6, 1, 3, 19, 4, 5, 0, /* protocolX29 */
	1, 3, 6, 1, 3, 19, 4, 6, 0, /* protocolVtp */
	1, 3, 6, 1, 3, 20, 0, /* rs232 */
	1, 3, 6, 1, 3, 20, 1, 0, /* rs232Number */
	1, 3, 6, 1, 3, 20, 2, 0, /* rs232PortTable */
	1, 3, 6, 1, 3, 20, 2, 1, 0, /* rs232PortEntry */
	1, 3, 6, 1, 3, 20, 2, 1, 1, 0, /* rs232PortIndex */
	1, 3, 6, 1, 3, 20, 2, 1, 2, 0, /* rs232PortType */
	1, 3, 6, 1, 3, 20, 2, 1, 3, 0, /* rs232PortInSigNumber */
	1, 3, 6, 1, 3, 20, 2, 1, 4, 0, /* rs232PortOutSigNumber */
	1, 3, 6, 1, 3, 20, 2, 1, 5, 0, /* rs232PortInSpeed */
	1, 3, 6, 1, 3, 20, 2, 1, 6, 0, /* rs232PortOutSpeed */
	1, 3, 6, 1, 3, 20, 3, 0, /* rs232AsyncPortTable */
	1, 3, 6, 1, 3, 20, 3, 1, 0, /* rs232AsyncPortEntry */
	1, 3, 6, 1, 3, 20, 3, 1, 1, 0, /* rs232AsyncPortIndex */
	1, 3, 6, 1, 3, 20, 3, 1, 2, 0, /* rs232AsyncPortBits */
	1, 3, 6, 1, 3, 20, 3, 1, 3, 0, /* rs232AsyncPortStopBits */
	1, 3, 6, 1, 3, 20, 3, 1, 4, 0, /* rs232AsyncPortParity */
	1, 3, 6, 1, 3, 20, 3, 1, 5, 0, /* rs232AsyncPortAutobaud */
	1, 3, 6, 1, 3, 20, 3, 1, 6, 0, /* rs232AsyncPortParityErrs */
	1, 3, 6, 1, 3, 20, 3, 1, 7, 0, /* rs232AsyncPortFramingErrs */
	1, 3, 6, 1, 3, 20, 3, 1, 8, 0, /* rs232AsyncPortOverrunErrs */
	1, 3, 6, 1, 3, 20, 4, 0, /* rs232SyncPortTable */
	1, 3, 6, 1, 3, 20, 4, 1, 0, /* rs232SyncPortEntry */
	1, 3, 6, 1, 3, 20, 4, 1, 1, 0, /* rs232SyncPortIndex */
	1, 3, 6, 1, 3, 20, 4, 1, 2, 0, /* rs232SyncPortClockSource */
	1, 3, 6, 1, 3, 20, 4, 1, 3, 0, /* rs232SyncPortFrameCheckErrs */
	1, 3, 6, 1, 3, 20, 4, 1, 4, 0, /* rs232SyncPortTransmitUnderrunErrs */
	1, 3, 6, 1, 3, 20, 4, 1, 5, 0, /* rs232SyncPortReceiveOverrunErrs */
	1, 3, 6, 1, 3, 20, 4, 1, 6, 0, /* rs232SyncPortInterruptedFrames */
	1, 3, 6, 1, 3, 20, 4, 1, 7, 0, /* rs232SyncPortAbortedFrames */
	1, 3, 6, 1, 3, 20, 5, 0, /* rs232InSigTable */
	1, 3, 6, 1, 3, 20, 5, 1, 0, /* rs232InSigEntry */
	1, 3, 6, 1, 3, 20, 5, 1, 1, 0, /* rs232InSigPortIndex */
	1, 3, 6, 1, 3, 20, 5, 1, 2, 0, /* rs232InSigName */
	1, 3, 6, 1, 3, 20, 5, 1, 3, 0, /* rs232InSigState */
	1, 3, 6, 1, 3, 20, 5, 1, 4, 0, /* rs232InSigChanges */
	1, 3, 6, 1, 3, 20, 6, 0, /* rs232OutSigTable */
	1, 3, 6, 1, 3, 20, 6, 1, 0, /* rs232OutSigEntry */
	1, 3, 6, 1, 3, 20, 6, 1, 1, 0, /* rs232OutSigPortIndex */
	1, 3, 6, 1, 3, 20, 6, 1, 2, 0, /* rs232OutSigName */
	1, 3, 6, 1, 3, 20, 6, 1, 3, 0, /* rs232OutSigState */
	1, 3, 6, 1, 3, 20, 6, 1, 4, 0, /* rs232OutSigChanges */
	1, 3, 6, 1, 3, 26, 0, /* frame-relay */
	1, 3, 6, 1, 3, 26, 1, 0, /* frDlcmiTable */
	1, 3, 6, 1, 3, 26, 1, 1, 0, /* frDlcmiEntry */
	1, 3, 6, 1, 3, 26, 1, 1, 1, 0, /* frDlcmiIfIndex */
	1, 3, 6, 1, 3, 26, 1, 1, 2, 0, /* frDlcmiState */
	1, 3, 6, 1, 3, 26, 1, 1, 3, 0, /* frDlcmiAddress */
	1, 3, 6, 1, 3, 26, 1, 1, 4, 0, /* frDlcmiAddressLen */
	1, 3, 6, 1, 3, 26, 1, 1, 5, 0, /* frDlcmiPollingInterval */
	1, 3, 6, 1, 3, 26, 1, 1, 6, 0, /* frDlcmiFullEnquiryInterval */
	1, 3, 6, 1, 3, 26, 1, 1, 7, 0, /* frDlcmiErrorThreshold */
	1, 3, 6, 1, 3, 26, 1, 1, 8, 0, /* frDlcmiMonitoredEvents */
	1, 3, 6, 1, 3, 26, 1, 1, 9, 0, /* frDlcmiMaxSupportedVCs */
	1, 3, 6, 1, 3, 26, 1, 1, 10, 0, /* frDlcmiMulticast */
	1, 3, 6, 1, 3, 26, 2, 0, /* frCircuitTable */
	1, 3, 6, 1, 3, 26, 2, 1, 0, /* frCircuitEntry */
	1, 3, 6, 1, 3, 26, 2, 1, 1, 0, /* frCircuitIfIndex */
	1, 3, 6, 1, 3, 26, 2, 1, 2, 0, /* frCircuitDlci */
	1, 3, 6, 1, 3, 26, 2, 1, 3, 0, /* frCircuitState */
	1, 3, 6, 1, 3, 26, 2, 1, 4, 0, /* frCircuitFECNreceived */
	1, 3, 6, 1, 3, 26, 2, 1, 5, 0, /* frCircuitBECNreceived */
	1, 3, 6, 1, 3, 26, 2, 1, 6, 0, /* frCircuitFramesSent */
	1, 3, 6, 1, 3, 26, 2, 1, 7, 0, /* frCircuitOctetsSent */
	1, 3, 6, 1, 3, 26, 2, 1, 8, 0, /* frCircuitFramesReceived */
	1, 3, 6, 1, 3, 26, 2, 1, 9, 0, /* frCircuitOctetsReceived */
	1, 3, 6, 1, 3, 26, 2, 1, 10, 0, /* frCircuitCreationTime */
	1, 3, 6, 1, 3, 26, 2, 1, 11, 0, /* frCircuitLastTimeChange */
	1, 3, 6, 1, 3, 26, 2, 1, 12, 0, /* frCircuitCommittedBurst */
	1, 3, 6, 1, 3, 26, 2, 1, 13, 0, /* frCircuitExcessBurst */
	1, 3, 6, 1, 3, 26, 2, 1, 14, 0, /* frCircuitThroughput */
	1, 3, 6, 1, 3, 26, 3, 0, /* frErrTable */
	1, 3, 6, 1, 3, 26, 3, 1, 0, /* frErrEntry */
	1, 3, 6, 1, 3, 26, 3, 1, 1, 0, /* frErrIfIndex */
	1, 3, 6, 1, 3, 26, 3, 1, 2, 0, /* frErrType */
	1, 3, 6, 1, 3, 26, 3, 1, 3, 0, /* frErrData */
	1, 3, 6, 1, 3, 26, 3, 1, 4, 0, /* frErrTime */
	1, 3, 6, 1, 3, 29, 0, /* snmpDot3RptrMgt */
	1, 3, 6, 1, 3, 29, 1, 0, /* rptrBasicGroup */
	1, 3, 6, 1, 3, 29, 1, 1, 0, /* rptrBasicTable */
	1, 3, 6, 1, 3, 29, 1, 1, 1, 0, /* rptrBasicEntry */
	1, 3, 6, 1, 3, 29, 1, 1, 1, 1, 0, /* rptrBasID */
	1, 3, 6, 1, 3, 29, 1, 1, 1, 2, 0, /* rptrBasManufacturer */
	1, 3, 6, 1, 3, 29, 1, 1, 1, 3, 0, /* rptrBasProduct */
	1, 3, 6, 1, 3, 29, 1, 1, 1, 4, 0, /* rptrBasVersion */
	1, 3, 6, 1, 3, 29, 1, 1, 1, 5, 0, /* rptrBasGroupCapacity */
	1, 3, 6, 1, 3, 29, 1, 1, 1, 6, 0, /* rptrBasGroupMap */
	1, 3, 6, 1, 3, 29, 1, 1, 1, 7, 0, /* rptrBasHealthState */
	1, 3, 6, 1, 3, 29, 1, 1, 1, 8, 0, /* rptrBasHealthText */
	1, 3, 6, 1, 3, 29, 1, 1, 1, 9, 0, /* rptrBasHealthData */
	1, 3, 6, 1, 3, 29, 1, 1, 1, 10, 0, /* rptrBasReset */
	1, 3, 6, 1, 3, 29, 1, 1, 1, 11, 0, /* rptrBasSelfTest1 */
	1, 3, 6, 1, 3, 29, 1, 1, 1, 12, 0, /* rptrBasSelfTest2 */
	1, 3, 6, 1, 3, 29, 1, 2, 0, /* rptrBasicGroupTable */
	1, 3, 6, 1, 3, 29, 1, 2, 1, 0, /* rptrBasicGroupEntry */
	1, 3, 6, 1, 3, 29, 1, 2, 1, 1, 0, /* rptrBasGroupRptrID */
	1, 3, 6, 1, 3, 29, 1, 2, 1, 2, 0, /* rptrBasGroupID */
	1, 3, 6, 1, 3, 29, 1, 2, 1, 3, 0, /* rptrBasGroupDescr */
	1, 3, 6, 1, 3, 29, 1, 2, 1, 4, 0, /* rptrBasGroupObjectID */
	1, 3, 6, 1, 3, 29, 1, 2, 1, 5, 0, /* rptrBasGroupUpTime */
	1, 3, 6, 1, 3, 29, 1, 2, 1, 6, 0, /* rptrBasGroupNumOfPorts */
	1, 3, 6, 1, 3, 29, 1, 3, 0, /* rptrBasicPortTable */
	1, 3, 6, 1, 3, 29, 1, 3, 1, 0, /* rptrBasicPortEntry */
	1, 3, 6, 1, 3, 29, 1, 3, 1, 1, 0, /* rptrBasPortRptrID */
	1, 3, 6, 1, 3, 29, 1, 3, 1, 2, 0, /* rptrBasPortGroupID */
	1, 3, 6, 1, 3, 29, 1, 3, 1, 3, 0, /* rptrBasPortID */
	1, 3, 6, 1, 3, 29, 1, 3, 1, 4, 0, /* rptrBasPortAdminState */
	1, 3, 6, 1, 3, 29, 1, 3, 1, 5, 0, /* rptrBasPortAutoPartitionState */
	1, 3, 6, 1, 3, 29, 2, 0, /* rptrMonitorGroup */
	1, 3, 6, 1, 3, 29, 2, 1, 0, /* rptrMonitorTable */
	1, 3, 6, 1, 3, 29, 2, 1, 1, 0, /* rptrMonitorEntry */
	1, 3, 6, 1, 3, 29, 2, 1, 1, 1, 0, /* rptrMonID */
	1, 3, 6, 1, 3, 29, 2, 1, 1, 2, 0, /* rptrMonTransmitCollisions */
	1, 3, 6, 1, 3, 29, 2, 1, 1, 3, 0, /* rptrMonMJLPs */
	1, 3, 6, 1, 3, 29, 2, 2, 0, /* rptrMonitorPortTable */
	1, 3, 6, 1, 3, 29, 2, 2, 1, 0, /* rptrMonitorPortEntry */
	1, 3, 6, 1, 3, 29, 2, 2, 1, 1, 0, /* rptrMonPortRptrID */
	1, 3, 6, 1, 3, 29, 2, 2, 1, 2, 0, /* rptrMonPortGroupID */
	1, 3, 6, 1, 3, 29, 2, 2, 1, 3, 0, /* rptrMonPortID */
	1, 3, 6, 1, 3, 29, 2, 2, 1, 4, 0, /* rptrMonPortReadableFrames */
	1, 3, 6, 1, 3, 29, 2, 2, 1, 5, 0, /* rptrMonPortReadableOctets */
	1, 3, 6, 1, 3, 29, 2, 2, 1, 6, 0, /* rptrMonPortFrameCheckSequenceErrs */
	1, 3, 6, 1, 3, 29, 2, 2, 1, 7, 0, /* rptrMonPortAlignmentErrors */
	1, 3, 6, 1, 3, 29, 2, 2, 1, 8, 0, /* rptrMonPortFrameTooLongs */
	1, 3, 6, 1, 3, 29, 2, 2, 1, 9, 0, /* rptrMonPortShortEvents */
	1, 3, 6, 1, 3, 29, 2, 2, 1, 10, 0, /* rptrMonPortRunts */
	1, 3, 6, 1, 3, 29, 2, 2, 1, 11, 0, /* rptrMonPortCollisions */
	1, 3, 6, 1, 3, 29, 2, 2, 1, 12, 0, /* rptrMonPortLateCollisions */
	1, 3, 6, 1, 3, 29, 2, 2, 1, 13, 0, /* rptrMonPortDataRateMismatches */
	1, 3, 6, 1, 3, 29, 2, 2, 1, 14, 0, /* rptrMonPortAutoPartitions */
	1, 3, 6, 1, 3, 29, 3, 0, /* rptrAddrTrackGroup */
	1, 3, 6, 1, 3, 29, 3, 1, 0, /* rptrAddrTrackTable */
	1, 3, 6, 1, 3, 29, 3, 1, 1, 0, /* rptrAddrTrackEntry */
	1, 3, 6, 1, 3, 29, 3, 1, 1, 1, 0, /* rptrAddrRptrID */
	1, 3, 6, 1, 3, 29, 3, 1, 1, 2, 0, /* rptrAddrGroupID */
	1, 3, 6, 1, 3, 29, 3, 1, 1, 3, 0, /* rptrAddrPortID */
	1, 3, 6, 1, 3, 29, 3, 1, 1, 4, 0, /* rptrAddrLastSourceAddress */
	1, 3, 6, 1, 3, 29, 3, 1, 1, 5, 0, /* rptrAddrSourceAddrChanges */
	1, 3, 6, 1, 4, 0, /* private */
	1, 3, 6, 1, 4, 1, 0, /* enterprises */
	1, 3, 6, 1, 4, 1, 4, 0, /* unix */
	1, 3, 6, 1, 4, 1, 4, 1, 0, /* agents */
	1, 3, 6, 1, 4, 1, 4, 1, 2, 0, /* fourBSD-isode */
	1, 3, 6, 1, 4, 1, 4, 1, 3, 0, /* agentAction */
	1, 3, 6, 1, 4, 1, 4, 2, 0, /* mbuf */
	1, 3, 6, 1, 4, 1, 4, 2, 1, 0, /* mbufs */
	1, 3, 6, 1, 4, 1, 4, 2, 2, 0, /* mbufClusters */
	1, 3, 6, 1, 4, 1, 4, 2, 3, 0, /* mbufFreeClusters */
	1, 3, 6, 1, 4, 1, 4, 2, 4, 0, /* mbufDrops */
	1, 3, 6, 1, 4, 1, 4, 2, 5, 0, /* mbufWaits */
	1, 3, 6, 1, 4, 1, 4, 2, 6, 0, /* mbufDrains */
	1, 3, 6, 1, 4, 1, 4, 2, 7, 0, /* mbufFrees */
	1, 3, 6, 1, 4, 1, 4, 2, 8, 0, /* mbufTable */
	1, 3, 6, 1, 4, 1, 4, 2, 8, 1, 0, /* mbufEntry */
	1, 3, 6, 1, 4, 1, 4, 2, 8, 1, 1, 0, /* mbufType */
	1, 3, 6, 1, 4, 1, 4, 2, 8, 1, 2, 0, /* mbufAllocates */
	1, 3, 6, 1, 4, 1, 4, 2, 9, 0, /* mbufSpaces */
	1, 3, 6, 1, 4, 1, 4, 3, 0, /* peers */
	1, 3, 6, 1, 4, 1, 4, 3, 1, 0, /* unixd */
	1, 3, 6, 1, 4, 1, 4, 4, 0, /* smux */
	1, 3, 6, 1, 4, 1, 4, 4, 1, 0, /* smuxPeerTable */
	1, 3, 6, 1, 4, 1, 4, 4, 1, 1, 0, /* smuxPeerEntry */
	1, 3, 6, 1, 4, 1, 4, 4, 1, 1, 1, 0, /* smuxPindex */
	1, 3, 6, 1, 4, 1, 4, 4, 1, 1, 2, 0, /* smuxPidentity */
	1, 3, 6, 1, 4, 1, 4, 4, 1, 1, 3, 0, /* smuxPdescription */
	1, 3, 6, 1, 4, 1, 4, 4, 1, 1, 4, 0, /* smuxPstatus */
	1, 3, 6, 1, 4, 1, 4, 4, 2, 0, /* smuxTreeTable */
	1, 3, 6, 1, 4, 1, 4, 4, 2, 1, 0, /* smuxTreeEntry */
	1, 3, 6, 1, 4, 1, 4, 4, 2, 1, 1, 0, /* smuxTsubtree */
	1, 3, 6, 1, 4, 1, 4, 4, 2, 1, 2, 0, /* smuxTpriority */
	1, 3, 6, 1, 4, 1, 4, 4, 2, 1, 3, 0, /* smuxTindex */
	1, 3, 6, 1, 4, 1, 4, 4, 2, 1, 4, 0, /* smuxTstatus */
	1, 3, 6, 1, 4, 1, 4, 5, 0, /* netstat */
	1, 3, 6, 1, 4, 1, 4, 5, 1, 0, /* unixNetstat */
	1, 3, 6, 1, 4, 1, 4, 5, 2, 0, /* unixTcpConnTable */
	1, 3, 6, 1, 4, 1, 4, 5, 2, 1, 0, /* unixTcpConnEntry */
	1, 3, 6, 1, 4, 1, 4, 5, 2, 1, 1, 0, /* unixTcpConnSendQ */
	1, 3, 6, 1, 4, 1, 4, 5, 2, 1, 2, 0, /* unixTcpConnRecvQ */
	1, 3, 6, 1, 4, 1, 4, 5, 3, 0, /* unixUdpTable */
	1, 3, 6, 1, 4, 1, 4, 5, 3, 1, 0, /* unixUdpEntry */
	1, 3, 6, 1, 4, 1, 4, 5, 3, 1, 1, 0, /* unixUdpRemAddress */
	1, 3, 6, 1, 4, 1, 4, 5, 3, 1, 2, 0, /* unixUdpRemPort */
	1, 3, 6, 1, 4, 1, 4, 5, 3, 1, 3, 0, /* unixUdpSendQ */
	1, 3, 6, 1, 4, 1, 4, 5, 3, 1, 4, 0, /* unixUdpRecvQ */
	1, 3, 6, 1, 4, 1, 4, 5, 4, 0, /* unixIpRoutingTable */
	1, 3, 6, 1, 4, 1, 4, 5, 4, 1, 0, /* unixIpRouteEntry */
	1, 3, 6, 1, 4, 1, 4, 5, 4, 1, 1, 0, /* unixIpRouteFlags */
	1, 3, 6, 1, 4, 1, 4, 5, 4, 1, 2, 0, /* unixIpRouteRefCnt */
	1, 3, 6, 1, 4, 1, 4, 5, 4, 1, 3, 0, /* unixIpRouteUses */
	1, 3, 6, 1, 4, 1, 4, 5, 5, 0, /* unixRouteBadRedirects */
	1, 3, 6, 1, 4, 1, 4, 5, 6, 0, /* unixRouteCreatedByRedirects */
	1, 3, 6, 1, 4, 1, 4, 5, 7, 0, /* unixRouteModifiedByRedirects */
	1, 3, 6, 1, 4, 1, 4, 5, 8, 0, /* unixRouteLookupFails */
	1, 3, 6, 1, 4, 1, 4, 5, 9, 0, /* unixRouteWildcardUses */
	1, 3, 6, 1, 4, 1, 4, 5, 10, 0, /* unixClnpRoutingTable */
	1, 3, 6, 1, 4, 1, 4, 5, 10, 1, 0, /* unixClnpRouteEntry */
	1, 3, 6, 1, 4, 1, 4, 5, 10, 1, 1, 0, /* unixClnpRouteFlags */
	1, 3, 6, 1, 4, 1, 4, 5, 10, 1, 2, 0, /* unixClnpRouteRefCnt */
	1, 3, 6, 1, 4, 1, 4, 5, 10, 1, 3, 0, /* unixClnpRouteUses */
	1, 3, 6, 1, 4, 1, 4, 6, 0, /* print */
	1, 3, 6, 1, 4, 1, 4, 6, 1, 0, /* printQTable */
	1, 3, 6, 1, 4, 1, 4, 6, 1, 1, 0, /* printQEntry */
	1, 3, 6, 1, 4, 1, 4, 6, 1, 1, 1, 0, /* printQName */
	1, 3, 6, 1, 4, 1, 4, 6, 1, 1, 2, 0, /* printQStatus */
	1, 3, 6, 1, 4, 1, 4, 6, 1, 1, 3, 0, /* printQDisplay */
	1, 3, 6, 1, 4, 1, 4, 6, 1, 1, 4, 0, /* printQEntries */
	1, 3, 6, 1, 4, 1, 4, 6, 1, 1, 5, 0, /* printQAction */
	1, 3, 6, 1, 4, 1, 4, 6, 2, 0, /* printJTable */
	1, 3, 6, 1, 4, 1, 4, 6, 2, 1, 0, /* printJEntry */
	1, 3, 6, 1, 4, 1, 4, 6, 2, 1, 1, 0, /* printJRank */
	1, 3, 6, 1, 4, 1, 4, 6, 2, 1, 2, 0, /* printJName */
	1, 3, 6, 1, 4, 1, 4, 6, 2, 1, 3, 0, /* printJOwner */
	1, 3, 6, 1, 4, 1, 4, 6, 2, 1, 4, 0, /* printJDescription */
	1, 3, 6, 1, 4, 1, 4, 6, 2, 1, 5, 0, /* printJSize */
	1, 3, 6, 1, 4, 1, 4, 6, 2, 1, 6, 0, /* printJAction */
	1, 3, 6, 1, 4, 1, 4, 7, 0, /* users */
	1, 3, 6, 1, 4, 1, 4, 7, 1, 0, /* userTable */
	1, 3, 6, 1, 4, 1, 4, 7, 1, 1, 0, /* userEntry */
	1, 3, 6, 1, 4, 1, 4, 7, 1, 1, 1, 0, /* userName */
	1, 3, 6, 1, 4, 1, 4, 7, 1, 1, 2, 0, /* userPasswd */
	1, 3, 6, 1, 4, 1, 4, 7, 1, 1, 3, 0, /* userID */
	1, 3, 6, 1, 4, 1, 4, 7, 1, 1, 4, 0, /* userGroup */
	1, 3, 6, 1, 4, 1, 4, 7, 1, 1, 5, 0, /* userQuota */
	1, 3, 6, 1, 4, 1, 4, 7, 1, 1, 6, 0, /* userComment */
	1, 3, 6, 1, 4, 1, 4, 7, 1, 1, 7, 0, /* userFullName */
	1, 3, 6, 1, 4, 1, 4, 7, 1, 1, 8, 0, /* userHome */
	1, 3, 6, 1, 4, 1, 4, 7, 1, 1, 9, 0, /* userShell */
	1, 3, 6, 1, 4, 1, 4, 7, 1, 1, 10, 0, /* userStatus */
	1, 3, 6, 1, 4, 1, 4, 7, 2, 0, /* groupTable */
	1, 3, 6, 1, 4, 1, 4, 7, 2, 1, 0, /* groupEntry */
	1, 3, 6, 1, 4, 1, 4, 7, 2, 1, 1, 0, /* groupName */
	1, 3, 6, 1, 4, 1, 4, 7, 2, 1, 2, 0, /* groupPasswd */
	1, 3, 6, 1, 4, 1, 4, 7, 2, 1, 3, 0, /* groupID */
	1, 3, 6, 1, 4, 1, 4, 7, 2, 1, 4, 0, /* groupStatus */
	1, 3, 6, 1, 4, 1, 4, 7, 3, 0, /* grUserTable */
	1, 3, 6, 1, 4, 1, 4, 7, 3, 1, 0, /* grUserEntry */
	1, 3, 6, 1, 4, 1, 4, 7, 3, 1, 1, 0, /* grUserStatus */
	1, 3, 6, 1, 4, 1, 4, 8, 0, /* unixFs */
	1, 3, 6, 1, 4, 1, 4, 8, 1, 0, /* fsTable */
	1, 3, 6, 1, 4, 1, 4, 8, 1, 1, 0, /* fsTableEntry */
	1, 3, 6, 1, 4, 1, 4, 8, 1, 1, 1, 0, /* fsIdentifier */
	1, 3, 6, 1, 4, 1, 4, 8, 1, 1, 2, 0, /* fsName */
	1, 3, 6, 1, 4, 1, 4, 8, 1, 1, 3, 0, /* fsMountPoint */
	1, 3, 6, 1, 4, 1, 4, 8, 1, 1, 4, 0, /* fsMountType */
	1, 3, 6, 1, 4, 1, 4, 8, 1, 1, 5, 0, /* fsMountOptions */
	1, 3, 6, 1, 4, 1, 4, 8, 1, 1, 6, 0, /* fsBlockSize */
	1, 3, 6, 1, 4, 1, 4, 8, 1, 1, 7, 0, /* fsBlockCount */
	1, 3, 6, 1, 4, 1, 4, 8, 1, 1, 8, 0, /* fsBlocksFree */
	1, 3, 6, 1, 4, 1, 4, 8, 1, 1, 9, 0, /* fsBlocksAvailable */
	1, 3, 6, 1, 4, 1, 4, 8, 1, 1, 10, 0, /* fsInodeCount */
	1, 3, 6, 1, 4, 1, 4, 8, 1, 1, 11, 0, /* fsInodesAvailable */
	1, 3, 6, 1, 4, 1, 99, 0, /* snmpResearch */
	1, 3, 6, 1, 4, 1, 99, 3, 0, /* functions */
	1, 3, 6, 1, 4, 1, 99, 3, 1, 0, /* functAdd */
	1, 3, 6, 1, 4, 1, 99, 3, 2, 0, /* functSub */
	1, 3, 6, 1, 4, 1, 99, 3, 3, 0, /* functMul */
	1, 3, 6, 1, 4, 1, 99, 3, 4, 0, /* functDiv */
	1, 3, 6, 1, 4, 1, 99, 3, 5, 0, /* functMod */
	1, 3, 6, 1, 4, 1, 99, 3, 6, 0, /* functNeg */
	1, 3, 6, 1, 4, 1, 99, 3, 7, 0, /* functXch */
	1, 3, 6, 1, 4, 1, 99, 3, 8, 0, /* functClr */
	1, 3, 6, 1, 4, 1, 99, 3, 9, 0, /* functDup */
	1, 3, 6, 1, 4, 1, 99, 3, 10, 0, /* functPop */
	1, 3, 6, 1, 4, 1, 99, 3, 11, 0, /* functAbs */
	1, 3, 6, 1, 4, 1, 99, 3, 12, 0, /* functSgn */
	1, 3, 6, 1, 4, 1, 99, 3, 13, 0, /* functMin */
	1, 3, 6, 1, 4, 1, 99, 3, 14, 0, /* functAnd */
	1, 3, 6, 1, 4, 1, 99, 3, 15, 0, /* functOr */
	1, 3, 6, 1, 4, 1, 99, 3, 16, 0, /* functNot */
	1, 3, 6, 1, 4, 1, 99, 4, 0, /* expressions */
	1, 3, 6, 1, 4, 1, 99, 4, 1, 0, /* exprNumber */
	1, 3, 6, 1, 4, 1, 99, 4, 2, 0, /* exprTable */
	1, 3, 6, 1, 4, 1, 99, 4, 2, 1, 0, /* exprEntry */
	1, 3, 6, 1, 4, 1, 99, 4, 2, 1, 1, 0, /* exprIndex */
	1, 3, 6, 1, 4, 1, 99, 4, 2, 1, 2, 0, /* exprEval */
	1, 3, 6, 1, 4, 1, 99, 4, 2, 1, 3, 0, /* exprExpr */
	1, 3, 6, 1, 4, 1, 99, 4, 2, 1, 4, 0, /* exprStatus */
	1, 3, 6, 1, 4, 1, 99, 4, 2, 1, 5, 0, /* exprHints */
	1, 3, 6, 1, 4, 1, 453, 0, /* isode-consortium */
	1, 3, 6, 1, 4, 1, 453, 2, 0, /* application-mib */
	1, 3, 6, 1, 4, 1, 453, 2, 1, 0, /* application */
	1, 3, 6, 1, 4, 1, 453, 2, 1, 1, 0, /* distinguishedName */
	1, 3, 6, 1, 4, 1, 453, 2, 1, 2, 0, /* applicationStatus */
	1, 3, 6, 1, 4, 1, 453, 2, 1, 3, 0, /* applicationUptime */
	1, 3, 6, 1, 4, 1, 453, 2, 1, 4, 0, /* inboundAssociations */
	1, 3, 6, 1, 4, 1, 453, 2, 1, 5, 0, /* outboundAssociations */
	1, 3, 6, 1, 4, 1, 453, 2, 2, 0, /* mta */
	1, 3, 6, 1, 4, 1, 453, 2, 2, 1, 0, /* numberMessages */
	1, 3, 6, 1, 4, 1, 453, 2, 2, 2, 0, /* volumeMessages */
	1, 3, 6, 1, 4, 1, 453, 2, 2, 3, 0, /* submittedMessages */
	1, 3, 6, 1, 4, 1, 453, 2, 2, 4, 0, /* deliveredMessages */
	1, 3, 6, 1, 4, 1, 453, 2, 3, 0, /* dsa */
	1, 3, 6, 1, 4, 1, 453, 2, 3, 1, 0, /* operations */
	1, 3, 6, 1, 4, 1, 453, 2, 3, 2, 0, /* masterEntries */
	1, 3, 6, 1, 4, 1, 453, 2, 3, 3, 0, /* copyEntries */
	1, 3, 6, 1, 4, 1, 453, 2, 3, 4, 0, /* cacheEntries */
	2, 0, /* joint-iso-ccitt */
};

static OIDentifier _names[] = {
	{ 1, &_elems[0] },
	{ 2, &_elems[2] },
	{ 1, &_elems[5] },
	{ 4, &_elems[7] },
	{ 5, &_elems[12] },
	{ 5, &_elems[18] },
	{ 6, &_elems[24] },
	{ 7, &_elems[31] },
	{ 8, &_elems[39] },
	{ 8, &_elems[48] },
	{ 8, &_elems[57] },
	{ 8, &_elems[66] },
	{ 8, &_elems[75] },
	{ 8, &_elems[84] },
	{ 8, &_elems[93] },
	{ 7, &_elems[102] },
	{ 8, &_elems[110] },
	{ 8, &_elems[119] },
	{ 9, &_elems[128] },
	{ 10, &_elems[138] },
	{ 10, &_elems[149] },
	{ 10, &_elems[160] },
	{ 10, &_elems[171] },
	{ 10, &_elems[182] },
	{ 10, &_elems[193] },
	{ 10, &_elems[204] },
	{ 10, &_elems[215] },
	{ 10, &_elems[226] },
	{ 10, &_elems[237] },
	{ 10, &_elems[248] },
	{ 10, &_elems[259] },
	{ 10, &_elems[270] },
	{ 10, &_elems[281] },
	{ 10, &_elems[292] },
	{ 10, &_elems[303] },
	{ 10, &_elems[314] },
	{ 10, &_elems[325] },
	{ 10, &_elems[336] },
	{ 10, &_elems[347] },
	{ 10, &_elems[358] },
	{ 10, &_elems[369] },
	{ 7, &_elems[380] },
	{ 8, &_elems[388] },
	{ 9, &_elems[397] },
	{ 10, &_elems[407] },
	{ 10, &_elems[418] },
	{ 10, &_elems[429] },
	{ 7, &_elems[440] },
	{ 8, &_elems[448] },
	{ 8, &_elems[457] },
	{ 8, &_elems[466] },
	{ 8, &_elems[475] },
	{ 8, &_elems[484] },
	{ 8, &_elems[493] },
	{ 8, &_elems[502] },
	{ 8, &_elems[511] },
	{ 8, &_elems[520] },
	{ 8, &_elems[529] },
	{ 8, &_elems[538] },
	{ 8, &_elems[547] },
	{ 8, &_elems[556] },
	{ 8, &_elems[565] },
	{ 8, &_elems[574] },
	{ 8, &_elems[583] },
	{ 8, &_elems[592] },
	{ 8, &_elems[601] },
	{ 8, &_elems[610] },
	{ 8, &_elems[619] },
	{ 9, &_elems[628] },
	{ 10, &_elems[638] },
	{ 10, &_elems[649] },
	{ 10, &_elems[660] },
	{ 10, &_elems[671] },
	{ 10, &_elems[682] },
	{ 8, &_elems[693] },
	{ 9, &_elems[702] },
	{ 10, &_elems[712] },
	{ 10, &_elems[723] },
	{ 10, &_elems[734] },
	{ 10, &_elems[745] },
	{ 10, &_elems[756] },
	{ 10, &_elems[767] },
	{ 10, &_elems[778] },
	{ 10, &_elems[789] },
	{ 10, &_elems[800] },
	{ 10, &_elems[811] },
	{ 10, &_elems[822] },
	{ 10, &_elems[833] },
	{ 10, &_elems[844] },
	{ 8, &_elems[855] },
	{ 9, &_elems[864] },
	{ 10, &_elems[874] },
	{ 10, &_elems[885] },
	{ 10, &_elems[896] },
	{ 10, &_elems[907] },
	{ 8, &_elems[918] },
	{ 7, &_elems[927] },
	{ 8, &_elems[935] },
	{ 8, &_elems[944] },
	{ 8, &_elems[953] },
	{ 8, &_elems[962] },
	{ 8, &_elems[971] },
	{ 8, &_elems[980] },
	{ 8, &_elems[989] },
	{ 8, &_elems[998] },
	{ 8, &_elems[1007] },
	{ 8, &_elems[1016] },
	{ 8, &_elems[1025] },
	{ 8, &_elems[1034] },
	{ 8, &_elems[1043] },
	{ 8, &_elems[1052] },
	{ 8, &_elems[1061] },
	{ 8, &_elems[1070] },
	{ 8, &_elems[1079] },
	{ 8, &_elems[1088] },
	{ 8, &_elems[1097] },
	{ 8, &_elems[1106] },
	{ 8, &_elems[1115] },
	{ 8, &_elems[1124] },
	{ 8, &_elems[1133] },
	{ 8, &_elems[1142] },
	{ 8, &_elems[1151] },
	{ 8, &_elems[1160] },
	{ 7, &_elems[1169] },
	{ 8, &_elems[1177] },
	{ 8, &_elems[1186] },
	{ 8, &_elems[1195] },
	{ 8, &_elems[1204] },
	{ 8, &_elems[1213] },
	{ 8, &_elems[1222] },
	{ 8, &_elems[1231] },
	{ 8, &_elems[1240] },
	{ 8, &_elems[1249] },
	{ 8, &_elems[1258] },
	{ 8, &_elems[1267] },
	{ 8, &_elems[1276] },
	{ 8, &_elems[1285] },
	{ 9, &_elems[1294] },
	{ 10, &_elems[1304] },
	{ 10, &_elems[1315] },
	{ 10, &_elems[1326] },
	{ 10, &_elems[1337] },
	{ 10, &_elems[1348] },
	{ 8, &_elems[1359] },
	{ 8, &_elems[1368] },
	{ 7, &_elems[1377] },
	{ 8, &_elems[1385] },
	{ 8, &_elems[1394] },
	{ 8, &_elems[1403] },
	{ 8, &_elems[1412] },
	{ 8, &_elems[1421] },
	{ 9, &_elems[1430] },
	{ 10, &_elems[1440] },
	{ 10, &_elems[1451] },
	{ 7, &_elems[1462] },
	{ 8, &_elems[1470] },
	{ 8, &_elems[1479] },
	{ 8, &_elems[1488] },
	{ 8, &_elems[1497] },
	{ 8, &_elems[1506] },
	{ 9, &_elems[1515] },
	{ 10, &_elems[1525] },
	{ 10, &_elems[1536] },
	{ 10, &_elems[1547] },
	{ 10, &_elems[1558] },
	{ 10, &_elems[1569] },
	{ 10, &_elems[1580] },
	{ 10, &_elems[1591] },
	{ 10, &_elems[1602] },
	{ 10, &_elems[1613] },
	{ 10, &_elems[1624] },
	{ 10, &_elems[1635] },
	{ 10, &_elems[1646] },
	{ 10, &_elems[1657] },
	{ 10, &_elems[1668] },
	{ 10, &_elems[1679] },
	{ 8, &_elems[1690] },
	{ 7, &_elems[1699] },
	{ 8, &_elems[1707] },
	{ 9, &_elems[1716] },
	{ 10, &_elems[1726] },
	{ 11, &_elems[1737] },
	{ 11, &_elems[1749] },
	{ 11, &_elems[1761] },
	{ 11, &_elems[1773] },
	{ 11, &_elems[1785] },
	{ 11, &_elems[1797] },
	{ 11, &_elems[1809] },
	{ 11, &_elems[1821] },
	{ 11, &_elems[1833] },
	{ 11, &_elems[1845] },
	{ 11, &_elems[1857] },
	{ 9, &_elems[1869] },
	{ 10, &_elems[1879] },
	{ 11, &_elems[1890] },
	{ 11, &_elems[1902] },
	{ 11, &_elems[1914] },
	{ 11, &_elems[1926] },
	{ 11, &_elems[1938] },
	{ 11, &_elems[1950] },
	{ 11, &_elems[1962] },
	{ 11, &_elems[1974] },
	{ 11, &_elems[1986] },
	{ 9, &_elems[1998] },
	{ 10, &_elems[2008] },
	{ 11, &_elems[2019] },
	{ 11, &_elems[2031] },
	{ 11, &_elems[2043] },
	{ 11, &_elems[2055] },
	{ 11, &_elems[2067] },
	{ 11, &_elems[2079] },
	{ 11, &_elems[2091] },
	{ 11, &_elems[2103] },
	{ 9, &_elems[2115] },
	{ 10, &_elems[2125] },
	{ 11, &_elems[2136] },
	{ 11, &_elems[2148] },
	{ 11, &_elems[2160] },
	{ 11, &_elems[2172] },
	{ 11, &_elems[2184] },
	{ 11, &_elems[2196] },
	{ 11, &_elems[2208] },
	{ 11, &_elems[2220] },
	{ 9, &_elems[2232] },
	{ 10, &_elems[2242] },
	{ 11, &_elems[2253] },
	{ 11, &_elems[2265] },
	{ 11, &_elems[2277] },
	{ 8, &_elems[2289] },
	{ 9, &_elems[2298] },
	{ 10, &_elems[2308] },
	{ 11, &_elems[2319] },
	{ 11, &_elems[2331] },
	{ 11, &_elems[2343] },
	{ 11, &_elems[2355] },
	{ 11, &_elems[2367] },
	{ 11, &_elems[2379] },
	{ 11, &_elems[2391] },
	{ 11, &_elems[2403] },
	{ 11, &_elems[2415] },
	{ 11, &_elems[2427] },
	{ 11, &_elems[2439] },
	{ 9, &_elems[2451] },
	{ 10, &_elems[2461] },
	{ 11, &_elems[2472] },
	{ 11, &_elems[2484] },
	{ 11, &_elems[2496] },
	{ 11, &_elems[2508] },
	{ 11, &_elems[2520] },
	{ 11, &_elems[2532] },
	{ 11, &_elems[2544] },
	{ 11, &_elems[2556] },
	{ 11, &_elems[2568] },
	{ 9, &_elems[2580] },
	{ 10, &_elems[2590] },
	{ 11, &_elems[2601] },
	{ 11, &_elems[2613] },
	{ 11, &_elems[2625] },
	{ 11, &_elems[2637] },
	{ 11, &_elems[2649] },
	{ 11, &_elems[2661] },
	{ 11, &_elems[2673] },
	{ 11, &_elems[2685] },
	{ 9, &_elems[2697] },
	{ 10, &_elems[2707] },
	{ 11, &_elems[2718] },
	{ 11, &_elems[2730] },
	{ 11, &_elems[2742] },
	{ 11, &_elems[2754] },
	{ 11, &_elems[2766] },
	{ 11, &_elems[2778] },
	{ 11, &_elems[2790] },
	{ 11, &_elems[2802] },
	{ 7, &_elems[2814] },
	{ 8, &_elems[2822] },
	{ 8, &_elems[2831] },
	{ 8, &_elems[2840] },
	{ 8, &_elems[2849] },
	{ 8, &_elems[2858] },
	{ 8, &_elems[2867] },
	{ 8, &_elems[2876] },
	{ 8, &_elems[2885] },
	{ 8, &_elems[2894] },
	{ 8, &_elems[2903] },
	{ 8, &_elems[2912] },
	{ 8, &_elems[2921] },
	{ 8, &_elems[2930] },
	{ 8, &_elems[2939] },
	{ 8, &_elems[2948] },
	{ 8, &_elems[2957] },
	{ 8, &_elems[2966] },
	{ 8, &_elems[2975] },
	{ 8, &_elems[2984] },
	{ 8, &_elems[2993] },
	{ 8, &_elems[3002] },
	{ 8, &_elems[3011] },
	{ 8, &_elems[3020] },
	{ 8, &_elems[3029] },
	{ 8, &_elems[3038] },
	{ 8, &_elems[3047] },
	{ 8, &_elems[3056] },
	{ 8, &_elems[3065] },
	{ 7, &_elems[3074] },
	{ 8, &_elems[3082] },
	{ 9, &_elems[3091] },
	{ 10, &_elems[3101] },
	{ 10, &_elems[3112] },
	{ 10, &_elems[3123] },
	{ 10, &_elems[3134] },
	{ 10, &_elems[3145] },
	{ 10, &_elems[3156] },
	{ 10, &_elems[3167] },
	{ 10, &_elems[3178] },
	{ 8, &_elems[3189] },
	{ 9, &_elems[3198] },
	{ 10, &_elems[3208] },
	{ 10, &_elems[3219] },
	{ 10, &_elems[3230] },
	{ 10, &_elems[3241] },
	{ 10, &_elems[3252] },
	{ 10, &_elems[3263] },
	{ 8, &_elems[3274] },
	{ 9, &_elems[3283] },
	{ 10, &_elems[3293] },
	{ 10, &_elems[3304] },
	{ 10, &_elems[3315] },
	{ 8, &_elems[3326] },
	{ 9, &_elems[3335] },
	{ 7, &_elems[3345] },
	{ 8, &_elems[3353] },
	{ 9, &_elems[3362] },
	{ 10, &_elems[3372] },
	{ 11, &_elems[3383] },
	{ 11, &_elems[3395] },
	{ 11, &_elems[3407] },
	{ 11, &_elems[3419] },
	{ 11, &_elems[3431] },
	{ 11, &_elems[3443] },
	{ 11, &_elems[3455] },
	{ 11, &_elems[3467] },
	{ 11, &_elems[3479] },
	{ 11, &_elems[3491] },
	{ 11, &_elems[3503] },
	{ 8, &_elems[3515] },
	{ 9, &_elems[3524] },
	{ 10, &_elems[3534] },
	{ 11, &_elems[3545] },
	{ 11, &_elems[3557] },
	{ 11, &_elems[3569] },
	{ 8, &_elems[3581] },
	{ 9, &_elems[3590] },
	{ 10, &_elems[3600] },
	{ 11, &_elems[3611] },
	{ 11, &_elems[3623] },
	{ 11, &_elems[3635] },
	{ 11, &_elems[3647] },
	{ 11, &_elems[3659] },
	{ 11, &_elems[3671] },
	{ 11, &_elems[3683] },
	{ 11, &_elems[3695] },
	{ 11, &_elems[3707] },
	{ 11, &_elems[3719] },
	{ 11, &_elems[3731] },
	{ 8, &_elems[3743] },
	{ 9, &_elems[3752] },
	{ 9, &_elems[3762] },
	{ 9, &_elems[3772] },
	{ 9, &_elems[3782] },
	{ 9, &_elems[3792] },
	{ 9, &_elems[3802] },
	{ 9, &_elems[3812] },
	{ 9, &_elems[3822] },
	{ 9, &_elems[3832] },
	{ 9, &_elems[3842] },
	{ 9, &_elems[3852] },
	{ 9, &_elems[3862] },
	{ 9, &_elems[3872] },
	{ 9, &_elems[3882] },
	{ 8, &_elems[3892] },
	{ 9, &_elems[3901] },
	{ 10, &_elems[3911] },
	{ 11, &_elems[3922] },
	{ 11, &_elems[3934] },
	{ 11, &_elems[3946] },
	{ 11, &_elems[3958] },
	{ 11, &_elems[3970] },
	{ 11, &_elems[3982] },
	{ 11, &_elems[3994] },
	{ 8, &_elems[4006] },
	{ 9, &_elems[4015] },
	{ 10, &_elems[4025] },
	{ 11, &_elems[4036] },
	{ 11, &_elems[4048] },
	{ 11, &_elems[4060] },
	{ 11, &_elems[4072] },
	{ 11, &_elems[4084] },
	{ 11, &_elems[4096] },
	{ 11, &_elems[4108] },
	{ 11, &_elems[4120] },
	{ 11, &_elems[4132] },
	{ 8, &_elems[4144] },
	{ 9, &_elems[4153] },
	{ 10, &_elems[4163] },
	{ 11, &_elems[4174] },
	{ 11, &_elems[4186] },
	{ 11, &_elems[4198] },
	{ 11, &_elems[4210] },
	{ 11, &_elems[4222] },
	{ 8, &_elems[4234] },
	{ 9, &_elems[4243] },
	{ 10, &_elems[4253] },
	{ 11, &_elems[4264] },
	{ 11, &_elems[4276] },
	{ 11, &_elems[4288] },
	{ 11, &_elems[4300] },
	{ 11, &_elems[4312] },
	{ 8, &_elems[4324] },
	{ 9, &_elems[4333] },
	{ 9, &_elems[4343] },
	{ 7, &_elems[4353] },
	{ 8, &_elems[4361] },
	{ 9, &_elems[4370] },
	{ 9, &_elems[4380] },
	{ 9, &_elems[4390] },
	{ 9, &_elems[4400] },
	{ 9, &_elems[4410] },
	{ 9, &_elems[4420] },
	{ 9, &_elems[4430] },
	{ 9, &_elems[4440] },
	{ 9, &_elems[4450] },
	{ 9, &_elems[4460] },
	{ 8, &_elems[4470] },
	{ 9, &_elems[4479] },
	{ 10, &_elems[4489] },
	{ 10, &_elems[4500] },
	{ 10, &_elems[4511] },
	{ 10, &_elems[4522] },
	{ 10, &_elems[4533] },
	{ 10, &_elems[4544] },
	{ 10, &_elems[4555] },
	{ 10, &_elems[4566] },
	{ 8, &_elems[4577] },
	{ 9, &_elems[4586] },
	{ 10, &_elems[4596] },
	{ 10, &_elems[4607] },
	{ 10, &_elems[4618] },
	{ 10, &_elems[4629] },
	{ 8, &_elems[4640] },
	{ 9, &_elems[4649] },
	{ 10, &_elems[4659] },
	{ 10, &_elems[4670] },
	{ 10, &_elems[4681] },
	{ 10, &_elems[4692] },
	{ 10, &_elems[4703] },
	{ 10, &_elems[4714] },
	{ 10, &_elems[4725] },
	{ 10, &_elems[4736] },
	{ 8, &_elems[4747] },
	{ 9, &_elems[4756] },
	{ 10, &_elems[4766] },
	{ 10, &_elems[4777] },
	{ 10, &_elems[4788] },
	{ 10, &_elems[4799] },
	{ 8, &_elems[4810] },
	{ 9, &_elems[4819] },
	{ 10, &_elems[4829] },
	{ 10, &_elems[4840] },
	{ 10, &_elems[4851] },
	{ 10, &_elems[4862] },
	{ 8, &_elems[4873] },
	{ 9, &_elems[4882] },
	{ 10, &_elems[4892] },
	{ 10, &_elems[4903] },
	{ 10, &_elems[4914] },
	{ 10, &_elems[4925] },
	{ 10, &_elems[4936] },
	{ 10, &_elems[4947] },
	{ 10, &_elems[4958] },
	{ 10, &_elems[4969] },
	{ 10, &_elems[4980] },
	{ 10, &_elems[4991] },
	{ 10, &_elems[5002] },
	{ 10, &_elems[5013] },
	{ 10, &_elems[5024] },
	{ 10, &_elems[5035] },
	{ 10, &_elems[5046] },
	{ 10, &_elems[5057] },
	{ 8, &_elems[5068] },
	{ 9, &_elems[5077] },
	{ 10, &_elems[5087] },
	{ 10, &_elems[5098] },
	{ 10, &_elems[5109] },
	{ 10, &_elems[5120] },
	{ 10, &_elems[5131] },
	{ 8, &_elems[5142] },
	{ 9, &_elems[5151] },
	{ 10, &_elems[5161] },
	{ 10, &_elems[5172] },
	{ 10, &_elems[5183] },
	{ 10, &_elems[5194] },
	{ 10, &_elems[5205] },
	{ 10, &_elems[5216] },
	{ 10, &_elems[5227] },
	{ 10, &_elems[5238] },
	{ 10, &_elems[5249] },
	{ 10, &_elems[5260] },
	{ 8, &_elems[5271] },
	{ 9, &_elems[5280] },
	{ 10, &_elems[5290] },
	{ 10, &_elems[5301] },
	{ 10, &_elems[5312] },
	{ 10, &_elems[5323] },
	{ 10, &_elems[5334] },
	{ 10, &_elems[5345] },
	{ 10, &_elems[5356] },
	{ 10, &_elems[5367] },
	{ 10, &_elems[5378] },
	{ 8, &_elems[5389] },
	{ 9, &_elems[5398] },
	{ 10, &_elems[5408] },
	{ 10, &_elems[5419] },
	{ 10, &_elems[5430] },
	{ 10, &_elems[5441] },
	{ 10, &_elems[5452] },
	{ 10, &_elems[5463] },
	{ 10, &_elems[5474] },
	{ 7, &_elems[5485] },
	{ 8, &_elems[5493] },
	{ 8, &_elems[5502] },
	{ 8, &_elems[5511] },
	{ 9, &_elems[5520] },
	{ 10, &_elems[5530] },
	{ 10, &_elems[5541] },
	{ 10, &_elems[5552] },
	{ 10, &_elems[5563] },
	{ 10, &_elems[5574] },
	{ 10, &_elems[5585] },
	{ 10, &_elems[5596] },
	{ 10, &_elems[5607] },
	{ 10, &_elems[5618] },
	{ 10, &_elems[5629] },
	{ 10, &_elems[5640] },
	{ 10, &_elems[5651] },
	{ 10, &_elems[5662] },
	{ 10, &_elems[5673] },
	{ 8, &_elems[5684] },
	{ 8, &_elems[5693] },
	{ 9, &_elems[5702] },
	{ 10, &_elems[5712] },
	{ 10, &_elems[5723] },
	{ 10, &_elems[5734] },
	{ 10, &_elems[5745] },
	{ 10, &_elems[5756] },
	{ 10, &_elems[5767] },
	{ 7, &_elems[5778] },
	{ 8, &_elems[5786] },
	{ 9, &_elems[5795] },
	{ 10, &_elems[5805] },
	{ 11, &_elems[5816] },
	{ 11, &_elems[5828] },
	{ 11, &_elems[5840] },
	{ 11, &_elems[5852] },
	{ 11, &_elems[5864] },
	{ 11, &_elems[5876] },
	{ 11, &_elems[5888] },
	{ 11, &_elems[5900] },
	{ 11, &_elems[5912] },
	{ 11, &_elems[5924] },
	{ 11, &_elems[5936] },
	{ 11, &_elems[5948] },
	{ 11, &_elems[5960] },
	{ 11, &_elems[5972] },
	{ 11, &_elems[5984] },
	{ 11, &_elems[5996] },
	{ 11, &_elems[6008] },
	{ 11, &_elems[6020] },
	{ 11, &_elems[6032] },
	{ 11, &_elems[6044] },
	{ 11, &_elems[6056] },
	{ 8, &_elems[6068] },
	{ 9, &_elems[6077] },
	{ 10, &_elems[6087] },
	{ 11, &_elems[6098] },
	{ 11, &_elems[6110] },
	{ 11, &_elems[6122] },
	{ 11, &_elems[6134] },
	{ 11, &_elems[6146] },
	{ 11, &_elems[6158] },
	{ 11, &_elems[6170] },
	{ 9, &_elems[6182] },
	{ 10, &_elems[6192] },
	{ 11, &_elems[6203] },
	{ 11, &_elems[6215] },
	{ 11, &_elems[6227] },
	{ 11, &_elems[6239] },
	{ 11, &_elems[6251] },
	{ 11, &_elems[6263] },
	{ 11, &_elems[6275] },
	{ 11, &_elems[6287] },
	{ 11, &_elems[6299] },
	{ 11, &_elems[6311] },
	{ 11, &_elems[6323] },
	{ 11, &_elems[6335] },
	{ 11, &_elems[6347] },
	{ 11, &_elems[6359] },
	{ 11, &_elems[6371] },
	{ 8, &_elems[6383] },
	{ 9, &_elems[6392] },
	{ 10, &_elems[6402] },
	{ 11, &_elems[6413] },
	{ 11, &_elems[6425] },
	{ 11, &_elems[6437] },
	{ 11, &_elems[6449] },
	{ 11, &_elems[6461] },
	{ 11, &_elems[6473] },
	{ 11, &_elems[6485] },
	{ 11, &_elems[6497] },
	{ 11, &_elems[6509] },
	{ 11, &_elems[6521] },
	{ 11, &_elems[6533] },
	{ 11, &_elems[6545] },
	{ 8, &_elems[6557] },
	{ 9, &_elems[6566] },
	{ 10, &_elems[6576] },
	{ 11, &_elems[6587] },
	{ 11, &_elems[6599] },
	{ 11, &_elems[6611] },
	{ 11, &_elems[6623] },
	{ 11, &_elems[6635] },
	{ 11, &_elems[6647] },
	{ 9, &_elems[6659] },
	{ 10, &_elems[6669] },
	{ 11, &_elems[6680] },
	{ 11, &_elems[6692] },
	{ 11, &_elems[6704] },
	{ 11, &_elems[6716] },
	{ 11, &_elems[6728] },
	{ 11, &_elems[6740] },
	{ 11, &_elems[6752] },
	{ 11, &_elems[6764] },
	{ 11, &_elems[6776] },
	{ 11, &_elems[6788] },
	{ 9, &_elems[6800] },
	{ 10, &_elems[6810] },
	{ 11, &_elems[6821] },
	{ 11, &_elems[6833] },
	{ 11, &_elems[6845] },
	{ 11, &_elems[6857] },
	{ 11, &_elems[6869] },
	{ 11, &_elems[6881] },
	{ 11, &_elems[6893] },
	{ 11, &_elems[6905] },
	{ 11, &_elems[6917] },
	{ 11, &_elems[6929] },
	{ 8, &_elems[6941] },
	{ 9, &_elems[6950] },
	{ 10, &_elems[6960] },
	{ 11, &_elems[6971] },
	{ 11, &_elems[6983] },
	{ 11, &_elems[6995] },
	{ 11, &_elems[7007] },
	{ 11, &_elems[7019] },
	{ 11, &_elems[7031] },
	{ 11, &_elems[7043] },
	{ 11, &_elems[7055] },
	{ 11, &_elems[7067] },
	{ 11, &_elems[7079] },
	{ 9, &_elems[7091] },
	{ 10, &_elems[7101] },
	{ 11, &_elems[7112] },
	{ 11, &_elems[7124] },
	{ 11, &_elems[7136] },
	{ 11, &_elems[7148] },
	{ 8, &_elems[7160] },
	{ 9, &_elems[7169] },
	{ 10, &_elems[7179] },
	{ 11, &_elems[7190] },
	{ 11, &_elems[7202] },
	{ 11, &_elems[7214] },
	{ 11, &_elems[7226] },
	{ 11, &_elems[7238] },
	{ 11, &_elems[7250] },
	{ 9, &_elems[7262] },
	{ 10, &_elems[7272] },
	{ 11, &_elems[7283] },
	{ 11, &_elems[7295] },
	{ 11, &_elems[7307] },
	{ 11, &_elems[7319] },
	{ 11, &_elems[7331] },
	{ 11, &_elems[7343] },
	{ 9, &_elems[7355] },
	{ 10, &_elems[7365] },
	{ 11, &_elems[7376] },
	{ 11, &_elems[7388] },
	{ 11, &_elems[7400] },
	{ 11, &_elems[7412] },
	{ 11, &_elems[7424] },
	{ 11, &_elems[7436] },
	{ 8, &_elems[7448] },
	{ 9, &_elems[7457] },
	{ 10, &_elems[7467] },
	{ 11, &_elems[7478] },
	{ 11, &_elems[7490] },
	{ 11, &_elems[7502] },
	{ 11, &_elems[7514] },
	{ 11, &_elems[7526] },
	{ 11, &_elems[7538] },
	{ 11, &_elems[7550] },
	{ 11, &_elems[7562] },
	{ 11, &_elems[7574] },
	{ 11, &_elems[7586] },
	{ 11, &_elems[7598] },
	{ 9, &_elems[7610] },
	{ 10, &_elems[7620] },
	{ 11, &_elems[7631] },
	{ 11, &_elems[7643] },
	{ 11, &_elems[7655] },
	{ 11, &_elems[7667] },
	{ 11, &_elems[7679] },
	{ 11, &_elems[7691] },
	{ 11, &_elems[7703] },
	{ 11, &_elems[7715] },
	{ 11, &_elems[7727] },
	{ 11, &_elems[7739] },
	{ 11, &_elems[7751] },
	{ 11, &_elems[7763] },
	{ 8, &_elems[7775] },
	{ 9, &_elems[7784] },
	{ 10, &_elems[7794] },
	{ 11, &_elems[7805] },
	{ 11, &_elems[7817] },
	{ 11, &_elems[7829] },
	{ 11, &_elems[7841] },
	{ 11, &_elems[7853] },
	{ 11, &_elems[7865] },
	{ 11, &_elems[7877] },
	{ 11, &_elems[7889] },
	{ 11, &_elems[7901] },
	{ 11, &_elems[7913] },
	{ 11, &_elems[7925] },
	{ 11, &_elems[7937] },
	{ 11, &_elems[7949] },
	{ 9, &_elems[7961] },
	{ 10, &_elems[7971] },
	{ 11, &_elems[7982] },
	{ 11, &_elems[7994] },
	{ 11, &_elems[8006] },
	{ 11, &_elems[8018] },
	{ 11, &_elems[8030] },
	{ 11, &_elems[8042] },
	{ 11, &_elems[8054] },
	{ 8, &_elems[8066] },
	{ 9, &_elems[8075] },
	{ 10, &_elems[8085] },
	{ 11, &_elems[8096] },
	{ 11, &_elems[8108] },
	{ 11, &_elems[8120] },
	{ 11, &_elems[8132] },
	{ 11, &_elems[8144] },
	{ 11, &_elems[8156] },
	{ 11, &_elems[8168] },
	{ 9, &_elems[8180] },
	{ 10, &_elems[8190] },
	{ 11, &_elems[8201] },
	{ 11, &_elems[8213] },
	{ 11, &_elems[8225] },
	{ 11, &_elems[8237] },
	{ 5, &_elems[8249] },
	{ 6, &_elems[8255] },
	{ 7, &_elems[8262] },
	{ 8, &_elems[8270] },
	{ 8, &_elems[8279] },
	{ 8, &_elems[8288] },
	{ 8, &_elems[8297] },
	{ 8, &_elems[8306] },
	{ 8, &_elems[8315] },
	{ 8, &_elems[8324] },
	{ 8, &_elems[8333] },
	{ 8, &_elems[8342] },
	{ 8, &_elems[8351] },
	{ 8, &_elems[8360] },
	{ 8, &_elems[8369] },
	{ 8, &_elems[8378] },
	{ 8, &_elems[8387] },
	{ 8, &_elems[8396] },
	{ 8, &_elems[8405] },
	{ 8, &_elems[8414] },
	{ 8, &_elems[8423] },
	{ 8, &_elems[8432] },
	{ 8, &_elems[8441] },
	{ 8, &_elems[8450] },
	{ 9, &_elems[8459] },
	{ 10, &_elems[8469] },
	{ 10, &_elems[8480] },
	{ 10, &_elems[8491] },
	{ 8, &_elems[8502] },
	{ 9, &_elems[8511] },
	{ 10, &_elems[8521] },
	{ 10, &_elems[8532] },
	{ 10, &_elems[8543] },
	{ 10, &_elems[8554] },
	{ 10, &_elems[8565] },
	{ 10, &_elems[8576] },
	{ 10, &_elems[8587] },
	{ 10, &_elems[8598] },
	{ 10, &_elems[8609] },
	{ 10, &_elems[8620] },
	{ 10, &_elems[8631] },
	{ 10, &_elems[8642] },
	{ 8, &_elems[8653] },
	{ 9, &_elems[8662] },
	{ 10, &_elems[8672] },
	{ 10, &_elems[8683] },
	{ 10, &_elems[8694] },
	{ 10, &_elems[8705] },
	{ 10, &_elems[8716] },
	{ 10, &_elems[8727] },
	{ 8, &_elems[8738] },
	{ 9, &_elems[8747] },
	{ 10, &_elems[8757] },
	{ 10, &_elems[8768] },
	{ 10, &_elems[8779] },
	{ 10, &_elems[8790] },
	{ 10, &_elems[8801] },
	{ 10, &_elems[8812] },
	{ 8, &_elems[8823] },
	{ 8, &_elems[8832] },
	{ 8, &_elems[8841] },
	{ 7, &_elems[8850] },
	{ 8, &_elems[8858] },
	{ 8, &_elems[8867] },
	{ 8, &_elems[8876] },
	{ 8, &_elems[8885] },
	{ 8, &_elems[8894] },
	{ 8, &_elems[8903] },
	{ 8, &_elems[8912] },
	{ 8, &_elems[8921] },
	{ 8, &_elems[8930] },
	{ 8, &_elems[8939] },
	{ 8, &_elems[8948] },
	{ 8, &_elems[8957] },
	{ 8, &_elems[8966] },
	{ 8, &_elems[8975] },
	{ 8, &_elems[8984] },
	{ 8, &_elems[8993] },
	{ 8, &_elems[9002] },
	{ 8, &_elems[9011] },
	{ 8, &_elems[9020] },
	{ 8, &_elems[9029] },
	{ 8, &_elems[9038] },
	{ 8, &_elems[9047] },
	{ 8, &_elems[9056] },
	{ 8, &_elems[9065] },
	{ 8, &_elems[9074] },
	{ 8, &_elems[9083] },
	{ 8, &_elems[9092] },
	{ 8, &_elems[9101] },
	{ 8, &_elems[9110] },
	{ 8, &_elems[9119] },
	{ 8, &_elems[9128] },
	{ 8, &_elems[9137] },
	{ 8, &_elems[9146] },
	{ 8, &_elems[9155] },
	{ 8, &_elems[9164] },
	{ 8, &_elems[9173] },
	{ 8, &_elems[9182] },
	{ 8, &_elems[9191] },
	{ 8, &_elems[9200] },
	{ 8, &_elems[9209] },
	{ 8, &_elems[9218] },
	{ 8, &_elems[9227] },
	{ 8, &_elems[9236] },
	{ 8, &_elems[9245] },
	{ 8, &_elems[9254] },
	{ 8, &_elems[9263] },
	{ 7, &_elems[9272] },
	{ 7, &_elems[9280] },
	{ 8, &_elems[9288] },
	{ 8, &_elems[9297] },
	{ 8, &_elems[9306] },
	{ 8, &_elems[9315] },
	{ 8, &_elems[9324] },
	{ 8, &_elems[9333] },
	{ 6, &_elems[9342] },
	{ 7, &_elems[9349] },
	{ 8, &_elems[9357] },
	{ 8, &_elems[9366] },
	{ 9, &_elems[9375] },
	{ 10, &_elems[9385] },
	{ 10, &_elems[9396] },
	{ 10, &_elems[9407] },
	{ 10, &_elems[9418] },
	{ 10, &_elems[9429] },
	{ 10, &_elems[9440] },
	{ 10, &_elems[9451] },
	{ 10, &_elems[9462] },
	{ 10, &_elems[9473] },
	{ 10, &_elems[9484] },
	{ 10, &_elems[9495] },
	{ 10, &_elems[9506] },
	{ 10, &_elems[9517] },
	{ 10, &_elems[9528] },
	{ 10, &_elems[9539] },
	{ 10, &_elems[9550] },
	{ 10, &_elems[9561] },
	{ 10, &_elems[9572] },
	{ 10, &_elems[9583] },
	{ 7, &_elems[9594] },
	{ 8, &_elems[9602] },
	{ 8, &_elems[9611] },
	{ 9, &_elems[9620] },
	{ 10, &_elems[9630] },
	{ 10, &_elems[9641] },
	{ 10, &_elems[9652] },
	{ 10, &_elems[9663] },
	{ 10, &_elems[9674] },
	{ 10, &_elems[9685] },
	{ 10, &_elems[9696] },
	{ 10, &_elems[9707] },
	{ 10, &_elems[9718] },
	{ 10, &_elems[9729] },
	{ 10, &_elems[9740] },
	{ 10, &_elems[9751] },
	{ 10, &_elems[9762] },
	{ 10, &_elems[9773] },
	{ 10, &_elems[9784] },
	{ 10, &_elems[9795] },
	{ 10, &_elems[9806] },
	{ 10, &_elems[9817] },
	{ 10, &_elems[9828] },
	{ 10, &_elems[9839] },
	{ 10, &_elems[9850] },
	{ 10, &_elems[9861] },
	{ 10, &_elems[9872] },
	{ 10, &_elems[9883] },
	{ 10, &_elems[9894] },
	{ 10, &_elems[9905] },
	{ 10, &_elems[9916] },
	{ 10, &_elems[9927] },
	{ 10, &_elems[9938] },
	{ 10, &_elems[9949] },
	{ 7, &_elems[9960] },
	{ 7, &_elems[9968] },
	{ 8, &_elems[9976] },
	{ 8, &_elems[9985] },
	{ 9, &_elems[9994] },
	{ 10, &_elems[10004] },
	{ 10, &_elems[10015] },
	{ 10, &_elems[10026] },
	{ 10, &_elems[10037] },
	{ 10, &_elems[10048] },
	{ 10, &_elems[10059] },
	{ 10, &_elems[10070] },
	{ 10, &_elems[10081] },
	{ 10, &_elems[10092] },
	{ 10, &_elems[10103] },
	{ 10, &_elems[10114] },
	{ 10, &_elems[10125] },
	{ 10, &_elems[10136] },
	{ 10, &_elems[10147] },
	{ 10, &_elems[10158] },
	{ 10, &_elems[10169] },
	{ 10, &_elems[10180] },
	{ 10, &_elems[10191] },
	{ 10, &_elems[10202] },
	{ 10, &_elems[10213] },
	{ 10, &_elems[10224] },
	{ 10, &_elems[10235] },
	{ 10, &_elems[10246] },
	{ 10, &_elems[10257] },
	{ 10, &_elems[10268] },
	{ 7, &_elems[10279] },
	{ 8, &_elems[10287] },
	{ 8, &_elems[10296] },
	{ 9, &_elems[10305] },
	{ 10, &_elems[10315] },
	{ 10, &_elems[10326] },
	{ 10, &_elems[10337] },
	{ 10, &_elems[10348] },
	{ 10, &_elems[10359] },
	{ 10, &_elems[10370] },
	{ 10, &_elems[10381] },
	{ 7, &_elems[10392] },
	{ 8, &_elems[10400] },
	{ 8, &_elems[10409] },
	{ 8, &_elems[10418] },
	{ 6, &_elems[10427] },
	{ 7, &_elems[10434] },
	{ 8, &_elems[10442] },
	{ 8, &_elems[10451] },
	{ 8, &_elems[10460] },
	{ 8, &_elems[10469] },
	{ 8, &_elems[10478] },
	{ 8, &_elems[10487] },
	{ 8, &_elems[10496] },
	{ 7, &_elems[10505] },
	{ 8, &_elems[10513] },
	{ 8, &_elems[10522] },
	{ 8, &_elems[10531] },
	{ 9, &_elems[10540] },
	{ 10, &_elems[10550] },
	{ 10, &_elems[10561] },
	{ 10, &_elems[10572] },
	{ 10, &_elems[10583] },
	{ 10, &_elems[10594] },
	{ 8, &_elems[10605] },
	{ 8, &_elems[10614] },
	{ 8, &_elems[10623] },
	{ 8, &_elems[10632] },
	{ 8, &_elems[10641] },
	{ 8, &_elems[10650] },
	{ 8, &_elems[10659] },
	{ 8, &_elems[10668] },
	{ 8, &_elems[10677] },
	{ 8, &_elems[10686] },
	{ 8, &_elems[10695] },
	{ 7, &_elems[10704] },
	{ 8, &_elems[10712] },
	{ 8, &_elems[10721] },
	{ 8, &_elems[10730] },
	{ 8, &_elems[10739] },
	{ 8, &_elems[10748] },
	{ 6, &_elems[10757] },
	{ 7, &_elems[10764] },
	{ 8, &_elems[10772] },
	{ 9, &_elems[10781] },
	{ 9, &_elems[10791] },
	{ 9, &_elems[10801] },
	{ 9, &_elems[10811] },
	{ 9, &_elems[10821] },
	{ 9, &_elems[10831] },
	{ 7, &_elems[10841] },
	{ 8, &_elems[10849] },
	{ 8, &_elems[10858] },
	{ 8, &_elems[10867] },
	{ 8, &_elems[10876] },
	{ 8, &_elems[10885] },
	{ 7, &_elems[10894] },
	{ 8, &_elems[10902] },
	{ 9, &_elems[10911] },
	{ 9, &_elems[10921] },
	{ 9, &_elems[10931] },
	{ 9, &_elems[10941] },
	{ 7, &_elems[10951] },
	{ 8, &_elems[10959] },
	{ 9, &_elems[10968] },
	{ 9, &_elems[10978] },
	{ 9, &_elems[10988] },
	{ 9, &_elems[10998] },
	{ 9, &_elems[11008] },
	{ 7, &_elems[11018] },
	{ 8, &_elems[11026] },
	{ 9, &_elems[11035] },
	{ 9, &_elems[11045] },
	{ 9, &_elems[11055] },
	{ 9, &_elems[11065] },
	{ 7, &_elems[11075] },
	{ 8, &_elems[11083] },
	{ 9, &_elems[11092] },
	{ 9, &_elems[11102] },
	{ 9, &_elems[11112] },
	{ 9, &_elems[11122] },
	{ 9, &_elems[11132] },
	{ 6, &_elems[11142] },
	{ 7, &_elems[11149] },
	{ 8, &_elems[11157] },
	{ 9, &_elems[11166] },
	{ 9, &_elems[11176] },
	{ 9, &_elems[11186] },
	{ 9, &_elems[11196] },
	{ 9, &_elems[11206] },
	{ 9, &_elems[11216] },
	{ 9, &_elems[11226] },
	{ 9, &_elems[11236] },
	{ 9, &_elems[11246] },
	{ 9, &_elems[11256] },
	{ 7, &_elems[11266] },
	{ 8, &_elems[11274] },
	{ 9, &_elems[11283] },
	{ 9, &_elems[11293] },
	{ 9, &_elems[11303] },
	{ 9, &_elems[11313] },
	{ 9, &_elems[11323] },
	{ 9, &_elems[11333] },
	{ 9, &_elems[11343] },
	{ 9, &_elems[11353] },
	{ 9, &_elems[11363] },
	{ 9, &_elems[11373] },
	{ 9, &_elems[11383] },
	{ 9, &_elems[11393] },
	{ 9, &_elems[11403] },
	{ 7, &_elems[11413] },
	{ 8, &_elems[11421] },
	{ 9, &_elems[11430] },
	{ 9, &_elems[11440] },
	{ 9, &_elems[11450] },
	{ 9, &_elems[11460] },
	{ 9, &_elems[11470] },
	{ 9, &_elems[11480] },
	{ 9, &_elems[11490] },
	{ 9, &_elems[11500] },
	{ 9, &_elems[11510] },
	{ 9, &_elems[11520] },
	{ 9, &_elems[11530] },
	{ 9, &_elems[11540] },
	{ 7, &_elems[11550] },
	{ 8, &_elems[11558] },
	{ 9, &_elems[11567] },
	{ 9, &_elems[11577] },
	{ 9, &_elems[11587] },
	{ 9, &_elems[11597] },
	{ 9, &_elems[11607] },
	{ 9, &_elems[11617] },
	{ 9, &_elems[11627] },
	{ 9, &_elems[11637] },
	{ 9, &_elems[11647] },
	{ 9, &_elems[11657] },
	{ 7, &_elems[11667] },
	{ 8, &_elems[11675] },
	{ 9, &_elems[11684] },
	{ 10, &_elems[11694] },
	{ 10, &_elems[11705] },
	{ 10, &_elems[11716] },
	{ 10, &_elems[11727] },
	{ 10, &_elems[11738] },
	{ 10, &_elems[11749] },
	{ 8, &_elems[11760] },
	{ 9, &_elems[11769] },
	{ 10, &_elems[11779] },
	{ 10, &_elems[11790] },
	{ 10, &_elems[11801] },
	{ 10, &_elems[11812] },
	{ 10, &_elems[11823] },
	{ 10, &_elems[11834] },
	{ 10, &_elems[11845] },
	{ 8, &_elems[11856] },
	{ 9, &_elems[11865] },
	{ 10, &_elems[11875] },
	{ 10, &_elems[11886] },
	{ 10, &_elems[11897] },
	{ 10, &_elems[11908] },
	{ 10, &_elems[11919] },
	{ 10, &_elems[11930] },
	{ 10, &_elems[11941] },
	{ 10, &_elems[11952] },
	{ 10, &_elems[11963] },
	{ 10, &_elems[11974] },
	{ 10, &_elems[11985] },
	{ 10, &_elems[11996] },
	{ 10, &_elems[12007] },
	{ 10, &_elems[12018] },
	{ 10, &_elems[12029] },
	{ 10, &_elems[12040] },
	{ 10, &_elems[12051] },
	{ 10, &_elems[12062] },
	{ 10, &_elems[12073] },
	{ 10, &_elems[12084] },
	{ 10, &_elems[12095] },
	{ 10, &_elems[12106] },
	{ 10, &_elems[12117] },
	{ 10, &_elems[12128] },
	{ 10, &_elems[12139] },
	{ 10, &_elems[12150] },
	{ 8, &_elems[12161] },
	{ 9, &_elems[12170] },
	{ 10, &_elems[12180] },
	{ 10, &_elems[12191] },
	{ 10, &_elems[12202] },
	{ 10, &_elems[12213] },
	{ 10, &_elems[12224] },
	{ 10, &_elems[12235] },
	{ 10, &_elems[12246] },
	{ 7, &_elems[12257] },
	{ 8, &_elems[12265] },
	{ 6, &_elems[12274] },
	{ 7, &_elems[12281] },
	{ 7, &_elems[12289] },
	{ 8, &_elems[12297] },
	{ 9, &_elems[12306] },
	{ 9, &_elems[12316] },
	{ 9, &_elems[12326] },
	{ 9, &_elems[12336] },
	{ 9, &_elems[12346] },
	{ 9, &_elems[12356] },
	{ 9, &_elems[12366] },
	{ 9, &_elems[12376] },
	{ 9, &_elems[12386] },
	{ 9, &_elems[12396] },
	{ 9, &_elems[12406] },
	{ 9, &_elems[12416] },
	{ 9, &_elems[12426] },
	{ 9, &_elems[12436] },
	{ 9, &_elems[12446] },
	{ 9, &_elems[12456] },
	{ 9, &_elems[12466] },
	{ 9, &_elems[12476] },
	{ 7, &_elems[12486] },
	{ 8, &_elems[12494] },
	{ 9, &_elems[12503] },
	{ 9, &_elems[12513] },
	{ 9, &_elems[12523] },
	{ 9, &_elems[12533] },
	{ 9, &_elems[12543] },
	{ 9, &_elems[12553] },
	{ 9, &_elems[12563] },
	{ 9, &_elems[12573] },
	{ 9, &_elems[12583] },
	{ 9, &_elems[12593] },
	{ 7, &_elems[12603] },
	{ 8, &_elems[12611] },
	{ 8, &_elems[12620] },
	{ 8, &_elems[12629] },
	{ 8, &_elems[12638] },
	{ 8, &_elems[12647] },
	{ 8, &_elems[12656] },
	{ 6, &_elems[12665] },
	{ 7, &_elems[12672] },
	{ 7, &_elems[12680] },
	{ 8, &_elems[12688] },
	{ 9, &_elems[12697] },
	{ 9, &_elems[12707] },
	{ 9, &_elems[12717] },
	{ 9, &_elems[12727] },
	{ 9, &_elems[12737] },
	{ 9, &_elems[12747] },
	{ 7, &_elems[12757] },
	{ 8, &_elems[12765] },
	{ 9, &_elems[12774] },
	{ 9, &_elems[12784] },
	{ 9, &_elems[12794] },
	{ 9, &_elems[12804] },
	{ 9, &_elems[12814] },
	{ 9, &_elems[12824] },
	{ 9, &_elems[12834] },
	{ 9, &_elems[12844] },
	{ 7, &_elems[12854] },
	{ 8, &_elems[12862] },
	{ 9, &_elems[12871] },
	{ 9, &_elems[12881] },
	{ 9, &_elems[12891] },
	{ 9, &_elems[12901] },
	{ 9, &_elems[12911] },
	{ 9, &_elems[12921] },
	{ 9, &_elems[12931] },
	{ 7, &_elems[12941] },
	{ 8, &_elems[12949] },
	{ 9, &_elems[12958] },
	{ 9, &_elems[12968] },
	{ 9, &_elems[12978] },
	{ 9, &_elems[12988] },
	{ 7, &_elems[12998] },
	{ 8, &_elems[13006] },
	{ 9, &_elems[13015] },
	{ 9, &_elems[13025] },
	{ 9, &_elems[13035] },
	{ 9, &_elems[13045] },
	{ 6, &_elems[13055] },
	{ 7, &_elems[13062] },
	{ 8, &_elems[13070] },
	{ 9, &_elems[13079] },
	{ 9, &_elems[13089] },
	{ 9, &_elems[13099] },
	{ 9, &_elems[13109] },
	{ 9, &_elems[13119] },
	{ 9, &_elems[13129] },
	{ 9, &_elems[13139] },
	{ 9, &_elems[13149] },
	{ 9, &_elems[13159] },
	{ 9, &_elems[13169] },
	{ 7, &_elems[13179] },
	{ 8, &_elems[13187] },
	{ 9, &_elems[13196] },
	{ 9, &_elems[13206] },
	{ 9, &_elems[13216] },
	{ 9, &_elems[13226] },
	{ 9, &_elems[13236] },
	{ 9, &_elems[13246] },
	{ 9, &_elems[13256] },
	{ 9, &_elems[13266] },
	{ 9, &_elems[13276] },
	{ 9, &_elems[13286] },
	{ 9, &_elems[13296] },
	{ 9, &_elems[13306] },
	{ 9, &_elems[13316] },
	{ 9, &_elems[13326] },
	{ 7, &_elems[13336] },
	{ 8, &_elems[13344] },
	{ 9, &_elems[13353] },
	{ 9, &_elems[13363] },
	{ 9, &_elems[13373] },
	{ 9, &_elems[13383] },
	{ 6, &_elems[13393] },
	{ 7, &_elems[13400] },
	{ 8, &_elems[13408] },
	{ 9, &_elems[13417] },
	{ 10, &_elems[13427] },
	{ 10, &_elems[13438] },
	{ 10, &_elems[13449] },
	{ 10, &_elems[13460] },
	{ 10, &_elems[13471] },
	{ 10, &_elems[13482] },
	{ 10, &_elems[13493] },
	{ 10, &_elems[13504] },
	{ 10, &_elems[13515] },
	{ 10, &_elems[13526] },
	{ 10, &_elems[13537] },
	{ 10, &_elems[13548] },
	{ 8, &_elems[13559] },
	{ 9, &_elems[13568] },
	{ 10, &_elems[13578] },
	{ 10, &_elems[13589] },
	{ 10, &_elems[13600] },
	{ 10, &_elems[13611] },
	{ 10, &_elems[13622] },
	{ 10, &_elems[13633] },
	{ 8, &_elems[13644] },
	{ 9, &_elems[13653] },
	{ 10, &_elems[13663] },
	{ 10, &_elems[13674] },
	{ 10, &_elems[13685] },
	{ 10, &_elems[13696] },
	{ 10, &_elems[13707] },
	{ 7, &_elems[13718] },
	{ 8, &_elems[13726] },
	{ 9, &_elems[13735] },
	{ 10, &_elems[13745] },
	{ 10, &_elems[13756] },
	{ 10, &_elems[13767] },
	{ 8, &_elems[13778] },
	{ 9, &_elems[13787] },
	{ 10, &_elems[13797] },
	{ 10, &_elems[13808] },
	{ 10, &_elems[13819] },
	{ 10, &_elems[13830] },
	{ 10, &_elems[13841] },
	{ 10, &_elems[13852] },
	{ 10, &_elems[13863] },
	{ 10, &_elems[13874] },
	{ 10, &_elems[13885] },
	{ 10, &_elems[13896] },
	{ 10, &_elems[13907] },
	{ 10, &_elems[13918] },
	{ 10, &_elems[13929] },
	{ 10, &_elems[13940] },
	{ 7, &_elems[13951] },
	{ 8, &_elems[13959] },
	{ 9, &_elems[13968] },
	{ 10, &_elems[13978] },
	{ 10, &_elems[13989] },
	{ 10, &_elems[14000] },
	{ 10, &_elems[14011] },
	{ 10, &_elems[14022] },
	{ 5, &_elems[14033] },
	{ 6, &_elems[14039] },
	{ 7, &_elems[14046] },
	{ 8, &_elems[14054] },
	{ 9, &_elems[14063] },
	{ 9, &_elems[14073] },
	{ 8, &_elems[14083] },
	{ 9, &_elems[14092] },
	{ 9, &_elems[14102] },
	{ 9, &_elems[14112] },
	{ 9, &_elems[14122] },
	{ 9, &_elems[14132] },
	{ 9, &_elems[14142] },
	{ 9, &_elems[14152] },
	{ 9, &_elems[14162] },
	{ 10, &_elems[14172] },
	{ 11, &_elems[14183] },
	{ 11, &_elems[14195] },
	{ 9, &_elems[14207] },
	{ 8, &_elems[14217] },
	{ 9, &_elems[14226] },
	{ 8, &_elems[14236] },
	{ 9, &_elems[14245] },
	{ 10, &_elems[14255] },
	{ 11, &_elems[14266] },
	{ 11, &_elems[14278] },
	{ 11, &_elems[14290] },
	{ 11, &_elems[14302] },
	{ 9, &_elems[14314] },
	{ 10, &_elems[14324] },
	{ 11, &_elems[14335] },
	{ 11, &_elems[14347] },
	{ 11, &_elems[14359] },
	{ 11, &_elems[14371] },
	{ 8, &_elems[14383] },
	{ 9, &_elems[14392] },
	{ 9, &_elems[14402] },
	{ 10, &_elems[14412] },
	{ 11, &_elems[14423] },
	{ 11, &_elems[14435] },
	{ 9, &_elems[14447] },
	{ 10, &_elems[14457] },
	{ 11, &_elems[14468] },
	{ 11, &_elems[14480] },
	{ 11, &_elems[14492] },
	{ 11, &_elems[14504] },
	{ 9, &_elems[14516] },
	{ 10, &_elems[14526] },
	{ 11, &_elems[14537] },
	{ 11, &_elems[14549] },
	{ 11, &_elems[14561] },
	{ 9, &_elems[14573] },
	{ 9, &_elems[14583] },
	{ 9, &_elems[14593] },
	{ 9, &_elems[14603] },
	{ 9, &_elems[14613] },
	{ 9, &_elems[14623] },
	{ 10, &_elems[14633] },
	{ 11, &_elems[14644] },
	{ 11, &_elems[14656] },
	{ 11, &_elems[14668] },
	{ 8, &_elems[14680] },
	{ 9, &_elems[14689] },
	{ 10, &_elems[14699] },
	{ 11, &_elems[14710] },
	{ 11, &_elems[14722] },
	{ 11, &_elems[14734] },
	{ 11, &_elems[14746] },
	{ 11, &_elems[14758] },
	{ 9, &_elems[14770] },
	{ 10, &_elems[14780] },
	{ 11, &_elems[14791] },
	{ 11, &_elems[14803] },
	{ 11, &_elems[14815] },
	{ 11, &_elems[14827] },
	{ 11, &_elems[14839] },
	{ 11, &_elems[14851] },
	{ 8, &_elems[14863] },
	{ 9, &_elems[14872] },
	{ 10, &_elems[14882] },
	{ 11, &_elems[14893] },
	{ 11, &_elems[14905] },
	{ 11, &_elems[14917] },
	{ 11, &_elems[14929] },
	{ 11, &_elems[14941] },
	{ 11, &_elems[14953] },
	{ 11, &_elems[14965] },
	{ 11, &_elems[14977] },
	{ 11, &_elems[14989] },
	{ 11, &_elems[15001] },
	{ 9, &_elems[15013] },
	{ 10, &_elems[15023] },
	{ 11, &_elems[15034] },
	{ 11, &_elems[15046] },
	{ 11, &_elems[15058] },
	{ 11, &_elems[15070] },
	{ 9, &_elems[15082] },
	{ 10, &_elems[15092] },
	{ 11, &_elems[15103] },
	{ 8, &_elems[15115] },
	{ 9, &_elems[15124] },
	{ 10, &_elems[15134] },
	{ 11, &_elems[15145] },
	{ 11, &_elems[15157] },
	{ 11, &_elems[15169] },
	{ 11, &_elems[15181] },
	{ 11, &_elems[15193] },
	{ 11, &_elems[15205] },
	{ 11, &_elems[15217] },
	{ 11, &_elems[15229] },
	{ 11, &_elems[15241] },
	{ 11, &_elems[15253] },
	{ 11, &_elems[15265] },
	{ 7, &_elems[15277] },
	{ 8, &_elems[15285] },
	{ 9, &_elems[15294] },
	{ 9, &_elems[15304] },
	{ 9, &_elems[15314] },
	{ 9, &_elems[15324] },
	{ 9, &_elems[15334] },
	{ 9, &_elems[15344] },
	{ 9, &_elems[15354] },
	{ 9, &_elems[15364] },
	{ 9, &_elems[15374] },
	{ 9, &_elems[15384] },
	{ 9, &_elems[15394] },
	{ 9, &_elems[15404] },
	{ 9, &_elems[15414] },
	{ 9, &_elems[15424] },
	{ 9, &_elems[15434] },
	{ 9, &_elems[15444] },
	{ 8, &_elems[15454] },
	{ 9, &_elems[15463] },
	{ 9, &_elems[15473] },
	{ 10, &_elems[15483] },
	{ 11, &_elems[15494] },
	{ 11, &_elems[15506] },
	{ 11, &_elems[15518] },
	{ 11, &_elems[15530] },
	{ 11, &_elems[15542] },
	{ 7, &_elems[15554] },
	{ 8, &_elems[15562] },
	{ 9, &_elems[15571] },
	{ 10, &_elems[15581] },
	{ 10, &_elems[15592] },
	{ 10, &_elems[15603] },
	{ 10, &_elems[15614] },
	{ 10, &_elems[15625] },
	{ 9, &_elems[15636] },
	{ 10, &_elems[15646] },
	{ 10, &_elems[15657] },
	{ 10, &_elems[15668] },
	{ 10, &_elems[15679] },
	{ 9, &_elems[15690] },
	{ 10, &_elems[15700] },
	{ 10, &_elems[15711] },
	{ 10, &_elems[15722] },
	{ 10, &_elems[15733] },
	{ 1, &_elems[15744] },
};

static struct _syntax {
	char   *name;
	OS      value;
}	_syntaxes[] = {
	{ "INTEGER", NULLOS },
	{ "Services", NULLOS },
	{ "Privileges", NULLOS },
	{ "OctetString", NULLOS },
	{ "DisplayString", NULLOS },
	{ "PhysAddress", NULLOS },
	{ "ObjectID", NULLOS },
	{ "NULL", NULLOS },
	{ "IpAddress", NULLOS },
	{ "NetworkAddress", NULLOS },
	{ "Counter", NULLOS },
	{ "Gauge", NULLOS },
	{ "TimeTicks", NULLOS },
	{ "ClnpAddress", NULLOS },
	{ "INTEGER", NULLOS },
	{ "INTEGER", NULLOS },
	{ "INTEGER", NULLOS },
	{ "INTEGER", NULLOS },
	{ "INTEGER", NULLOS },
	{ "INTEGER", NULLOS },
	{ "INTEGER", NULLOS },
	{ "INTEGER", NULLOS },
	{ "INTEGER", NULLOS },
	{ "INTEGER", NULLOS },
	{ "INTEGER", NULLOS },
	{ "INTEGER", NULLOS },
	{ "INTEGER", NULLOS },
	{ "INTEGER", NULLOS },
	{ "INTEGER", NULLOS },
	{ "INTEGER", NULLOS },
	{ "INTEGER", NULLOS },
	NULL
};

static object_type _types[] = {
	{
		"ccitt", "0", &_names[0],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, NULLOT, &_types[1], &_types[1]
	},
	{
		"localAgent", "0.0", &_names[1],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, NULLOT, NULLOT, &_types[2]
	},
	{
		"iso", "1", &_names[2],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, NULLOT, &_types[3], &_types[3]
	},
	{
		"internet", "1.3.6.1", &_names[3],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, NULLOT, &_types[1352], &_types[4]
	},
	{
		"directory", "1.3.6.1.1", &_names[4],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, NULLOT, NULLOT, &_types[5]
	},
	{
		"mgmt", "1.3.6.1.2", &_names[5],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, &_types[4], &_types[6], &_types[6]
	},
	{
		"mib-2", "1.3.6.1.2.1", &_names[6],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, NULLOT, &_types[554], &_types[7]
	},
	{
		"system", "1.3.6.1.2.1.1", &_names[7],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[4], NULLOT, &_types[14], &_types[8]
	},
	{
		"sysDescr", "1.3.6.1.2.1.1.1", &_names[8],
		(OS) 4, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, NULLOT, NULLOT, &_types[9]
	},
	{
		"sysObjectID", "1.3.6.1.2.1.1.2", &_names[9],
		(OS) 6, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, &_types[8], NULLOT, &_types[10]
	},
	{
		"sysUpTime", "1.3.6.1.2.1.1.3", &_names[10],
		(OS) 12, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, &_types[9], NULLOT, &_types[11]
	},
	{
		"sysContact", "1.3.6.1.2.1.1.4", &_names[11],
		(OS) 4, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, &_types[10], NULLOT, &_types[12]
	},
	{
		"sysName", "1.3.6.1.2.1.1.5", &_names[12],
		(OS) 4, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, &_types[11], NULLOT, &_types[13]
	},
	{
		"sysLocation", "1.3.6.1.2.1.1.6", &_names[13],
		(OS) 4, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, &_types[12], NULLOT, &_types[14]
	},
	{
		"sysServices", "1.3.6.1.2.1.1.7", &_names[14],
		(OS) 1, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[13], &_types[13], NULLOT, &_types[15]
	},
	{
		"interfaces", "1.3.6.1.2.1.2", &_names[15],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[3], &_types[7], &_types[17], &_types[16]
	},
	{
		"ifNumber", "1.3.6.1.2.1.2.1", &_names[16],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, NULLOT, NULLOT, &_types[17]
	},
	{
		"ifTable", "1.3.6.1.2.1.2.2", &_names[17],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, &_types[16], &_types[18], &_types[18]
	},
	{
		"ifEntry", "1.3.6.1.2.1.2.2.1", &_names[18],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, NULLOT, &_types[40], &_types[19]
	},
	{
		"ifIndex", "1.3.6.1.2.1.2.2.1.1", &_names[19],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1], NULLOT, NULLOT, &_types[20]
	},
	{
		"ifDescr", "1.3.6.1.2.1.2.2.1.2", &_names[20],
		(OS) 4, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[8], &_types[19], NULLOT, &_types[21]
	},
	{
		"ifType", "1.3.6.1.2.1.2.2.1.3", &_names[21],
		(OS) 14, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[18], &_types[20], NULLOT, &_types[22]
	},
	{
		"ifMtu", "1.3.6.1.2.1.2.2.1.4", &_names[22],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, &_types[21], NULLOT, &_types[23]
	},
	{
		"ifSpeed", "1.3.6.1.2.1.2.2.1.5", &_names[23],
		(OS) 11, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, &_types[22], NULLOT, &_types[24]
	},
	{
		"ifPhysAddress", "1.3.6.1.2.1.2.2.1.6", &_names[24],
		(OS) 5, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, &_types[23], NULLOT, &_types[25]
	},
	{
		"ifAdminStatus", "1.3.6.1.2.1.2.2.1.7", &_names[25],
		(OS) 15, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[14], &_types[24], NULLOT, &_types[26]
	},
	{
		"ifOperStatus", "1.3.6.1.2.1.2.2.1.8", &_names[26],
		(OS) 16, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[25], &_types[25], NULLOT, &_types[27]
	},
	{
		"ifLastChange", "1.3.6.1.2.1.2.2.1.9", &_names[27],
		(OS) 12, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, &_types[26], NULLOT, &_types[28]
	},
	{
		"ifInOctets", "1.3.6.1.2.1.2.2.1.10", &_names[28],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[26], &_types[27], NULLOT, &_types[29]
	},
	{
		"ifInUcastPkts", "1.3.6.1.2.1.2.2.1.11", &_names[29],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, &_types[28], NULLOT, &_types[30]
	},
	{
		"ifInNUcastPkts", "1.3.6.1.2.1.2.2.1.12", &_names[30],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[29], &_types[29], NULLOT, &_types[31]
	},
	{
		"ifInDiscards", "1.3.6.1.2.1.2.2.1.13", &_names[31],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[22], &_types[30], NULLOT, &_types[32]
	},
	{
		"ifInErrors", "1.3.6.1.2.1.2.2.1.14", &_names[32],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[2], &_types[31], NULLOT, &_types[33]
	},
	{
		"ifInUnknownProtos", "1.3.6.1.2.1.2.2.1.15", &_names[33],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[7], &_types[32], NULLOT, &_types[34]
	},
	{
		"ifOutOctets", "1.3.6.1.2.1.2.2.1.16", &_names[34],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[28], &_types[33], NULLOT, &_types[35]
	},
	{
		"ifOutUcastPkts", "1.3.6.1.2.1.2.2.1.17", &_names[35],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[30], &_types[34], NULLOT, &_types[36]
	},
	{
		"ifOutNUcastPkts", "1.3.6.1.2.1.2.2.1.18", &_names[36],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[35], &_types[35], NULLOT, &_types[37]
	},
	{
		"ifOutDiscards", "1.3.6.1.2.1.2.2.1.19", &_names[37],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[31], &_types[36], NULLOT, &_types[38]
	},
	{
		"ifOutErrors", "1.3.6.1.2.1.2.2.1.20", &_names[38],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[32], &_types[37], NULLOT, &_types[39]
	},
	{
		"ifOutQLen", "1.3.6.1.2.1.2.2.1.21", &_names[39],
		(OS) 11, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[17], &_types[38], NULLOT, &_types[40]
	},
	{
		"ifSpecific", "1.3.6.1.2.1.2.2.1.22", &_names[40],
		(OS) 6, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[23], &_types[39], NULLOT, &_types[41]
	},
	{
		"at", "1.3.6.1.2.1.3", &_names[41],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, &_types[15], &_types[42], &_types[42]
	},
	{
		"atTable", "1.3.6.1.2.1.3.1", &_names[42],
		(OS) -1, 0, (u_long) 0, 3,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[39], NULLOT, &_types[43], &_types[43]
	},
	{
		"atEntry", "1.3.6.1.2.1.3.1.1", &_names[43],
		(OS) -1, 0, (u_long) 0, 3,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[21], NULLOT, &_types[46], &_types[44]
	},
	{
		"atIfIndex", "1.3.6.1.2.1.3.1.1.1", &_names[44],
		(OS) 0, 3, (u_long) 0, 3,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[19], NULLOT, NULLOT, &_types[45]
	},
	{
		"atPhysAddress", "1.3.6.1.2.1.3.1.1.2", &_names[45],
		(OS) 5, 3, (u_long) 0, 3,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[24], &_types[44], NULLOT, &_types[46]
	},
	{
		"atNetAddress", "1.3.6.1.2.1.3.1.1.3", &_names[46],
		(OS) 9, 3, (u_long) 0, 3,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[45], &_types[45], NULLOT, &_types[47]
	},
	{
		"ip", "1.3.6.1.2.1.4", &_names[47],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, &_types[41], &_types[95], &_types[48]
	},
	{
		"ipForwarding", "1.3.6.1.2.1.4.1", &_names[48],
		(OS) 17, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, NULLOT, NULLOT, &_types[49]
	},
	{
		"ipDefaultTTL", "1.3.6.1.2.1.4.2", &_names[49],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, &_types[48], NULLOT, &_types[50]
	},
	{
		"ipInReceives", "1.3.6.1.2.1.4.3", &_names[50],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, &_types[49], NULLOT, &_types[51]
	},
	{
		"ipInHdrErrors", "1.3.6.1.2.1.4.4", &_names[51],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[38], &_types[50], NULLOT, &_types[52]
	},
	{
		"ipInAddrErrors", "1.3.6.1.2.1.4.5", &_names[52],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[51], &_types[51], NULLOT, &_types[53]
	},
	{
		"ipForwDatagrams", "1.3.6.1.2.1.4.6", &_names[53],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, &_types[52], NULLOT, &_types[54]
	},
	{
		"ipInUnknownProtos", "1.3.6.1.2.1.4.7", &_names[54],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[33], &_types[53], NULLOT, &_types[55]
	},
	{
		"ipInDiscards", "1.3.6.1.2.1.4.8", &_names[55],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[37], &_types[54], NULLOT, &_types[56]
	},
	{
		"ipInDelivers", "1.3.6.1.2.1.4.9", &_names[56],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[43], &_types[55], NULLOT, &_types[57]
	},
	{
		"ipOutRequests", "1.3.6.1.2.1.4.10", &_names[57],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, &_types[56], NULLOT, &_types[58]
	},
	{
		"ipOutDiscards", "1.3.6.1.2.1.4.11", &_names[58],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[55], &_types[57], NULLOT, &_types[59]
	},
	{
		"ipOutNoRoutes", "1.3.6.1.2.1.4.12", &_names[59],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[10], &_types[58], NULLOT, &_types[60]
	},
	{
		"ipReasmTimeout", "1.3.6.1.2.1.4.13", &_names[60],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[59], &_types[59], NULLOT, &_types[61]
	},
	{
		"ipReasmReqds", "1.3.6.1.2.1.4.14", &_names[61],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[57], &_types[60], NULLOT, &_types[62]
	},
	{
		"ipReasmOKs", "1.3.6.1.2.1.4.15", &_names[62],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, &_types[61], NULLOT, &_types[63]
	},
	{
		"ipReasmFails", "1.3.6.1.2.1.4.16", &_names[63],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, &_types[62], NULLOT, &_types[64]
	},
	{
		"ipFragOKs", "1.3.6.1.2.1.4.17", &_names[64],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[62], &_types[63], NULLOT, &_types[65]
	},
	{
		"ipFragFails", "1.3.6.1.2.1.4.18", &_names[65],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[63], &_types[64], NULLOT, &_types[66]
	},
	{
		"ipFragCreates", "1.3.6.1.2.1.4.19", &_names[66],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, &_types[65], NULLOT, &_types[67]
	},
	{
		"ipAddrTable", "1.3.6.1.2.1.4.20", &_names[67],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[42], &_types[66], &_types[68], &_types[68]
	},
	{
		"ipAddrEntry", "1.3.6.1.2.1.4.20.1", &_names[68],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[56], NULLOT, &_types[73], &_types[69]
	},
	{
		"ipAdEntAddr", "1.3.6.1.2.1.4.20.1.1", &_names[69],
		(OS) 8, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[46], NULLOT, NULLOT, &_types[70]
	},
	{
		"ipAdEntIfIndex", "1.3.6.1.2.1.4.20.1.2", &_names[70],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[44], &_types[69], NULLOT, &_types[71]
	},
	{
		"ipAdEntNetMask", "1.3.6.1.2.1.4.20.1.3", &_names[71],
		(OS) 8, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[70], &_types[70], NULLOT, &_types[72]
	},
	{
		"ipAdEntBcastAddr", "1.3.6.1.2.1.4.20.1.4", &_names[72],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[69], &_types[71], NULLOT, &_types[73]
	},
	{
		"ipAdEntReasmMaxSize", "1.3.6.1.2.1.4.20.1.5", &_names[73],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[9], &_types[72], NULLOT, &_types[74]
	},
	{
		"ipRouteTable", "1.3.6.1.2.1.4.21", &_names[74],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[67], &_types[67], &_types[75], &_types[75]
	},
	{
		"ipRouteEntry", "1.3.6.1.2.1.4.21.1", &_names[75],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[68], NULLOT, &_types[88], &_types[76]
	},
	{
		"ipRouteDest", "1.3.6.1.2.1.4.21.1.1", &_names[76],
		(OS) 8, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[20], NULLOT, NULLOT, &_types[77]
	},
	{
		"ipRouteIfIndex", "1.3.6.1.2.1.4.21.1.2", &_names[77],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[71], &_types[76], NULLOT, &_types[78]
	},
	{
		"ipRouteMetric1", "1.3.6.1.2.1.4.21.1.3", &_names[78],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[27], &_types[77], NULLOT, &_types[79]
	},
	{
		"ipRouteMetric2", "1.3.6.1.2.1.4.21.1.4", &_names[79],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[78], &_types[78], NULLOT, &_types[80]
	},
	{
		"ipRouteMetric3", "1.3.6.1.2.1.4.21.1.5", &_names[80],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[79], &_types[79], NULLOT, &_types[81]
	},
	{
		"ipRouteMetric4", "1.3.6.1.2.1.4.21.1.6", &_names[81],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[80], &_types[80], NULLOT, &_types[82]
	},
	{
		"ipRouteNextHop", "1.3.6.1.2.1.4.21.1.7", &_names[82],
		(OS) 8, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[48], &_types[81], NULLOT, &_types[83]
	},
	{
		"ipRouteType", "1.3.6.1.2.1.4.21.1.8", &_names[83],
		(OS) 18, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[75], &_types[82], NULLOT, &_types[84]
	},
	{
		"ipRouteProto", "1.3.6.1.2.1.4.21.1.9", &_names[84],
		(OS) 19, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[54], &_types[83], NULLOT, &_types[85]
	},
	{
		"ipRouteAge", "1.3.6.1.2.1.4.21.1.10", &_names[85],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[77], &_types[84], NULLOT, &_types[86]
	},
	{
		"ipRouteMask", "1.3.6.1.2.1.4.21.1.11", &_names[86],
		(OS) 8, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[85], &_types[85], NULLOT, &_types[87]
	},
	{
		"ipRouteMetric5", "1.3.6.1.2.1.4.21.1.12", &_names[87],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[81], &_types[86], NULLOT, &_types[88]
	},
	{
		"ipRouteInfo", "1.3.6.1.2.1.4.21.1.13", &_names[88],
		(OS) 6, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[72], &_types[87], NULLOT, &_types[89]
	},
	{
		"ipNetToMediaTable", "1.3.6.1.2.1.4.22", &_names[89],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[74], &_types[74], &_types[90], &_types[90]
	},
	{
		"ipNetToMediaEntry", "1.3.6.1.2.1.4.22.1", &_names[90],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[83], NULLOT, &_types[94], &_types[91]
	},
	{
		"ipNetToMediaIfIndex", "1.3.6.1.2.1.4.22.1.1", &_names[91],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[86], NULLOT, NULLOT, &_types[92]
	},
	{
		"ipNetToMediaPhysAddress", "1.3.6.1.2.1.4.22.1.2", &_names[92],
		(OS) 5, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[88], &_types[91], NULLOT, &_types[93]
	},
	{
		"ipNetToMediaNetAddress", "1.3.6.1.2.1.4.22.1.3", &_names[93],
		(OS) 8, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[92], &_types[92], NULLOT, &_types[94]
	},
	{
		"ipNetToMediaType", "1.3.6.1.2.1.4.22.1.4", &_names[94],
		(OS) 20, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[90], &_types[93], NULLOT, &_types[95]
	},
	{
		"ipRoutingDiscards", "1.3.6.1.2.1.4.23", &_names[95],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[58], &_types[89], NULLOT, &_types[96]
	},
	{
		"icmp", "1.3.6.1.2.1.5", &_names[96],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[5], &_types[47], &_types[122], &_types[97]
	},
	{
		"icmpInMsgs", "1.3.6.1.2.1.5.1", &_names[97],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[93], NULLOT, NULLOT, &_types[98]
	},
	{
		"icmpInErrors", "1.3.6.1.2.1.5.2", &_names[98],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[52], &_types[97], NULLOT, &_types[99]
	},
	{
		"icmpInDestUnreachs", "1.3.6.1.2.1.5.3", &_names[99],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[36], &_types[98], NULLOT, &_types[100]
	},
	{
		"icmpInTimeExcds", "1.3.6.1.2.1.5.4", &_names[100],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[50], &_types[99], NULLOT, &_types[101]
	},
	{
		"icmpInParmProbs", "1.3.6.1.2.1.5.5", &_names[101],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[84], &_types[100], NULLOT, &_types[102]
	},
	{
		"icmpInSrcQuenchs", "1.3.6.1.2.1.5.6", &_names[102],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[97], &_types[101], NULLOT, &_types[103]
	},
	{
		"icmpInRedirects", "1.3.6.1.2.1.5.7", &_names[103],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, &_types[102], NULLOT, &_types[104]
	},
	{
		"icmpInEchos", "1.3.6.1.2.1.5.8", &_names[104],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, &_types[103], NULLOT, &_types[105]
	},
	{
		"icmpInEchoReps", "1.3.6.1.2.1.5.9", &_names[105],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, &_types[104], NULLOT, &_types[106]
	},
	{
		"icmpInTimestamps", "1.3.6.1.2.1.5.10", &_names[106],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[60], &_types[105], NULLOT, &_types[107]
	},
	{
		"icmpInTimestampReps", "1.3.6.1.2.1.5.11", &_names[107],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[105], &_types[106], NULLOT, &_types[108]
	},
	{
		"icmpInAddrMasks", "1.3.6.1.2.1.5.12", &_names[108],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[91], &_types[107], NULLOT, &_types[109]
	},
	{
		"icmpInAddrMaskReps", "1.3.6.1.2.1.5.13", &_names[109],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[107], &_types[108], NULLOT, &_types[110]
	},
	{
		"icmpOutMsgs", "1.3.6.1.2.1.5.14", &_names[110],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[102], &_types[109], NULLOT, &_types[111]
	},
	{
		"icmpOutErrors", "1.3.6.1.2.1.5.15", &_names[111],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[98], &_types[110], NULLOT, &_types[112]
	},
	{
		"icmpOutDestUnreachs", "1.3.6.1.2.1.5.16", &_names[112],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[99], &_types[111], NULLOT, &_types[113]
	},
	{
		"icmpOutTimeExcds", "1.3.6.1.2.1.5.17", &_names[113],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[100], &_types[112], NULLOT, &_types[114]
	},
	{
		"icmpOutParmProbs", "1.3.6.1.2.1.5.18", &_names[114],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[101], &_types[113], NULLOT, &_types[115]
	},
	{
		"icmpOutSrcQuenchs", "1.3.6.1.2.1.5.19", &_names[115],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[110], &_types[114], NULLOT, &_types[116]
	},
	{
		"icmpOutRedirects", "1.3.6.1.2.1.5.20", &_names[116],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[103], &_types[115], NULLOT, &_types[117]
	},
	{
		"icmpOutEchos", "1.3.6.1.2.1.5.21", &_names[117],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[104], &_types[116], NULLOT, &_types[118]
	},
	{
		"icmpOutEchoReps", "1.3.6.1.2.1.5.22", &_names[118],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[109], &_types[117], NULLOT, &_types[119]
	},
	{
		"icmpOutTimestamps", "1.3.6.1.2.1.5.23", &_names[119],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[106], &_types[118], NULLOT, &_types[120]
	},
	{
		"icmpOutTimestampReps", "1.3.6.1.2.1.5.24", &_names[120],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[118], &_types[119], NULLOT, &_types[121]
	},
	{
		"icmpOutAddrMasks", "1.3.6.1.2.1.5.25", &_names[121],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[108], &_types[120], NULLOT, &_types[122]
	},
	{
		"icmpOutAddrMaskReps", "1.3.6.1.2.1.5.26", &_names[122],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[120], &_types[121], NULLOT, &_types[123]
	},
	{
		"tcp", "1.3.6.1.2.1.6", &_names[123],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[115], &_types[96], &_types[144], &_types[124]
	},
	{
		"tcpRtoAlgorithm", "1.3.6.1.2.1.6.1", &_names[124],
		(OS) 21, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[87], NULLOT, NULLOT, &_types[125]
	},
	{
		"tcpRtoMin", "1.3.6.1.2.1.6.2", &_names[125],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, &_types[124], NULLOT, &_types[126]
	},
	{
		"tcpRtoMax", "1.3.6.1.2.1.6.3", &_names[126],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[73], &_types[125], NULLOT, &_types[127]
	},
	{
		"tcpMaxConn", "1.3.6.1.2.1.6.4", &_names[127],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[11], &_types[126], NULLOT, &_types[128]
	},
	{
		"tcpActiveOpens", "1.3.6.1.2.1.6.5", &_names[128],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[126], &_types[127], NULLOT, &_types[129]
	},
	{
		"tcpPassiveOpens", "1.3.6.1.2.1.6.6", &_names[129],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[128], &_types[128], NULLOT, &_types[130]
	},
	{
		"tcpAttemptFails", "1.3.6.1.2.1.6.7", &_names[130],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[65], &_types[129], NULLOT, &_types[131]
	},
	{
		"tcpEstabResets", "1.3.6.1.2.1.6.8", &_names[131],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[34], &_types[130], NULLOT, &_types[132]
	},
	{
		"tcpCurrEstab", "1.3.6.1.2.1.6.9", &_names[132],
		(OS) 11, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[16], &_types[131], NULLOT, &_types[133]
	},
	{
		"tcpInSegs", "1.3.6.1.2.1.6.10", &_names[133],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[89], &_types[132], NULLOT, &_types[134]
	},
	{
		"tcpOutSegs", "1.3.6.1.2.1.6.11", &_names[134],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[133], &_types[133], NULLOT, &_types[135]
	},
	{
		"tcpRetransSegs", "1.3.6.1.2.1.6.12", &_names[135],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[134], &_types[134], NULLOT, &_types[136]
	},
	{
		"tcpConnTable", "1.3.6.1.2.1.6.13", &_names[136],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[135], &_types[135], &_types[137], &_types[137]
	},
	{
		"tcpConnEntry", "1.3.6.1.2.1.6.13.1", &_names[137],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[94], NULLOT, &_types[142], &_types[138]
	},
	{
		"tcpConnState", "1.3.6.1.2.1.6.13.1.1", &_names[138],
		(OS) 22, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[131], NULLOT, NULLOT, &_types[139]
	},
	{
		"tcpConnLocalAddress", "1.3.6.1.2.1.6.13.1.2", &_names[139],
		(OS) 8, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[123], &_types[138], NULLOT, &_types[140]
	},
	{
		"tcpConnLocalPort", "1.3.6.1.2.1.6.13.1.3", &_names[140],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[96], &_types[139], NULLOT, &_types[141]
	},
	{
		"tcpConnRemAddress", "1.3.6.1.2.1.6.13.1.4", &_names[141],
		(OS) 8, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[139], &_types[140], NULLOT, &_types[142]
	},
	{
		"tcpConnRemPort", "1.3.6.1.2.1.6.13.1.5", &_names[142],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[140], &_types[141], NULLOT, &_types[143]
	},
	{
		"tcpInErrs", "1.3.6.1.2.1.6.14", &_names[143],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[111], &_types[136], NULLOT, &_types[144]
	},
	{
		"tcpOutRsts", "1.3.6.1.2.1.6.15", &_names[144],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, &_types[143], NULLOT, &_types[145]
	},
	{
		"udp", "1.3.6.1.2.1.7", &_names[145],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[141], &_types[123], &_types[150], &_types[146]
	},
	{
		"udpInDatagrams", "1.3.6.1.2.1.7.1", &_names[146],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[53], NULLOT, NULLOT, &_types[147]
	},
	{
		"udpNoPorts", "1.3.6.1.2.1.7.2", &_names[147],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[142], &_types[146], NULLOT, &_types[148]
	},
	{
		"udpInErrors", "1.3.6.1.2.1.7.3", &_names[148],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[143], &_types[147], NULLOT, &_types[149]
	},
	{
		"udpOutDatagrams", "1.3.6.1.2.1.7.4", &_names[149],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[146], &_types[148], NULLOT, &_types[150]
	},
	{
		"udpTable", "1.3.6.1.2.1.7.5", &_names[150],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[136], &_types[149], &_types[151], &_types[151]
	},
	{
		"udpEntry", "1.3.6.1.2.1.7.5.1", &_names[151],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[137], NULLOT, &_types[153], &_types[152]
	},
	{
		"udpLocalAddress", "1.3.6.1.2.1.7.5.1.1", &_names[152],
		(OS) 8, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[145], NULLOT, NULLOT, &_types[153]
	},
	{
		"udpLocalPort", "1.3.6.1.2.1.7.5.1.2", &_names[153],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[147], &_types[152], NULLOT, &_types[154]
	},
	{
		"egp", "1.3.6.1.2.1.8", &_names[154],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[95], &_types[145], &_types[176], &_types[155]
	},
	{
		"egpInMsgs", "1.3.6.1.2.1.8.1", &_names[155],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[152], NULLOT, NULLOT, &_types[156]
	},
	{
		"egpInErrors", "1.3.6.1.2.1.8.2", &_names[156],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[148], &_types[155], NULLOT, &_types[157]
	},
	{
		"egpOutMsgs", "1.3.6.1.2.1.8.3", &_names[157],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[155], &_types[156], NULLOT, &_types[158]
	},
	{
		"egpOutErrors", "1.3.6.1.2.1.8.4", &_names[158],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[156], &_types[157], NULLOT, &_types[159]
	},
	{
		"egpNeighTable", "1.3.6.1.2.1.8.5", &_names[159],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[150], &_types[158], &_types[160], &_types[160]
	},
	{
		"egpNeighEntry", "1.3.6.1.2.1.8.5.1", &_names[160],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[151], NULLOT, &_types[175], &_types[161]
	},
	{
		"egpNeighState", "1.3.6.1.2.1.8.5.1.1", &_names[161],
		(OS) 23, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[138], NULLOT, NULLOT, &_types[162]
	},
	{
		"egpNeighAddr", "1.3.6.1.2.1.8.5.1.2", &_names[162],
		(OS) 8, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[157], &_types[161], NULLOT, &_types[163]
	},
	{
		"egpNeighAs", "1.3.6.1.2.1.8.5.1.3", &_names[163],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, &_types[162], NULLOT, &_types[164]
	},
	{
		"egpNeighInMsgs", "1.3.6.1.2.1.8.5.1.4", &_names[164],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[162], &_types[163], NULLOT, &_types[165]
	},
	{
		"egpNeighInErrs", "1.3.6.1.2.1.8.5.1.5", &_names[165],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[158], &_types[164], NULLOT, &_types[166]
	},
	{
		"egpNeighOutMsgs", "1.3.6.1.2.1.8.5.1.6", &_names[166],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[164], &_types[165], NULLOT, &_types[167]
	},
	{
		"egpNeighOutErrs", "1.3.6.1.2.1.8.5.1.7", &_names[167],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[165], &_types[166], NULLOT, &_types[168]
	},
	{
		"egpNeighInErrMsgs", "1.3.6.1.2.1.8.5.1.8", &_names[168],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[166], &_types[167], NULLOT, &_types[169]
	},
	{
		"egpNeighOutErrMsgs", "1.3.6.1.2.1.8.5.1.9", &_names[169],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[168], &_types[168], NULLOT, &_types[170]
	},
	{
		"egpNeighStateUps", "1.3.6.1.2.1.8.5.1.10", &_names[170],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[119], &_types[169], NULLOT, &_types[171]
	},
	{
		"egpNeighStateDowns", "1.3.6.1.2.1.8.5.1.11", &_names[171],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[49], &_types[170], NULLOT, &_types[172]
	},
	{
		"egpNeighIntervalHello", "1.3.6.1.2.1.8.5.1.12", &_names[172],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, &_types[171], NULLOT, &_types[173]
	},
	{
		"egpNeighIntervalPoll", "1.3.6.1.2.1.8.5.1.13", &_names[173],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, &_types[172], NULLOT, &_types[174]
	},
	{
		"egpNeighMode", "1.3.6.1.2.1.8.5.1.14", &_names[174],
		(OS) 24, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[127], &_types[173], NULLOT, &_types[175]
	},
	{
		"egpNeighEventTrigger", "1.3.6.1.2.1.8.5.1.15", &_names[175],
		(OS) 25, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, &_types[174], NULLOT, &_types[176]
	},
	{
		"egpAs", "1.3.6.1.2.1.8.6", &_names[176],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[163], &_types[159], NULLOT, &_types[177]
	},
	{
		"transmission", "1.3.6.1.2.1.10", &_names[177],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, &_types[154], &_types[228], &_types[178]
	},
	{
		"ds1", "1.3.6.1.2.1.10.18", &_names[178],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, NULLOT, &_types[223], &_types[179]
	},
	{
		"ds1ConfigTable", "1.3.6.1.2.1.10.18.1", &_names[179],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[159], NULLOT, &_types[180], &_types[180]
	},
	{
		"ds1ConfigEntry", "1.3.6.1.2.1.10.18.1.1", &_names[180],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[160], NULLOT, &_types[191], &_types[181]
	},
	{
		"ds1CSUIndex", "1.3.6.1.2.1.10.18.1.1.1", &_names[181],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[121], NULLOT, NULLOT, &_types[182]
	},
	{
		"ds1Index", "1.3.6.1.2.1.10.18.1.1.2", &_names[182],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[181], &_types[181], NULLOT, &_types[183]
	},
	{
		"ds1TimeElapsed", "1.3.6.1.2.1.10.18.1.1.3", &_names[183],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[12], &_types[182], NULLOT, &_types[184]
	},
	{
		"ds1ValidIntervals", "1.3.6.1.2.1.10.18.1.1.4", &_names[184],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[15], &_types[183], NULLOT, &_types[185]
	},
	{
		"ds1LineType", "1.3.6.1.2.1.10.18.1.1.5", &_names[185],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[180], &_types[184], NULLOT, &_types[186]
	},
	{
		"ds1ZeroCoding", "1.3.6.1.2.1.10.18.1.1.6", &_names[186],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[170], &_types[185], NULLOT, &_types[187]
	},
	{
		"ds1Loopback", "1.3.6.1.2.1.10.18.1.1.7", &_names[187],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[171], &_types[186], NULLOT, &_types[188]
	},
	{
		"ds1SendCode", "1.3.6.1.2.1.10.18.1.1.8", &_names[188],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[186], &_types[187], NULLOT, &_types[189]
	},
	{
		"ds1YellowAlarm", "1.3.6.1.2.1.10.18.1.1.9", &_names[189],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[66], &_types[188], NULLOT, &_types[190]
	},
	{
		"ds1RedAlarm", "1.3.6.1.2.1.10.18.1.1.10", &_names[190],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[189], &_types[189], NULLOT, &_types[191]
	},
	{
		"ds1CircuitIdentifier", "1.3.6.1.2.1.10.18.1.1.11", &_names[191],
		(OS) 4, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[117], &_types[190], NULLOT, &_types[192]
	},
	{
		"ds1IntervalTable", "1.3.6.1.2.1.10.18.2", &_names[192],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[179], &_types[179], &_types[193], &_types[193]
	},
	{
		"ds1IntervalEntry", "1.3.6.1.2.1.10.18.2.1", &_names[193],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[185], NULLOT, &_types[202], &_types[194]
	},
	{
		"ds1IntervalIndex", "1.3.6.1.2.1.10.18.2.1.1", &_names[194],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[182], NULLOT, NULLOT, &_types[195]
	},
	{
		"ds1IntervalNumber", "1.3.6.1.2.1.10.18.2.1.2", &_names[195],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[132], &_types[194], NULLOT, &_types[196]
	},
	{
		"ds1IntervalESs", "1.3.6.1.2.1.10.18.2.1.3", &_names[196],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, &_types[195], NULLOT, &_types[197]
	},
	{
		"ds1IntervalSESs", "1.3.6.1.2.1.10.18.2.1.4", &_names[197],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[196], &_types[196], NULLOT, &_types[198]
	},
	{
		"ds1IntervalSEFSs", "1.3.6.1.2.1.10.18.2.1.5", &_names[198],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[197], &_types[197], NULLOT, &_types[199]
	},
	{
		"ds1IntervalUASs", "1.3.6.1.2.1.10.18.2.1.6", &_names[199],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[198], &_types[198], NULLOT, &_types[200]
	},
	{
		"ds1IntervalCSSs", "1.3.6.1.2.1.10.18.2.1.7", &_names[200],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[199], &_types[199], NULLOT, &_types[201]
	},
	{
		"ds1IntervalBPVs", "1.3.6.1.2.1.10.18.2.1.8", &_names[201],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, &_types[200], NULLOT, &_types[202]
	},
	{
		"ds1IntervalCVs", "1.3.6.1.2.1.10.18.2.1.9", &_names[202],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[201], &_types[201], NULLOT, &_types[203]
	},
	{
		"ds1CurrentTable", "1.3.6.1.2.1.10.18.3", &_names[203],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[192], &_types[192], &_types[204], &_types[204]
	},
	{
		"ds1CurrentEntry", "1.3.6.1.2.1.10.18.3.1", &_names[204],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[193], NULLOT, &_types[212], &_types[205]
	},
	{
		"ds1CurrentIndex", "1.3.6.1.2.1.10.18.3.1.1", &_names[205],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[194], NULLOT, NULLOT, &_types[206]
	},
	{
		"ds1CurrentESs", "1.3.6.1.2.1.10.18.3.1.2", &_names[206],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[200], &_types[205], NULLOT, &_types[207]
	},
	{
		"ds1CurrentSESs", "1.3.6.1.2.1.10.18.3.1.3", &_names[207],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[206], &_types[206], NULLOT, &_types[208]
	},
	{
		"ds1CurrentSEFSs", "1.3.6.1.2.1.10.18.3.1.4", &_names[208],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[207], &_types[207], NULLOT, &_types[209]
	},
	{
		"ds1CurrentUASs", "1.3.6.1.2.1.10.18.3.1.5", &_names[209],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[208], &_types[208], NULLOT, &_types[210]
	},
	{
		"ds1CurrentCSSs", "1.3.6.1.2.1.10.18.3.1.6", &_names[210],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[209], &_types[209], NULLOT, &_types[211]
	},
	{
		"ds1CurrentBPVs", "1.3.6.1.2.1.10.18.3.1.7", &_names[211],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[202], &_types[210], NULLOT, &_types[212]
	},
	{
		"ds1CurrentCVs", "1.3.6.1.2.1.10.18.3.1.8", &_names[212],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[211], &_types[211], NULLOT, &_types[213]
	},
	{
		"ds1TotalTable", "1.3.6.1.2.1.10.18.4", &_names[213],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[203], &_types[203], &_types[214], &_types[214]
	},
	{
		"ds1TotalEntry", "1.3.6.1.2.1.10.18.4.1", &_names[214],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[204], NULLOT, &_types[222], &_types[215]
	},
	{
		"ds1TotalIndex", "1.3.6.1.2.1.10.18.4.1.1", &_names[215],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[205], NULLOT, NULLOT, &_types[216]
	},
	{
		"ds1TotalESs", "1.3.6.1.2.1.10.18.4.1.2", &_names[216],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[210], &_types[215], NULLOT, &_types[217]
	},
	{
		"ds1TotalSESs", "1.3.6.1.2.1.10.18.4.1.3", &_names[217],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[216], &_types[216], NULLOT, &_types[218]
	},
	{
		"ds1TotalSEFSs", "1.3.6.1.2.1.10.18.4.1.4", &_names[218],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[217], &_types[217], NULLOT, &_types[219]
	},
	{
		"ds1TotalUASs", "1.3.6.1.2.1.10.18.4.1.5", &_names[219],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[218], &_types[218], NULLOT, &_types[220]
	},
	{
		"ds1TotalCSSs", "1.3.6.1.2.1.10.18.4.1.6", &_names[220],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[219], &_types[219], NULLOT, &_types[221]
	},
	{
		"ds1TotalBPVs", "1.3.6.1.2.1.10.18.4.1.7", &_names[221],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[212], &_types[220], NULLOT, &_types[222]
	},
	{
		"ds1TotalCVs", "1.3.6.1.2.1.10.18.4.1.8", &_names[222],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[221], &_types[221], NULLOT, &_types[223]
	},
	{
		"ds1FracTable", "1.3.6.1.2.1.10.18.5", &_names[223],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[213], &_types[213], &_types[224], &_types[224]
	},
	{
		"ds1FracEntry", "1.3.6.1.2.1.10.18.5.1", &_names[224],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[214], NULLOT, &_types[227], &_types[225]
	},
	{
		"ds1FracIndex", "1.3.6.1.2.1.10.18.5.1.1", &_names[225],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[215], NULLOT, NULLOT, &_types[226]
	},
	{
		"ds1FracNumber", "1.3.6.1.2.1.10.18.5.1.2", &_names[226],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[195], &_types[225], NULLOT, &_types[227]
	},
	{
		"ds1FracIfIndex", "1.3.6.1.2.1.10.18.5.1.3", &_names[227],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[225], &_types[226], NULLOT, &_types[228]
	},
	{
		"ds3", "1.3.6.1.2.1.10.30", &_names[228],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, &_types[178], &_types[263], &_types[229]
	},
	{
		"ds3ConfigTable", "1.3.6.1.2.1.10.30.1", &_names[229],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[223], NULLOT, &_types[230], &_types[230]
	},
	{
		"ds3ConfigEntry", "1.3.6.1.2.1.10.30.1.1", &_names[230],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[224], NULLOT, &_types[241], &_types[231]
	},
	{
		"ds3CSUIndex", "1.3.6.1.2.1.10.30.1.1.1", &_names[231],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[227], NULLOT, NULLOT, &_types[232]
	},
	{
		"ds3Index", "1.3.6.1.2.1.10.30.1.1.2", &_names[232],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[231], &_types[231], NULLOT, &_types[233]
	},
	{
		"ds3TimeElapsed", "1.3.6.1.2.1.10.30.1.1.3", &_names[233],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[183], &_types[232], NULLOT, &_types[234]
	},
	{
		"ds3ValidIntervals", "1.3.6.1.2.1.10.30.1.1.4", &_names[234],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[184], &_types[233], NULLOT, &_types[235]
	},
	{
		"ds3LineType", "1.3.6.1.2.1.10.30.1.1.5", &_names[235],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[230], &_types[234], NULLOT, &_types[236]
	},
	{
		"ds3ZeroCoding", "1.3.6.1.2.1.10.30.1.1.6", &_names[236],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[188], &_types[235], NULLOT, &_types[237]
	},
	{
		"ds3Loopback", "1.3.6.1.2.1.10.30.1.1.7", &_names[237],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[187], &_types[236], NULLOT, &_types[238]
	},
	{
		"ds3SendCode", "1.3.6.1.2.1.10.30.1.1.8", &_names[238],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[236], &_types[237], NULLOT, &_types[239]
	},
	{
		"ds3YellowAlarm", "1.3.6.1.2.1.10.30.1.1.9", &_names[239],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[190], &_types[238], NULLOT, &_types[240]
	},
	{
		"ds3RedAlarm", "1.3.6.1.2.1.10.30.1.1.10", &_names[240],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[239], &_types[239], NULLOT, &_types[241]
	},
	{
		"ds3CircuitIdentifier", "1.3.6.1.2.1.10.30.1.1.11", &_names[241],
		(OS) 4, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[191], &_types[240], NULLOT, &_types[242]
	},
	{
		"ds3IntervalTable", "1.3.6.1.2.1.10.30.2", &_names[242],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[229], &_types[229], &_types[243], &_types[243]
	},
	{
		"ds3IntervalEntry", "1.3.6.1.2.1.10.30.2.1", &_names[243],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[235], NULLOT, &_types[252], &_types[244]
	},
	{
		"ds3IntervalIndex", "1.3.6.1.2.1.10.30.2.1.1", &_names[244],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[232], NULLOT, NULLOT, &_types[245]
	},
	{
		"ds3IntervalNumber", "1.3.6.1.2.1.10.30.2.1.2", &_names[245],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[226], &_types[244], NULLOT, &_types[246]
	},
	{
		"ds3IntervalESs", "1.3.6.1.2.1.10.30.2.1.3", &_names[246],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[220], &_types[245], NULLOT, &_types[247]
	},
	{
		"ds3IntervalSESs", "1.3.6.1.2.1.10.30.2.1.4", &_names[247],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[246], &_types[246], NULLOT, &_types[248]
	},
	{
		"ds3IntervalSEFSs", "1.3.6.1.2.1.10.30.2.1.5", &_names[248],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[247], &_types[247], NULLOT, &_types[249]
	},
	{
		"ds3IntervalUASs", "1.3.6.1.2.1.10.30.2.1.6", &_names[249],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[248], &_types[248], NULLOT, &_types[250]
	},
	{
		"ds3IntervalCSSs", "1.3.6.1.2.1.10.30.2.1.7", &_names[250],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[249], &_types[249], NULLOT, &_types[251]
	},
	{
		"ds3IntervalBPVs", "1.3.6.1.2.1.10.30.2.1.8", &_names[251],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[222], &_types[250], NULLOT, &_types[252]
	},
	{
		"ds3IntervalCVs", "1.3.6.1.2.1.10.30.2.1.9", &_names[252],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[251], &_types[251], NULLOT, &_types[253]
	},
	{
		"ds3CurrentTable", "1.3.6.1.2.1.10.30.3", &_names[253],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[242], &_types[242], &_types[254], &_types[254]
	},
	{
		"ds3CurrentEntry", "1.3.6.1.2.1.10.30.3.1", &_names[254],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[243], NULLOT, &_types[262], &_types[255]
	},
	{
		"ds3CurrentIndex", "1.3.6.1.2.1.10.30.3.1.1", &_names[255],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[244], NULLOT, NULLOT, &_types[256]
	},
	{
		"ds3CurrentESs", "1.3.6.1.2.1.10.30.3.1.2", &_names[256],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[250], &_types[255], NULLOT, &_types[257]
	},
	{
		"ds3CurrentSESs", "1.3.6.1.2.1.10.30.3.1.3", &_names[257],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[256], &_types[256], NULLOT, &_types[258]
	},
	{
		"ds3CurrentSEFSs", "1.3.6.1.2.1.10.30.3.1.4", &_names[258],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[257], &_types[257], NULLOT, &_types[259]
	},
	{
		"ds3CurrentUASs", "1.3.6.1.2.1.10.30.3.1.5", &_names[259],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[258], &_types[258], NULLOT, &_types[260]
	},
	{
		"ds3CurrentCSSs", "1.3.6.1.2.1.10.30.3.1.6", &_names[260],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[259], &_types[259], NULLOT, &_types[261]
	},
	{
		"ds3CurrentBPVs", "1.3.6.1.2.1.10.30.3.1.7", &_names[261],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[252], &_types[260], NULLOT, &_types[262]
	},
	{
		"ds3CurrentCVs", "1.3.6.1.2.1.10.30.3.1.8", &_names[262],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[261], &_types[261], NULLOT, &_types[263]
	},
	{
		"ds3TotalTable", "1.3.6.1.2.1.10.30.4", &_names[263],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[253], &_types[253], &_types[264], &_types[264]
	},
	{
		"ds3TotalEntry", "1.3.6.1.2.1.10.30.4.1", &_names[264],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[254], NULLOT, &_types[272], &_types[265]
	},
	{
		"ds3TotalIndex", "1.3.6.1.2.1.10.30.4.1.1", &_names[265],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[255], NULLOT, NULLOT, &_types[266]
	},
	{
		"ds3TotalESs", "1.3.6.1.2.1.10.30.4.1.2", &_names[266],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[260], &_types[265], NULLOT, &_types[267]
	},
	{
		"ds3TotalSESs", "1.3.6.1.2.1.10.30.4.1.3", &_names[267],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[266], &_types[266], NULLOT, &_types[268]
	},
	{
		"ds3TotalSEFSs", "1.3.6.1.2.1.10.30.4.1.4", &_names[268],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[267], &_types[267], NULLOT, &_types[269]
	},
	{
		"ds3TotalUASs", "1.3.6.1.2.1.10.30.4.1.5", &_names[269],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[268], &_types[268], NULLOT, &_types[270]
	},
	{
		"ds3TotalCSSs", "1.3.6.1.2.1.10.30.4.1.6", &_names[270],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[269], &_types[269], NULLOT, &_types[271]
	},
	{
		"ds3TotalBPVs", "1.3.6.1.2.1.10.30.4.1.7", &_names[271],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[262], &_types[270], NULLOT, &_types[272]
	},
	{
		"ds3TotalCVs", "1.3.6.1.2.1.10.30.4.1.8", &_names[272],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[271], &_types[271], NULLOT, &_types[273]
	},
	{
		"snmp", "1.3.6.1.2.1.11", &_names[273],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[125], &_types[177], &_types[301], &_types[274]
	},
	{
		"snmpInPkts", "1.3.6.1.2.1.11.1", &_names[274],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[112], NULLOT, NULLOT, &_types[275]
	},
	{
		"snmpOutPkts", "1.3.6.1.2.1.11.2", &_names[275],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[274], &_types[274], NULLOT, &_types[276]
	},
	{
		"snmpInBadVersions", "1.3.6.1.2.1.11.3", &_names[276],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, &_types[275], NULLOT, &_types[277]
	},
	{
		"snmpInBadCommunityNames", "1.3.6.1.2.1.11.4", &_names[277],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[233], &_types[276], NULLOT, &_types[278]
	},
	{
		"snmpInBadCommunityUses", "1.3.6.1.2.1.11.5", &_names[278],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, &_types[277], NULLOT, &_types[279]
	},
	{
		"snmpInASNParseErrs", "1.3.6.1.2.1.11.6", &_names[279],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[167], &_types[278], NULLOT, &_types[280]
	},
	{
		"snmpInTooBigs", "1.3.6.1.2.1.11.8", &_names[280],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[161], &_types[279], NULLOT, &_types[281]
	},
	{
		"snmpInNoSuchNames", "1.3.6.1.2.1.11.9", &_names[281],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[277], &_types[280], NULLOT, &_types[282]
	},
	{
		"snmpInBadValues", "1.3.6.1.2.1.11.10", &_names[282],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[169], &_types[281], NULLOT, &_types[283]
	},
	{
		"snmpInReadOnlys", "1.3.6.1.2.1.11.11", &_names[283],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[173], &_types[282], NULLOT, &_types[284]
	},
	{
		"snmpInGenErrs", "1.3.6.1.2.1.11.12", &_names[284],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[279], &_types[283], NULLOT, &_types[285]
	},
	{
		"snmpInTotalReqVars", "1.3.6.1.2.1.11.13", &_names[285],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, &_types[284], NULLOT, &_types[286]
	},
	{
		"snmpInTotalSetVars", "1.3.6.1.2.1.11.14", &_names[286],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[285], &_types[285], NULLOT, &_types[287]
	},
	{
		"snmpInGetRequests", "1.3.6.1.2.1.11.15", &_names[287],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[61], &_types[286], NULLOT, &_types[288]
	},
	{
		"snmpInGetNexts", "1.3.6.1.2.1.11.16", &_names[288],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[282], &_types[287], NULLOT, &_types[289]
	},
	{
		"snmpInSetRequests", "1.3.6.1.2.1.11.17", &_names[289],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[287], &_types[288], NULLOT, &_types[290]
	},
	{
		"snmpInGetResponses", "1.3.6.1.2.1.11.18", &_names[290],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[280], &_types[289], NULLOT, &_types[291]
	},
	{
		"snmpInTraps", "1.3.6.1.2.1.11.19", &_names[291],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[177], &_types[290], NULLOT, &_types[292]
	},
	{
		"snmpOutTooBigs", "1.3.6.1.2.1.11.20", &_names[292],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[290], &_types[291], NULLOT, &_types[293]
	},
	{
		"snmpOutNoSuchNames", "1.3.6.1.2.1.11.21", &_names[293],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[281], &_types[292], NULLOT, &_types[294]
	},
	{
		"snmpOutBadValues", "1.3.6.1.2.1.11.22", &_names[294],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[288], &_types[293], NULLOT, &_types[295]
	},
	{
		"snmpOutGenErrs", "1.3.6.1.2.1.11.24", &_names[295],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[284], &_types[294], NULLOT, &_types[296]
	},
	{
		"snmpOutGetRequests", "1.3.6.1.2.1.11.25", &_names[296],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[289], &_types[295], NULLOT, &_types[297]
	},
	{
		"snmpOutGetNexts", "1.3.6.1.2.1.11.26", &_names[297],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[294], &_types[296], NULLOT, &_types[298]
	},
	{
		"snmpOutSetRequests", "1.3.6.1.2.1.11.27", &_names[298],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[296], &_types[297], NULLOT, &_types[299]
	},
	{
		"snmpOutGetResponses", "1.3.6.1.2.1.11.28", &_names[299],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[292], &_types[298], NULLOT, &_types[300]
	},
	{
		"snmpOutTraps", "1.3.6.1.2.1.11.29", &_names[300],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[291], &_types[299], NULLOT, &_types[301]
	},
	{
		"snmpEnableAuthenTraps", "1.3.6.1.2.1.11.30", &_names[301],
		(OS) 26, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[300], &_types[300], NULLOT, &_types[302]
	},
	{
		"ifExtensions", "1.3.6.1.2.1.12", &_names[302],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[297], &_types[273], &_types[326], &_types[303]
	},
	{
		"ifExtnsTable", "1.3.6.1.2.1.12.1", &_names[303],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[263], NULLOT, &_types[304], &_types[304]
	},
	{
		"ifExtnsEntry", "1.3.6.1.2.1.12.1.1", &_names[304],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[264], NULLOT, &_types[312], &_types[305]
	},
	{
		"ifExtnsIfIndex", "1.3.6.1.2.1.12.1.1.1", &_names[305],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[265], NULLOT, NULLOT, &_types[306]
	},
	{
		"ifExtnsChipSet", "1.3.6.1.2.1.12.1.1.2", &_names[306],
		(OS) 6, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[174], &_types[305], NULLOT, &_types[307]
	},
	{
		"ifExtnsRevWare", "1.3.6.1.2.1.12.1.1.3", &_names[307],
		(OS) 4, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, &_types[306], NULLOT, &_types[308]
	},
	{
		"ifExtnsMulticastsTransmittedOks", "1.3.6.1.2.1.12.1.1.4", &_names[308],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[149], &_types[307], NULLOT, &_types[309]
	},
	{
		"ifExtnsBroadcastsTransmittedOks", "1.3.6.1.2.1.12.1.1.5", &_names[309],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[308], &_types[308], NULLOT, &_types[310]
	},
	{
		"ifExtnsMulticastsReceivedOks", "1.3.6.1.2.1.12.1.1.6", &_names[310],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[309], &_types[309], NULLOT, &_types[311]
	},
	{
		"ifExtnsBroadcastsReceivedOks", "1.3.6.1.2.1.12.1.1.7", &_names[311],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[310], &_types[310], NULLOT, &_types[312]
	},
	{
		"ifExtnsPromiscuous", "1.3.6.1.2.1.12.1.1.8", &_names[312],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[114], &_types[311], NULLOT, &_types[313]
	},
	{
		"ifExtnsTestTable", "1.3.6.1.2.1.12.2", &_names[313],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[303], &_types[303], &_types[314], &_types[314]
	},
	{
		"ifExtnsTestEntry", "1.3.6.1.2.1.12.2.1", &_names[314],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[304], NULLOT, &_types[320], &_types[315]
	},
	{
		"ifExtnsTestIfIndex", "1.3.6.1.2.1.12.2.1.1", &_names[315],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[305], NULLOT, NULLOT, &_types[316]
	},
	{
		"ifExtnsTestCommunity", "1.3.6.1.2.1.12.2.1.2", &_names[316],
		(OS) 3, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[302], &_types[315], NULLOT, &_types[317]
	},
	{
		"ifExtnsTestRequestId", "1.3.6.1.2.1.12.2.1.3", &_names[317],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, &_types[316], NULLOT, &_types[318]
	},
	{
		"ifExtnsTestType", "1.3.6.1.2.1.12.2.1.4", &_names[318],
		(OS) 6, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[314], &_types[317], NULLOT, &_types[319]
	},
	{
		"ifExtnsTestResult", "1.3.6.1.2.1.12.2.1.5", &_names[319],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[299], &_types[318], NULLOT, &_types[320]
	},
	{
		"ifExtnsTestCode", "1.3.6.1.2.1.12.2.1.6", &_names[320],
		(OS) 6, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[238], &_types[319], NULLOT, &_types[321]
	},
	{
		"ifExtnsRcvAddrTable", "1.3.6.1.2.1.12.3", &_names[321],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[313], &_types[313], &_types[322], &_types[322]
	},
	{
		"ifExtnsRcvAddrEntry", "1.3.6.1.2.1.12.3.1", &_names[322],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[318], NULLOT, &_types[325], &_types[323]
	},
	{
		"ifExtnsRcvAddrIfIndex", "1.3.6.1.2.1.12.3.1.1", &_names[323],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[315], NULLOT, NULLOT, &_types[324]
	},
	{
		"ifExtnsRcvAddress", "1.3.6.1.2.1.12.3.1.2", &_names[324],
		(OS) 5, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[316], &_types[323], NULLOT, &_types[325]
	},
	{
		"ifExtnsRcvAddrStatus", "1.3.6.1.2.1.12.3.1.3", &_names[325],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[319], &_types[324], NULLOT, &_types[326]
	},
	{
		"wellKnownTests", "1.3.6.1.2.1.12.4", &_names[326],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[306], &_types[321], &_types[327], &_types[327]
	},
	{
		"testFullDuplexLoopBack", "1.3.6.1.2.1.12.4.1", &_names[327],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, NULLOT, NULLOT, &_types[328]
	},
	{
		"appletalk", "1.3.6.1.2.1.13", &_names[328],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[324], &_types[302], &_types[416], &_types[329]
	},
	{
		"llap", "1.3.6.1.2.1.13.1", &_names[329],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, NULLOT, &_types[330], &_types[330]
	},
	{
		"llapTable", "1.3.6.1.2.1.13.1.1", &_names[330],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[321], NULLOT, &_types[331], &_types[331]
	},
	{
		"llapEntry", "1.3.6.1.2.1.13.1.1.1", &_names[331],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[322], NULLOT, &_types[342], &_types[332]
	},
	{
		"llapIfIndex", "1.3.6.1.2.1.13.1.1.1.1", &_names[332],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[323], NULLOT, NULLOT, &_types[333]
	},
	{
		"llapInPkts", "1.3.6.1.2.1.13.1.1.1.2", &_names[333],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[275], &_types[332], NULLOT, &_types[334]
	},
	{
		"llapOutPkts", "1.3.6.1.2.1.13.1.1.1.3", &_names[334],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[333], &_types[333], NULLOT, &_types[335]
	},
	{
		"llapInNoHandlers", "1.3.6.1.2.1.13.1.1.1.4", &_names[335],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[330], &_types[334], NULLOT, &_types[336]
	},
	{
		"llapInLengthErrors", "1.3.6.1.2.1.13.1.1.1.5", &_names[336],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[295], &_types[335], NULLOT, &_types[337]
	},
	{
		"llapInErrors", "1.3.6.1.2.1.13.1.1.1.6", &_names[337],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[336], &_types[336], NULLOT, &_types[338]
	},
	{
		"llapCollisions", "1.3.6.1.2.1.13.1.1.1.7", &_names[338],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[325], &_types[337], NULLOT, &_types[339]
	},
	{
		"llapDefers", "1.3.6.1.2.1.13.1.1.1.8", &_names[339],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[337], &_types[338], NULLOT, &_types[340]
	},
	{
		"llapNoDataErrors", "1.3.6.1.2.1.13.1.1.1.9", &_names[340],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[339], &_types[339], NULLOT, &_types[341]
	},
	{
		"llapRandomCTSErrors", "1.3.6.1.2.1.13.1.1.1.10", &_names[341],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[340], &_types[340], NULLOT, &_types[342]
	},
	{
		"llapFCSErrors", "1.3.6.1.2.1.13.1.1.1.11", &_names[342],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[341], &_types[341], NULLOT, &_types[343]
	},
	{
		"aarp", "1.3.6.1.2.1.13.2", &_names[343],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[273], &_types[329], &_types[344], &_types[344]
	},
	{
		"aarpTable", "1.3.6.1.2.1.13.2.1", &_names[344],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[335], NULLOT, &_types[345], &_types[345]
	},
	{
		"aarpEntry", "1.3.6.1.2.1.13.2.1.1", &_names[345],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[331], NULLOT, &_types[348], &_types[346]
	},
	{
		"aarpIfIndex", "1.3.6.1.2.1.13.2.1.1.1", &_names[346],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[332], NULLOT, NULLOT, &_types[347]
	},
	{
		"aarpPhysAddress", "1.3.6.1.2.1.13.2.1.1.2", &_names[347],
		(OS) 3, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[328], &_types[346], NULLOT, &_types[348]
	},
	{
		"aarpNetAddress", "1.3.6.1.2.1.13.2.1.1.3", &_names[348],
		(OS) 3, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[347], &_types[347], NULLOT, &_types[349]
	},
	{
		"atport", "1.3.6.1.2.1.13.3", &_names[349],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[122], &_types[343], &_types[350], &_types[350]
	},
	{
		"atportTable", "1.3.6.1.2.1.13.3.1", &_names[350],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[344], NULLOT, &_types[351], &_types[351]
	},
	{
		"atportEntry", "1.3.6.1.2.1.13.3.1.1", &_names[351],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[345], NULLOT, &_types[362], &_types[352]
	},
	{
		"atportIndex", "1.3.6.1.2.1.13.3.1.1.1", &_names[352],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[346], NULLOT, NULLOT, &_types[353]
	},
	{
		"atportDescr", "1.3.6.1.2.1.13.3.1.1.2", &_names[353],
		(OS) 4, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[76], &_types[352], NULLOT, &_types[354]
	},
	{
		"atportType", "1.3.6.1.2.1.13.3.1.1.3", &_names[354],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[351], &_types[353], NULLOT, &_types[355]
	},
	{
		"atportNetStart", "1.3.6.1.2.1.13.3.1.1.4", &_names[355],
		(OS) 3, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[338], &_types[354], NULLOT, &_types[356]
	},
	{
		"atportNetEnd", "1.3.6.1.2.1.13.3.1.1.5", &_names[356],
		(OS) 3, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, &_types[355], NULLOT, &_types[357]
	},
	{
		"atportNetAddress", "1.3.6.1.2.1.13.3.1.1.6", &_names[357],
		(OS) 3, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[348], &_types[356], NULLOT, &_types[358]
	},
	{
		"atportStatus", "1.3.6.1.2.1.13.3.1.1.7", &_names[358],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[355], &_types[357], NULLOT, &_types[359]
	},
	{
		"atportNetConfig", "1.3.6.1.2.1.13.3.1.1.8", &_names[359],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[326], &_types[358], NULLOT, &_types[360]
	},
	{
		"atportZoneConfig", "1.3.6.1.2.1.13.3.1.1.9", &_names[360],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[359], &_types[359], NULLOT, &_types[361]
	},
	{
		"atportZone", "1.3.6.1.2.1.13.3.1.1.10", &_names[361],
		(OS) 3, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[334], &_types[360], NULLOT, &_types[362]
	},
	{
		"atportIfIndex", "1.3.6.1.2.1.13.3.1.1.11", &_names[362],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[352], &_types[361], NULLOT, &_types[363]
	},
	{
		"ddp", "1.3.6.1.2.1.13.4", &_names[363],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[113], &_types[349], &_types[377], &_types[364]
	},
	{
		"ddpOutRequests", "1.3.6.1.2.1.13.4.1", &_names[364],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[298], NULLOT, NULLOT, &_types[365]
	},
	{
		"ddpOutShorts", "1.3.6.1.2.1.13.4.2", &_names[365],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[293], &_types[364], NULLOT, &_types[366]
	},
	{
		"ddpOutLongs", "1.3.6.1.2.1.13.4.3", &_names[366],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[354], &_types[365], NULLOT, &_types[367]
	},
	{
		"ddpInReceives", "1.3.6.1.2.1.13.4.4", &_names[367],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[363], &_types[366], NULLOT, &_types[368]
	},
	{
		"ddpForwRequests", "1.3.6.1.2.1.13.4.5", &_names[368],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[364], &_types[367], NULLOT, &_types[369]
	},
	{
		"ddpInLocalDatagrams", "1.3.6.1.2.1.13.4.6", &_names[369],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[311], &_types[368], NULLOT, &_types[370]
	},
	{
		"ddpNoProtocolHandlers", "1.3.6.1.2.1.13.4.7", &_names[370],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[350], &_types[369], NULLOT, &_types[371]
	},
	{
		"ddpOutNoRoutes", "1.3.6.1.2.1.13.4.8", &_names[371],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[320], &_types[370], NULLOT, &_types[372]
	},
	{
		"ddpTooShortErrors", "1.3.6.1.2.1.13.4.9", &_names[372],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[342], &_types[371], NULLOT, &_types[373]
	},
	{
		"ddpTooLongErrors", "1.3.6.1.2.1.13.4.10", &_names[373],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[372], &_types[372], NULLOT, &_types[374]
	},
	{
		"ddpBroadcastErrors", "1.3.6.1.2.1.13.4.11", &_names[374],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[373], &_types[373], NULLOT, &_types[375]
	},
	{
		"ddpShortDDPErrors", "1.3.6.1.2.1.13.4.12", &_names[375],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[374], &_types[374], NULLOT, &_types[376]
	},
	{
		"ddpHopCountErrors", "1.3.6.1.2.1.13.4.13", &_names[376],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[375], &_types[375], NULLOT, &_types[377]
	},
	{
		"ddpChecksumErrors", "1.3.6.1.2.1.13.4.14", &_names[377],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[376], &_types[376], NULLOT, &_types[378]
	},
	{
		"rtmp", "1.3.6.1.2.1.13.5", &_names[378],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[366], &_types[363], &_types[379], &_types[379]
	},
	{
		"rtmpTable", "1.3.6.1.2.1.13.5.1", &_names[379],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[370], NULLOT, &_types[380], &_types[380]
	},
	{
		"rtmpEntry", "1.3.6.1.2.1.13.5.1.1", &_names[380],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[378], NULLOT, &_types[387], &_types[381]
	},
	{
		"rtmpRangeStart", "1.3.6.1.2.1.13.5.1.1.1", &_names[381],
		(OS) 3, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[358], NULLOT, NULLOT, &_types[382]
	},
	{
		"rtmpRangeEnd", "1.3.6.1.2.1.13.5.1.1.2", &_names[382],
		(OS) 3, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[356], &_types[381], NULLOT, &_types[383]
	},
	{
		"rtmpNextHop", "1.3.6.1.2.1.13.5.1.1.3", &_names[383],
		(OS) 3, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[82], &_types[382], NULLOT, &_types[384]
	},
	{
		"rtmpType", "1.3.6.1.2.1.13.5.1.1.4", &_names[384],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[380], &_types[383], NULLOT, &_types[385]
	},
	{
		"rtmpPort", "1.3.6.1.2.1.13.5.1.1.5", &_names[385],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[153], &_types[384], NULLOT, &_types[386]
	},
	{
		"rtmpHops", "1.3.6.1.2.1.13.5.1.1.6", &_names[386],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[383], &_types[385], NULLOT, &_types[387]
	},
	{
		"rtmpState", "1.3.6.1.2.1.13.5.1.1.7", &_names[387],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[381], &_types[386], NULLOT, &_types[388]
	},
	{
		"kip", "1.3.6.1.2.1.13.6", &_names[388],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[343], &_types[378], &_types[389], &_types[389]
	},
	{
		"kipTable", "1.3.6.1.2.1.13.6.1", &_names[389],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[379], NULLOT, &_types[390], &_types[390]
	},
	{
		"kipEntry", "1.3.6.1.2.1.13.6.1.1", &_names[390],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[384], NULLOT, &_types[399], &_types[391]
	},
	{
		"kipNetStart", "1.3.6.1.2.1.13.6.1.1.1", &_names[391],
		(OS) 3, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[387], NULLOT, NULLOT, &_types[392]
	},
	{
		"kipNetEnd", "1.3.6.1.2.1.13.6.1.1.2", &_names[392],
		(OS) 3, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[382], &_types[391], NULLOT, &_types[393]
	},
	{
		"kipNextHop", "1.3.6.1.2.1.13.6.1.1.3", &_names[393],
		(OS) 8, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[386], &_types[392], NULLOT, &_types[394]
	},
	{
		"kipHopCount", "1.3.6.1.2.1.13.6.1.1.4", &_names[394],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[393], &_types[393], NULLOT, &_types[395]
	},
	{
		"kipBCastAddr", "1.3.6.1.2.1.13.6.1.1.5", &_names[395],
		(OS) 8, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[357], &_types[394], NULLOT, &_types[396]
	},
	{
		"kipCore", "1.3.6.1.2.1.13.6.1.1.6", &_names[396],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[245], &_types[395], NULLOT, &_types[397]
	},
	{
		"kipType", "1.3.6.1.2.1.13.6.1.1.7", &_names[397],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[390], &_types[396], NULLOT, &_types[398]
	},
	{
		"kipState", "1.3.6.1.2.1.13.6.1.1.8", &_names[398],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[391], &_types[397], NULLOT, &_types[399]
	},
	{
		"kipShare", "1.3.6.1.2.1.13.6.1.1.9", &_names[399],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, &_types[398], NULLOT, &_types[400]
	},
	{
		"zip", "1.3.6.1.2.1.13.7", &_names[400],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[395], &_types[388], &_types[401], &_types[401]
	},
	{
		"zipTable", "1.3.6.1.2.1.13.7.1", &_names[401],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[389], NULLOT, &_types[402], &_types[402]
	},
	{
		"zipEntry", "1.3.6.1.2.1.13.7.1.1", &_names[402],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[397], NULLOT, &_types[407], &_types[403]
	},
	{
		"zipZoneName", "1.3.6.1.2.1.13.7.1.1.1", &_names[403],
		(OS) 3, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[365], NULLOT, NULLOT, &_types[404]
	},
	{
		"zipZoneIndex", "1.3.6.1.2.1.13.7.1.1.2", &_names[404],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[362], &_types[403], NULLOT, &_types[405]
	},
	{
		"zipZoneNetStart", "1.3.6.1.2.1.13.7.1.1.3", &_names[405],
		(OS) 3, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[398], &_types[404], NULLOT, &_types[406]
	},
	{
		"zipZoneNetEnd", "1.3.6.1.2.1.13.7.1.1.4", &_names[406],
		(OS) 3, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[392], &_types[405], NULLOT, &_types[407]
	},
	{
		"zipZoneState", "1.3.6.1.2.1.13.7.1.1.5", &_names[407],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[405], &_types[406], NULLOT, &_types[408]
	},
	{
		"nbp", "1.3.6.1.2.1.13.8", &_names[408],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[124], &_types[400], &_types[409], &_types[409]
	},
	{
		"nbpTable", "1.3.6.1.2.1.13.8.1", &_names[409],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[401], NULLOT, &_types[410], &_types[410]
	},
	{
		"nbpEntry", "1.3.6.1.2.1.13.8.1.1", &_names[410],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[402], NULLOT, &_types[415], &_types[411]
	},
	{
		"nbpIndex", "1.3.6.1.2.1.13.8.1.1.1", &_names[411],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[404], NULLOT, NULLOT, &_types[412]
	},
	{
		"nbpObject", "1.3.6.1.2.1.13.8.1.1.2", &_names[412],
		(OS) 3, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[369], &_types[411], NULLOT, &_types[413]
	},
	{
		"nbpType", "1.3.6.1.2.1.13.8.1.1.3", &_names[413],
		(OS) 3, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[410], &_types[412], NULLOT, &_types[414]
	},
	{
		"nbpZone", "1.3.6.1.2.1.13.8.1.1.4", &_names[414],
		(OS) 3, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[361], &_types[413], NULLOT, &_types[415]
	},
	{
		"nbpState", "1.3.6.1.2.1.13.8.1.1.5", &_names[415],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[407], &_types[414], NULLOT, &_types[416]
	},
	{
		"atecho", "1.3.6.1.2.1.13.9", &_names[416],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[388], &_types[408], &_types[418], &_types[417]
	},
	{
		"atechoRequests", "1.3.6.1.2.1.13.9.1", &_names[417],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[368], NULLOT, NULLOT, &_types[418]
	},
	{
		"atechoReplies", "1.3.6.1.2.1.13.9.2", &_names[418],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[349], &_types[417], NULLOT, &_types[419]
	},
	{
		"ospf", "1.3.6.1.2.1.14", &_names[419],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[237], &_types[328], &_types[517], &_types[420]
	},
	{
		"ospfGeneralGroup", "1.3.6.1.2.1.14.1", &_names[420],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[129], NULLOT, &_types[430], &_types[421]
	},
	{
		"ospfRouterId", "1.3.6.1.2.1.14.1.1", &_names[421],
		(OS) 8, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[317], NULLOT, NULLOT, &_types[422]
	},
	{
		"ospfAdminStat", "1.3.6.1.2.1.14.1.2", &_names[422],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[415], &_types[421], NULLOT, &_types[423]
	},
	{
		"ospfVersionNumber", "1.3.6.1.2.1.14.1.3", &_names[423],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[396], &_types[422], NULLOT, &_types[424]
	},
	{
		"ospfAreaBdrRtrStatus", "1.3.6.1.2.1.14.1.4", &_names[424],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[422], &_types[423], NULLOT, &_types[425]
	},
	{
		"ospfASBdrRtrStatus", "1.3.6.1.2.1.14.1.5", &_names[425],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[424], &_types[424], NULLOT, &_types[426]
	},
	{
		"ospfExternLSACount", "1.3.6.1.2.1.14.1.6", &_names[426],
		(OS) 11, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[394], &_types[425], NULLOT, &_types[427]
	},
	{
		"ospfExternLSACksumSum", "1.3.6.1.2.1.14.1.7", &_names[427],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[413], &_types[426], NULLOT, &_types[428]
	},
	{
		"ospfTOSSupport", "1.3.6.1.2.1.14.1.8", &_names[428],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[154], &_types[427], NULLOT, &_types[429]
	},
	{
		"ospfOriginateNewLSAs", "1.3.6.1.2.1.14.1.9", &_names[429],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[176], &_types[428], NULLOT, &_types[430]
	},
	{
		"ospfRxNewLSAs", "1.3.6.1.2.1.14.1.10", &_names[430],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[429], &_types[429], NULLOT, &_types[431]
	},
	{
		"ospfAreaTable", "1.3.6.1.2.1.14.2", &_names[431],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[409], &_types[420], &_types[432], &_types[432]
	},
	{
		"ospfAreaEntry", "1.3.6.1.2.1.14.2.1", &_names[432],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[427], NULLOT, &_types[440], &_types[433]
	},
	{
		"ospfAreaId", "1.3.6.1.2.1.14.2.1.1", &_names[433],
		(OS) 8, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[421], NULLOT, NULLOT, &_types[434]
	},
	{
		"ospfAuthType", "1.3.6.1.2.1.14.2.1.2", &_names[434],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[432], &_types[433], NULLOT, &_types[435]
	},
	{
		"ospfImportASExtern", "1.3.6.1.2.1.14.2.1.3", &_names[435],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[400], &_types[434], NULLOT, &_types[436]
	},
	{
		"ospfSpfRuns", "1.3.6.1.2.1.14.2.1.4", &_names[436],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[434], &_types[435], NULLOT, &_types[437]
	},
	{
		"ospfAreaBdrRtrCount", "1.3.6.1.2.1.14.2.1.5", &_names[437],
		(OS) 11, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[426], &_types[436], NULLOT, &_types[438]
	},
	{
		"ospfASBdrRtrCount", "1.3.6.1.2.1.14.2.1.6", &_names[438],
		(OS) 11, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[437], &_types[437], NULLOT, &_types[439]
	},
	{
		"ospfAreaLSACount", "1.3.6.1.2.1.14.2.1.7", &_names[439],
		(OS) 11, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[438], &_types[438], NULLOT, &_types[440]
	},
	{
		"ospfAreaLSACksumSum", "1.3.6.1.2.1.14.2.1.8", &_names[440],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[436], &_types[439], NULLOT, &_types[441]
	},
	{
		"ospfStubAreaTable", "1.3.6.1.2.1.14.3", &_names[441],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[431], &_types[431], &_types[442], &_types[442]
	},
	{
		"ospfStubAreaEntry", "1.3.6.1.2.1.14.3.1", &_names[442],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[440], NULLOT, &_types[446], &_types[443]
	},
	{
		"ospfStubAreaID", "1.3.6.1.2.1.14.3.1.1", &_names[443],
		(OS) 8, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[420], NULLOT, NULLOT, &_types[444]
	},
	{
		"ospfStubTOS", "1.3.6.1.2.1.14.3.1.2", &_names[444],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[144], &_types[443], NULLOT, &_types[445]
	},
	{
		"ospfStubMetric", "1.3.6.1.2.1.14.3.1.3", &_names[445],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[408], &_types[444], NULLOT, &_types[446]
	},
	{
		"ospfStubStatus", "1.3.6.1.2.1.14.3.1.4", &_names[446],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[425], &_types[445], NULLOT, &_types[447]
	},
	{
		"ospfLsdbTable", "1.3.6.1.2.1.14.4", &_names[447],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[441], &_types[441], &_types[448], &_types[448]
	},
	{
		"ospfLsdbEntry", "1.3.6.1.2.1.14.4.1", &_names[448],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[442], NULLOT, &_types[456], &_types[449]
	},
	{
		"ospfLsdbAreaId", "1.3.6.1.2.1.14.4.1.1", &_names[449],
		(OS) 8, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[433], NULLOT, NULLOT, &_types[450]
	},
	{
		"ospfLsdbType", "1.3.6.1.2.1.14.4.1.2", &_names[450],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[448], &_types[449], NULLOT, &_types[451]
	},
	{
		"ospfLsdbLSID", "1.3.6.1.2.1.14.4.1.3", &_names[451],
		(OS) 8, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[443], &_types[450], NULLOT, &_types[452]
	},
	{
		"ospfLsdbRouterId", "1.3.6.1.2.1.14.4.1.4", &_names[452],
		(OS) 8, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[449], &_types[451], NULLOT, &_types[453]
	},
	{
		"ospfLsdbSequence", "1.3.6.1.2.1.14.4.1.5", &_names[453],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[411], &_types[452], NULLOT, &_types[454]
	},
	{
		"ospfLsdbAge", "1.3.6.1.2.1.14.4.1.6", &_names[454],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[453], &_types[453], NULLOT, &_types[455]
	},
	{
		"ospfLsdbChecksum", "1.3.6.1.2.1.14.4.1.7", &_names[455],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[446], &_types[454], NULLOT, &_types[456]
	},
	{
		"ospfLsdbAdvertisement", "1.3.6.1.2.1.14.4.1.8", &_names[456],
		(OS) 3, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[444], &_types[455], NULLOT, &_types[457]
	},
	{
		"ospfAreaRangeTable", "1.3.6.1.2.1.14.5", &_names[457],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[447], &_types[447], &_types[458], &_types[458]
	},
	{
		"ospfAreaRangeEntry", "1.3.6.1.2.1.14.5.1", &_names[458],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[450], NULLOT, &_types[462], &_types[459]
	},
	{
		"ospfAreaRangeAreaID", "1.3.6.1.2.1.14.5.1.1", &_names[459],
		(OS) 8, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[451], NULLOT, NULLOT, &_types[460]
	},
	{
		"ospfAreaRangeNet", "1.3.6.1.2.1.14.5.1.2", &_names[460],
		(OS) 8, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[418], &_types[459], NULLOT, &_types[461]
	},
	{
		"ospfAreaRangeMask", "1.3.6.1.2.1.14.5.1.3", &_names[461],
		(OS) 8, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[454], &_types[460], NULLOT, &_types[462]
	},
	{
		"ospfAreaRangeStatus", "1.3.6.1.2.1.14.5.1.4", &_names[462],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[455], &_types[461], NULLOT, &_types[463]
	},
	{
		"ospfHostTable", "1.3.6.1.2.1.14.6", &_names[463],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[457], &_types[457], &_types[464], &_types[464]
	},
	{
		"ospfHostEntry", "1.3.6.1.2.1.14.6.1", &_names[464],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[458], NULLOT, &_types[468], &_types[465]
	},
	{
		"ospfHostIpAddress", "1.3.6.1.2.1.14.6.1.1", &_names[465],
		(OS) 8, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[435], NULLOT, NULLOT, &_types[466]
	},
	{
		"ospfHostTOS", "1.3.6.1.2.1.14.6.1.2", &_names[466],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[456], &_types[465], NULLOT, &_types[467]
	},
	{
		"ospfHostMetric", "1.3.6.1.2.1.14.6.1.3", &_names[467],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[445], &_types[466], NULLOT, &_types[468]
	},
	{
		"ospfHostStatus", "1.3.6.1.2.1.14.6.1.4", &_names[468],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[462], &_types[467], NULLOT, &_types[469]
	},
	{
		"ospfIfTable", "1.3.6.1.2.1.14.7", &_names[469],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[463], &_types[463], &_types[470], &_types[470]
	},
	{
		"ospfIfEntry", "1.3.6.1.2.1.14.7.1", &_names[470],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[464], NULLOT, &_types[486], &_types[471]
	},
	{
		"ospfIfIpAddress", "1.3.6.1.2.1.14.7.1.1", &_names[471],
		(OS) 8, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[465], NULLOT, NULLOT, &_types[472]
	},
	{
		"ospfAddressLessIf", "1.3.6.1.2.1.14.7.1.2", &_names[472],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[272], &_types[471], NULLOT, &_types[473]
	},
	{
		"ospfIfAreaId", "1.3.6.1.2.1.14.7.1.3", &_names[473],
		(OS) 8, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[452], &_types[472], NULLOT, &_types[474]
	},
	{
		"ospfIfType", "1.3.6.1.2.1.14.7.1.4", &_names[474],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[470], &_types[473], NULLOT, &_types[475]
	},
	{
		"ospfIfAdminStat", "1.3.6.1.2.1.14.7.1.5", &_names[475],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[468], &_types[474], NULLOT, &_types[476]
	},
	{
		"ospfIfRtrPriority", "1.3.6.1.2.1.14.7.1.6", &_names[476],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[286], &_types[475], NULLOT, &_types[477]
	},
	{
		"ospfIfTransitDelay", "1.3.6.1.2.1.14.7.1.7", &_names[477],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[474], &_types[476], NULLOT, &_types[478]
	},
	{
		"ospfIfRetransInterval", "1.3.6.1.2.1.14.7.1.8", &_names[478],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[234], &_types[477], NULLOT, &_types[479]
	},
	{
		"ospfIfHelloInterval", "1.3.6.1.2.1.14.7.1.9", &_names[479],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[478], &_types[478], NULLOT, &_types[480]
	},
	{
		"ospfIfRtrDeadInterval", "1.3.6.1.2.1.14.7.1.10", &_names[480],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[479], &_types[479], NULLOT, &_types[481]
	},
	{
		"ospfIfPollInterval", "1.3.6.1.2.1.14.7.1.11", &_names[481],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[480], &_types[480], NULLOT, &_types[482]
	},
	{
		"ospfIfState", "1.3.6.1.2.1.14.7.1.12", &_names[482],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[475], &_types[481], NULLOT, &_types[483]
	},
	{
		"ospfIfDesignatedRouter", "1.3.6.1.2.1.14.7.1.13", &_names[483],
		(OS) 8, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[371], &_types[482], NULLOT, &_types[484]
	},
	{
		"ospfIfBackupDesignatedRouter", "1.3.6.1.2.1.14.7.1.14", &_names[484],
		(OS) 8, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[483], &_types[483], NULLOT, &_types[485]
	},
	{
		"ospfIfEvents", "1.3.6.1.2.1.14.7.1.15", &_names[485],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, &_types[484], NULLOT, &_types[486]
	},
	{
		"ospfIfAuthKey", "1.3.6.1.2.1.14.7.1.16", &_names[486],
		(OS) 3, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[461], &_types[485], NULLOT, &_types[487]
	},
	{
		"ospfIfMetricTable", "1.3.6.1.2.1.14.8", &_names[487],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[469], &_types[469], &_types[488], &_types[488]
	},
	{
		"ospfIfMetricEntry", "1.3.6.1.2.1.14.8.1", &_names[488],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[477], NULLOT, &_types[493], &_types[489]
	},
	{
		"ospfIfMetricIpAddress", "1.3.6.1.2.1.14.8.1.1", &_names[489],
		(OS) 8, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[471], NULLOT, NULLOT, &_types[490]
	},
	{
		"ospfIfMetricAddressLessIf", "1.3.6.1.2.1.14.8.1.2", &_names[490],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[472], &_types[489], NULLOT, &_types[491]
	},
	{
		"ospfIfMetricTOS", "1.3.6.1.2.1.14.8.1.3", &_names[491],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[466], &_types[490], NULLOT, &_types[492]
	},
	{
		"ospfIfMetricMetric", "1.3.6.1.2.1.14.8.1.4", &_names[492],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[467], &_types[491], NULLOT, &_types[493]
	},
	{
		"ospfIfMetricStatus", "1.3.6.1.2.1.14.8.1.5", &_names[493],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[482], &_types[492], NULLOT, &_types[494]
	},
	{
		"ospfVirtIfTable", "1.3.6.1.2.1.14.9", &_names[494],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[487], &_types[487], &_types[495], &_types[495]
	},
	{
		"ospfVirtIfEntry", "1.3.6.1.2.1.14.9.1", &_names[495],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[488], NULLOT, &_types[505], &_types[496]
	},
	{
		"ospfVirtIfAreaID", "1.3.6.1.2.1.14.9.1.1", &_names[496],
		(OS) 8, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[459], NULLOT, NULLOT, &_types[497]
	},
	{
		"ospfVirtIfNeighbor", "1.3.6.1.2.1.14.9.1.2", &_names[497],
		(OS) 8, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[416], &_types[496], NULLOT, &_types[498]
	},
	{
		"ospfVirtIfTransitDelay", "1.3.6.1.2.1.14.9.1.3", &_names[498],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[495], &_types[497], NULLOT, &_types[499]
	},
	{
		"ospfVirtIfRetransInterval", "1.3.6.1.2.1.14.9.1.4", &_names[499],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[481], &_types[498], NULLOT, &_types[500]
	},
	{
		"ospfVirtIfHelloInterval", "1.3.6.1.2.1.14.9.1.5", &_names[500],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[499], &_types[499], NULLOT, &_types[501]
	},
	{
		"ospfVirtIfRtrDeadInterval", "1.3.6.1.2.1.14.9.1.6", &_names[501],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[500], &_types[500], NULLOT, &_types[502]
	},
	{
		"ospfVirtIfState", "1.3.6.1.2.1.14.9.1.7", &_names[502],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[493], &_types[501], NULLOT, &_types[503]
	},
	{
		"ospfVirtIfEvents", "1.3.6.1.2.1.14.9.1.8", &_names[503],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[485], &_types[502], NULLOT, &_types[504]
	},
	{
		"ospfVirtIfAuthKey", "1.3.6.1.2.1.14.9.1.9", &_names[504],
		(OS) 3, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[486], &_types[503], NULLOT, &_types[505]
	},
	{
		"ospfVirtIfStatus", "1.3.6.1.2.1.14.9.1.10", &_names[505],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[502], &_types[504], NULLOT, &_types[506]
	},
	{
		"ospfNbrTable", "1.3.6.1.2.1.14.10", &_names[506],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[494], &_types[494], &_types[507], &_types[507]
	},
	{
		"ospfNbrEntry", "1.3.6.1.2.1.14.10.1", &_names[507],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[498], NULLOT, &_types[516], &_types[508]
	},
	{
		"ospfNbrIpAddr", "1.3.6.1.2.1.14.10.1.1", &_names[508],
		(OS) 8, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[489], NULLOT, NULLOT, &_types[509]
	},
	{
		"ospfNbrAddressLessIndex", "1.3.6.1.2.1.14.10.1.2", &_names[509],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[504], &_types[508], NULLOT, &_types[510]
	},
	{
		"ospfNbrRtrId", "1.3.6.1.2.1.14.10.1.3", &_names[510],
		(OS) 8, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[473], &_types[509], NULLOT, &_types[511]
	},
	{
		"ospfNbrOptions", "1.3.6.1.2.1.14.10.1.4", &_names[511],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[491], &_types[510], NULLOT, &_types[512]
	},
	{
		"ospfNbrPriority", "1.3.6.1.2.1.14.10.1.5", &_names[512],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[476], &_types[511], NULLOT, &_types[513]
	},
	{
		"ospfNbrState", "1.3.6.1.2.1.14.10.1.6", &_names[513],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[505], &_types[512], NULLOT, &_types[514]
	},
	{
		"ospfNbrEvents", "1.3.6.1.2.1.14.10.1.7", &_names[514],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[503], &_types[513], NULLOT, &_types[515]
	},
	{
		"ospfNbrLSRetransQLen", "1.3.6.1.2.1.14.10.1.8", &_names[515],
		(OS) 11, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[506], &_types[514], NULLOT, &_types[516]
	},
	{
		"ospfNBMANbrStatus", "1.3.6.1.2.1.14.10.1.9", &_names[516],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[513], &_types[515], NULLOT, &_types[517]
	},
	{
		"ospfVirtNbrTable", "1.3.6.1.2.1.14.11", &_names[517],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[515], &_types[506], &_types[518], &_types[518]
	},
	{
		"ospfVirtNbrEntry", "1.3.6.1.2.1.14.11.1", &_names[518],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[507], NULLOT, &_types[525], &_types[519]
	},
	{
		"ospfVirtNbrArea", "1.3.6.1.2.1.14.11.1.1", &_names[519],
		(OS) 8, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[514], NULLOT, NULLOT, &_types[520]
	},
	{
		"ospfVirtNbrRtrId", "1.3.6.1.2.1.14.11.1.2", &_names[520],
		(OS) 8, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[510], &_types[519], NULLOT, &_types[521]
	},
	{
		"ospfVirtNbrIpAddr", "1.3.6.1.2.1.14.11.1.3", &_names[521],
		(OS) 8, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[508], &_types[520], NULLOT, &_types[522]
	},
	{
		"ospfVirtNbrOptions", "1.3.6.1.2.1.14.11.1.4", &_names[522],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[511], &_types[521], NULLOT, &_types[523]
	},
	{
		"ospfVirtNbrState", "1.3.6.1.2.1.14.11.1.5", &_names[523],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[516], &_types[522], NULLOT, &_types[524]
	},
	{
		"ospfVirtNbrEvents", "1.3.6.1.2.1.14.11.1.6", &_names[524],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[519], &_types[523], NULLOT, &_types[525]
	},
	{
		"ospfVirtNbrLSRetransQLen", "1.3.6.1.2.1.14.11.1.7", &_names[525],
		(OS) 11, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[517], &_types[524], NULLOT, &_types[526]
	},
	{
		"bgp", "1.3.6.1.2.1.15", &_names[526],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[518], &_types[419], &_types[546], &_types[527]
	},
	{
		"bgpVersion", "1.3.6.1.2.1.15.1", &_names[527],
		(OS) 3, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[276], NULLOT, NULLOT, &_types[528]
	},
	{
		"bgpLocalAs", "1.3.6.1.2.1.15.2", &_names[528],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[430], &_types[527], NULLOT, &_types[529]
	},
	{
		"bgpPeerTable", "1.3.6.1.2.1.15.3", &_names[529],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[525], &_types[528], &_types[530], &_types[530]
	},
	{
		"bgpPeerEntry", "1.3.6.1.2.1.15.3.1", &_names[530],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[526], NULLOT, &_types[544], &_types[531]
	},
	{
		"bgpPeerIdentifier", "1.3.6.1.2.1.15.3.1.1", &_names[531],
		(OS) 8, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[241], NULLOT, NULLOT, &_types[532]
	},
	{
		"bgpPeerState", "1.3.6.1.2.1.15.3.1.2", &_names[532],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[523], &_types[531], NULLOT, &_types[533]
	},
	{
		"bgpPeerAdminStatus", "1.3.6.1.2.1.15.3.1.3", &_names[533],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[532], &_types[532], NULLOT, &_types[534]
	},
	{
		"bgpPeerNegotiatedVersion", "1.3.6.1.2.1.15.3.1.4", &_names[534],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[527], &_types[533], NULLOT, &_types[535]
	},
	{
		"bgpPeerLocalAddr", "1.3.6.1.2.1.15.3.1.5", &_names[535],
		(OS) 8, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[521], &_types[534], NULLOT, &_types[536]
	},
	{
		"bgpPeerLocalPort", "1.3.6.1.2.1.15.3.1.6", &_names[536],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[385], &_types[535], NULLOT, &_types[537]
	},
	{
		"bgpPeerRemoteAddr", "1.3.6.1.2.1.15.3.1.7", &_names[537],
		(OS) 8, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[535], &_types[536], NULLOT, &_types[538]
	},
	{
		"bgpPeerRemotePort", "1.3.6.1.2.1.15.3.1.8", &_names[538],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[536], &_types[537], NULLOT, &_types[539]
	},
	{
		"bgpPeerRemoteAs", "1.3.6.1.2.1.15.3.1.9", &_names[539],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[528], &_types[538], NULLOT, &_types[540]
	},
	{
		"bgpPeerInUpdates", "1.3.6.1.2.1.15.3.1.10", &_names[540],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[0], &_types[539], NULLOT, &_types[541]
	},
	{
		"bgpPeerOutUpdates", "1.3.6.1.2.1.15.3.1.11", &_names[541],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[540], &_types[540], NULLOT, &_types[542]
	},
	{
		"bgpPeerInTotalMessages", "1.3.6.1.2.1.15.3.1.12", &_names[542],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[406], &_types[541], NULLOT, &_types[543]
	},
	{
		"bgpPeerOutTotalMessages", "1.3.6.1.2.1.15.3.1.13", &_names[543],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[542], &_types[542], NULLOT, &_types[544]
	},
	{
		"bgpPeerLastError", "1.3.6.1.2.1.15.3.1.14", &_names[544],
		(OS) 3, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[377], &_types[543], NULLOT, &_types[545]
	},
	{
		"bgpIdentifier", "1.3.6.1.2.1.15.4", &_names[545],
		(OS) 8, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[531], &_types[529], NULLOT, &_types[546]
	},
	{
		"bgpRcvdPathAttrTable", "1.3.6.1.2.1.15.5", &_names[546],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[529], &_types[545], &_types[547], &_types[547]
	},
	{
		"bgpPathAttrEntry", "1.3.6.1.2.1.15.5.1", &_names[547],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[530], NULLOT, &_types[553], &_types[548]
	},
	{
		"bgpPathAttrPeer", "1.3.6.1.2.1.15.5.1.1", &_names[548],
		(OS) 8, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[367], NULLOT, NULLOT, &_types[549]
	},
	{
		"bgpPathAttrDestNetwork", "1.3.6.1.2.1.15.5.1.2", &_names[549],
		(OS) 8, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[460], &_types[548], NULLOT, &_types[550]
	},
	{
		"bgpPathAttrOrigin", "1.3.6.1.2.1.15.5.1.3", &_names[550],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[423], &_types[549], NULLOT, &_types[551]
	},
	{
		"bgpPathAttrASPath", "1.3.6.1.2.1.15.5.1.4", &_names[551],
		(OS) 3, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[534], &_types[550], NULLOT, &_types[552]
	},
	{
		"bgpPathAttrNextHop", "1.3.6.1.2.1.15.5.1.5", &_names[552],
		(OS) 8, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[439], &_types[551], NULLOT, &_types[553]
	},
	{
		"bgpPathAttrInterASMetric", "1.3.6.1.2.1.15.5.1.6", &_names[553],
		(OS) 8, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[492], &_types[552], NULLOT, &_types[554]
	},
	{
		"rmon", "1.3.6.1.2.1.16", &_names[554],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[524], &_types[526], &_types[751], &_types[555]
	},
	{
		"statistics", "1.3.6.1.2.1.16.1", &_names[555],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[533], NULLOT, &_types[556], &_types[556]
	},
	{
		"etherStatsTable", "1.3.6.1.2.1.16.1.1", &_names[556],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[546], NULLOT, &_types[557], &_types[557]
	},
	{
		"etherStatsEntry", "1.3.6.1.2.1.16.1.1.1", &_names[557],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[547], NULLOT, &_types[578], &_types[558]
	},
	{
		"etherStatsIndex", "1.3.6.1.2.1.16.1.1.1.1", &_names[558],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[509], NULLOT, NULLOT, &_types[559]
	},
	{
		"etherStatsDataSource", "1.3.6.1.2.1.16.1.1.1.2", &_names[559],
		(OS) 6, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[414], &_types[558], NULLOT, &_types[560]
	},
	{
		"etherStatsDropEvents", "1.3.6.1.2.1.16.1.1.1.3", &_names[560],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[554], &_types[559], NULLOT, &_types[561]
	},
	{
		"etherStatsOctets", "1.3.6.1.2.1.16.1.1.1.4", &_names[561],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[555], &_types[560], NULLOT, &_types[562]
	},
	{
		"etherStatsPkts", "1.3.6.1.2.1.16.1.1.1.5", &_names[562],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[559], &_types[561], NULLOT, &_types[563]
	},
	{
		"etherStatsBroadcastPkts", "1.3.6.1.2.1.16.1.1.1.6", &_names[563],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[562], &_types[562], NULLOT, &_types[564]
	},
	{
		"etherStatsMulticastPkts", "1.3.6.1.2.1.16.1.1.1.7", &_names[564],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[563], &_types[563], NULLOT, &_types[565]
	},
	{
		"etherStatsCRCAlignErrors", "1.3.6.1.2.1.16.1.1.1.8", &_names[565],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[544], &_types[564], NULLOT, &_types[566]
	},
	{
		"etherStatsUndersizePkts", "1.3.6.1.2.1.16.1.1.1.9", &_names[566],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[564], &_types[565], NULLOT, &_types[567]
	},
	{
		"etherStatsOversizePkts", "1.3.6.1.2.1.16.1.1.1.10", &_names[567],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[566], &_types[566], NULLOT, &_types[568]
	},
	{
		"etherStatsFragments", "1.3.6.1.2.1.16.1.1.1.11", &_names[568],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[556], &_types[567], NULLOT, &_types[569]
	},
	{
		"etherStatsJabbers", "1.3.6.1.2.1.16.1.1.1.12", &_names[569],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[175], &_types[568], NULLOT, &_types[570]
	},
	{
		"etherStatsCollisions", "1.3.6.1.2.1.16.1.1.1.13", &_names[570],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[561], &_types[569], NULLOT, &_types[571]
	},
	{
		"etherStatsPkts64Octets", "1.3.6.1.2.1.16.1.1.1.14", &_names[571],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[570], &_types[570], NULLOT, &_types[572]
	},
	{
		"etherStatsPkts65to127Octets", "1.3.6.1.2.1.16.1.1.1.15", &_names[572],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[571], &_types[571], NULLOT, &_types[573]
	},
	{
		"etherStatsPkts128to255Octets", "1.3.6.1.2.1.16.1.1.1.16", &_names[573],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[572], &_types[572], NULLOT, &_types[574]
	},
	{
		"etherStatsPkts256to511Octets", "1.3.6.1.2.1.16.1.1.1.17", &_names[574],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[573], &_types[573], NULLOT, &_types[575]
	},
	{
		"etherStatsPkts512to1023Octets", "1.3.6.1.2.1.16.1.1.1.18", &_names[575],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[574], &_types[574], NULLOT, &_types[576]
	},
	{
		"etherStatsPkts1024to1518Octets", "1.3.6.1.2.1.16.1.1.1.19", &_names[576],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[575], &_types[575], NULLOT, &_types[577]
	},
	{
		"etherStatsOwner", "1.3.6.1.2.1.16.1.1.1.20", &_names[577],
		(OS) 4, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[550], &_types[576], NULLOT, &_types[578]
	},
	{
		"etherStatsStatus", "1.3.6.1.2.1.16.1.1.1.21", &_names[578],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[576], &_types[577], NULLOT, &_types[579]
	},
	{
		"history", "1.3.6.1.2.1.16.2", &_names[579],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[353], &_types[555], &_types[589], &_types[580]
	},
	{
		"historyControlTable", "1.3.6.1.2.1.16.2.1", &_names[580],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[568], NULLOT, &_types[581], &_types[581]
	},
	{
		"historyControlEntry", "1.3.6.1.2.1.16.2.1.1", &_names[581],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[557], NULLOT, &_types[588], &_types[582]
	},
	{
		"historyControlIndex", "1.3.6.1.2.1.16.2.1.1.1", &_names[582],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[558], NULLOT, NULLOT, &_types[583]
	},
	{
		"historyControlDataSource", "1.3.6.1.2.1.16.2.1.1.2", &_names[583],
		(OS) 6, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[567], &_types[582], NULLOT, &_types[584]
	},
	{
		"historyControlBucketsRequested", "1.3.6.1.2.1.16.2.1.1.3", &_names[584],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[417], &_types[583], NULLOT, &_types[585]
	},
	{
		"historyControlBucketsGranted", "1.3.6.1.2.1.16.2.1.1.4", &_names[585],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[240], &_types[584], NULLOT, &_types[586]
	},
	{
		"historyControlInterval", "1.3.6.1.2.1.16.2.1.1.5", &_names[586],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[501], &_types[585], NULLOT, &_types[587]
	},
	{
		"historyControlOwner", "1.3.6.1.2.1.16.2.1.1.6", &_names[587],
		(OS) 4, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[577], &_types[586], NULLOT, &_types[588]
	},
	{
		"historyControlStatus", "1.3.6.1.2.1.16.2.1.1.7", &_names[588],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[578], &_types[587], NULLOT, &_types[589]
	},
	{
		"etherHistoryTable", "1.3.6.1.2.1.16.2.2", &_names[589],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[580], &_types[580], &_types[590], &_types[590]
	},
	{
		"etherHistoryEntry", "1.3.6.1.2.1.16.2.2.1", &_names[590],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[581], NULLOT, &_types[605], &_types[591]
	},
	{
		"etherHistoryIndex", "1.3.6.1.2.1.16.2.2.1.1", &_names[591],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[582], NULLOT, NULLOT, &_types[592]
	},
	{
		"etherHistorySampleIndex", "1.3.6.1.2.1.16.2.2.1.2", &_names[592],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[591], &_types[591], NULLOT, &_types[593]
	},
	{
		"etherHistoryIntervalStart", "1.3.6.1.2.1.16.2.2.1.3", &_names[593],
		(OS) 12, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[588], &_types[592], NULLOT, &_types[594]
	},
	{
		"etherHistoryDropEvents", "1.3.6.1.2.1.16.2.2.1.4", &_names[594],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[560], &_types[593], NULLOT, &_types[595]
	},
	{
		"etherHistoryOctets", "1.3.6.1.2.1.16.2.2.1.5", &_names[595],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[593], &_types[594], NULLOT, &_types[596]
	},
	{
		"etherHistoryPkts", "1.3.6.1.2.1.16.2.2.1.6", &_names[596],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[583], &_types[595], NULLOT, &_types[597]
	},
	{
		"etherHistoryBroadcastPkts", "1.3.6.1.2.1.16.2.2.1.7", &_names[597],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[596], &_types[596], NULLOT, &_types[598]
	},
	{
		"etherHistoryMulticastPkts", "1.3.6.1.2.1.16.2.2.1.8", &_names[598],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[597], &_types[597], NULLOT, &_types[599]
	},
	{
		"etherHistoryCRCAlignErrors", "1.3.6.1.2.1.16.2.2.1.9", &_names[599],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[565], &_types[598], NULLOT, &_types[600]
	},
	{
		"etherHistoryUndersizePkts", "1.3.6.1.2.1.16.2.2.1.10", &_names[600],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[598], &_types[599], NULLOT, &_types[601]
	},
	{
		"etherHistoryOversizePkts", "1.3.6.1.2.1.16.2.2.1.11", &_names[601],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[600], &_types[600], NULLOT, &_types[602]
	},
	{
		"etherHistoryFragments", "1.3.6.1.2.1.16.2.2.1.12", &_names[602],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[589], &_types[601], NULLOT, &_types[603]
	},
	{
		"etherHistoryJabbers", "1.3.6.1.2.1.16.2.2.1.13", &_names[603],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[569], &_types[602], NULLOT, &_types[604]
	},
	{
		"etherHistoryCollisions", "1.3.6.1.2.1.16.2.2.1.14", &_names[604],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[595], &_types[603], NULLOT, &_types[605]
	},
	{
		"etherHistoryUtilization", "1.3.6.1.2.1.16.2.2.1.15", &_names[605],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[545], &_types[604], NULLOT, &_types[606]
	},
	{
		"alarm", "1.3.6.1.2.1.16.3", &_names[606],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[585], &_types[579], &_types[607], &_types[607]
	},
	{
		"alarmTable", "1.3.6.1.2.1.16.3.1", &_names[607],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[602], NULLOT, &_types[608], &_types[608]
	},
	{
		"alarmEntry", "1.3.6.1.2.1.16.3.1.1", &_names[608],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[590], NULLOT, &_types[620], &_types[609]
	},
	{
		"alarmIndex", "1.3.6.1.2.1.16.3.1.1.1", &_names[609],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[592], NULLOT, NULLOT, &_types[610]
	},
	{
		"alarmInterval", "1.3.6.1.2.1.16.3.1.1.2", &_names[610],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[586], &_types[609], NULLOT, &_types[611]
	},
	{
		"alarmVariable", "1.3.6.1.2.1.16.3.1.1.3", &_names[611],
		(OS) 6, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[512], &_types[610], NULLOT, &_types[612]
	},
	{
		"alarmSampleType", "1.3.6.1.2.1.16.3.1.1.4", &_names[612],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[608], &_types[611], NULLOT, &_types[613]
	},
	{
		"alarmValue", "1.3.6.1.2.1.16.3.1.1.5", &_names[613],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[537], &_types[612], NULLOT, &_types[614]
	},
	{
		"alarmStartupAlarm", "1.3.6.1.2.1.16.3.1.1.6", &_names[614],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[606], &_types[613], NULLOT, &_types[615]
	},
	{
		"alarmRisingThreshold", "1.3.6.1.2.1.16.3.1.1.7", &_names[615],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[584], &_types[614], NULLOT, &_types[616]
	},
	{
		"alarmFallingThreshold", "1.3.6.1.2.1.16.3.1.1.8", &_names[616],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[615], &_types[615], NULLOT, &_types[617]
	},
	{
		"alarmRisingEventIndex", "1.3.6.1.2.1.16.3.1.1.9", &_names[617],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[609], &_types[616], NULLOT, &_types[618]
	},
	{
		"alarmFallingEventIndex", "1.3.6.1.2.1.16.3.1.1.10", &_names[618],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[617], &_types[617], NULLOT, &_types[619]
	},
	{
		"alarmOwner", "1.3.6.1.2.1.16.3.1.1.11", &_names[619],
		(OS) 4, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[587], &_types[618], NULLOT, &_types[620]
	},
	{
		"alarmStatus", "1.3.6.1.2.1.16.3.1.1.12", &_names[620],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[604], &_types[619], NULLOT, &_types[621]
	},
	{
		"hosts", "1.3.6.1.2.1.16.4", &_names[621],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[419], &_types[606], &_types[642], &_types[622]
	},
	{
		"hostControlTable", "1.3.6.1.2.1.16.4.1", &_names[622],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[607], NULLOT, &_types[623], &_types[623]
	},
	{
		"hostControlEntry", "1.3.6.1.2.1.16.4.1.1", &_names[623],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[612], NULLOT, &_types[629], &_types[624]
	},
	{
		"hostControlIndex", "1.3.6.1.2.1.16.4.1.1.1", &_names[624],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[618], NULLOT, NULLOT, &_types[625]
	},
	{
		"hostControlDataSource", "1.3.6.1.2.1.16.4.1.1.2", &_names[625],
		(OS) 6, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[601], &_types[624], NULLOT, &_types[626]
	},
	{
		"hostControlTableSize", "1.3.6.1.2.1.16.4.1.1.3", &_names[626],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[496], &_types[625], NULLOT, &_types[627]
	},
	{
		"hostControlLastDeleteTime", "1.3.6.1.2.1.16.4.1.1.4", &_names[627],
		(OS) 12, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[484], &_types[626], NULLOT, &_types[628]
	},
	{
		"hostControlOwner", "1.3.6.1.2.1.16.4.1.1.5", &_names[628],
		(OS) 4, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[619], &_types[627], NULLOT, &_types[629]
	},
	{
		"hostControlStatus", "1.3.6.1.2.1.16.4.1.1.6", &_names[629],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[620], &_types[628], NULLOT, &_types[630]
	},
	{
		"hostTable", "1.3.6.1.2.1.16.4.2", &_names[630],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[622], &_types[622], &_types[631], &_types[631]
	},
	{
		"hostEntry", "1.3.6.1.2.1.16.4.2.1", &_names[631],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[623], NULLOT, &_types[641], &_types[632]
	},
	{
		"hostAddress", "1.3.6.1.2.1.16.4.2.1.1", &_names[632],
		(OS) 3, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[613], NULLOT, NULLOT, &_types[633]
	},
	{
		"hostCreationOrder", "1.3.6.1.2.1.16.4.2.1.2", &_names[633],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[632], &_types[632], NULLOT, &_types[634]
	},
	{
		"hostIndex", "1.3.6.1.2.1.16.4.2.1.3", &_names[634],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[624], &_types[633], NULLOT, &_types[635]
	},
	{
		"hostInPkts", "1.3.6.1.2.1.16.4.2.1.4", &_names[635],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[625], &_types[634], NULLOT, &_types[636]
	},
	{
		"hostOutPkts", "1.3.6.1.2.1.16.4.2.1.5", &_names[636],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[635], &_types[635], NULLOT, &_types[637]
	},
	{
		"hostInOctets", "1.3.6.1.2.1.16.4.2.1.6", &_names[637],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[629], &_types[636], NULLOT, &_types[638]
	},
	{
		"hostOutOctets", "1.3.6.1.2.1.16.4.2.1.7", &_names[638],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[637], &_types[637], NULLOT, &_types[639]
	},
	{
		"hostOutErrors", "1.3.6.1.2.1.16.4.2.1.8", &_names[639],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[599], &_types[638], NULLOT, &_types[640]
	},
	{
		"hostOutBroadcastPkts", "1.3.6.1.2.1.16.4.2.1.9", &_names[640],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[636], &_types[639], NULLOT, &_types[641]
	},
	{
		"hostOutMulticastPkts", "1.3.6.1.2.1.16.4.2.1.10", &_names[641],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[640], &_types[640], NULLOT, &_types[642]
	},
	{
		"hostTimeTable", "1.3.6.1.2.1.16.4.3", &_names[642],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[630], &_types[630], &_types[643], &_types[643]
	},
	{
		"hostTimeEntry", "1.3.6.1.2.1.16.4.3.1", &_names[643],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[631], NULLOT, &_types[653], &_types[644]
	},
	{
		"hostTimeAddress", "1.3.6.1.2.1.16.4.3.1.1", &_names[644],
		(OS) 3, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[633], NULLOT, NULLOT, &_types[645]
	},
	{
		"hostTimeCreationOrder", "1.3.6.1.2.1.16.4.3.1.2", &_names[645],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[644], &_types[644], NULLOT, &_types[646]
	},
	{
		"hostTimeIndex", "1.3.6.1.2.1.16.4.3.1.3", &_names[646],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[634], &_types[645], NULLOT, &_types[647]
	},
	{
		"hostTimeInPkts", "1.3.6.1.2.1.16.4.3.1.4", &_names[647],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[641], &_types[646], NULLOT, &_types[648]
	},
	{
		"hostTimeOutPkts", "1.3.6.1.2.1.16.4.3.1.5", &_names[648],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[647], &_types[647], NULLOT, &_types[649]
	},
	{
		"hostTimeInOctets", "1.3.6.1.2.1.16.4.3.1.6", &_names[649],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[638], &_types[648], NULLOT, &_types[650]
	},
	{
		"hostTimeOutOctets", "1.3.6.1.2.1.16.4.3.1.7", &_names[650],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[649], &_types[649], NULLOT, &_types[651]
	},
	{
		"hostTimeOutErrors", "1.3.6.1.2.1.16.4.3.1.8", &_names[651],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[639], &_types[650], NULLOT, &_types[652]
	},
	{
		"hostTimeOutBroadcastPkts", "1.3.6.1.2.1.16.4.3.1.9", &_names[652],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[648], &_types[651], NULLOT, &_types[653]
	},
	{
		"hostTimeOutMulticastPkts", "1.3.6.1.2.1.16.4.3.1.10", &_names[653],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[652], &_types[652], NULLOT, &_types[654]
	},
	{
		"hostTopN", "1.3.6.1.2.1.16.5", &_names[654],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[428], &_types[621], &_types[667], &_types[655]
	},
	{
		"hostTopNControlTable", "1.3.6.1.2.1.16.5.1", &_names[655],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[642], NULLOT, &_types[656], &_types[656]
	},
	{
		"hostTopNControlEntry", "1.3.6.1.2.1.16.5.1.1", &_names[656],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[643], NULLOT, &_types[666], &_types[657]
	},
	{
		"hostTopNControlIndex", "1.3.6.1.2.1.16.5.1.1.1", &_names[657],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[646], NULLOT, NULLOT, &_types[658]
	},
	{
		"hostTopNHostIndex", "1.3.6.1.2.1.16.5.1.1.2", &_names[658],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[657], &_types[657], NULLOT, &_types[659]
	},
	{
		"hostTopNRateBase", "1.3.6.1.2.1.16.5.1.1.3", &_names[659],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[594], &_types[658], NULLOT, &_types[660]
	},
	{
		"hostTopNTimeRemaining", "1.3.6.1.2.1.16.5.1.1.4", &_names[660],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[403], &_types[659], NULLOT, &_types[661]
	},
	{
		"hostTopNDuration", "1.3.6.1.2.1.16.5.1.1.5", &_names[661],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[645], &_types[660], NULLOT, &_types[662]
	},
	{
		"hostTopNRequestedSize", "1.3.6.1.2.1.16.5.1.1.6", &_names[662],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[626], &_types[661], NULLOT, &_types[663]
	},
	{
		"hostTopNGrantedSize", "1.3.6.1.2.1.16.5.1.1.7", &_names[663],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[662], &_types[662], NULLOT, &_types[664]
	},
	{
		"hostTopNStartTime", "1.3.6.1.2.1.16.5.1.1.8", &_names[664],
		(OS) 12, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[627], &_types[663], NULLOT, &_types[665]
	},
	{
		"hostTopNOwner", "1.3.6.1.2.1.16.5.1.1.9", &_names[665],
		(OS) 4, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[628], &_types[664], NULLOT, &_types[666]
	},
	{
		"hostTopNStatus", "1.3.6.1.2.1.16.5.1.1.10", &_names[666],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[650], &_types[665], NULLOT, &_types[667]
	},
	{
		"hostTopNTable", "1.3.6.1.2.1.16.5.2", &_names[667],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[655], &_types[655], &_types[668], &_types[668]
	},
	{
		"hostTopNEntry", "1.3.6.1.2.1.16.5.2.1", &_names[668],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[656], NULLOT, &_types[672], &_types[669]
	},
	{
		"hostTopNReport", "1.3.6.1.2.1.16.5.2.1.1", &_names[669],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[549], NULLOT, NULLOT, &_types[670]
	},
	{
		"hostTopNIndex", "1.3.6.1.2.1.16.5.2.1.2", &_names[670],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[658], &_types[669], NULLOT, &_types[671]
	},
	{
		"hostTopNAddress", "1.3.6.1.2.1.16.5.2.1.3", &_names[671],
		(OS) 3, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[661], &_types[670], NULLOT, &_types[672]
	},
	{
		"hostTopNRate", "1.3.6.1.2.1.16.5.2.1.4", &_names[672],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[651], &_types[671], NULLOT, &_types[673]
	},
	{
		"matrix", "1.3.6.1.2.1.16.6", &_names[673],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[666], &_types[654], &_types[690], &_types[674]
	},
	{
		"matrixControlTable", "1.3.6.1.2.1.16.6.1", &_names[674],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[667], NULLOT, &_types[675], &_types[675]
	},
	{
		"matrixControlEntry", "1.3.6.1.2.1.16.6.1.1", &_names[675],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[668], NULLOT, &_types[681], &_types[676]
	},
	{
		"matrixControlIndex", "1.3.6.1.2.1.16.6.1.1.1", &_names[676],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[670], NULLOT, NULLOT, &_types[677]
	},
	{
		"matrixControlDataSource", "1.3.6.1.2.1.16.6.1.1.2", &_names[677],
		(OS) 6, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[653], &_types[676], NULLOT, &_types[678]
	},
	{
		"matrixControlTableSize", "1.3.6.1.2.1.16.6.1.1.3", &_names[678],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[663], &_types[677], NULLOT, &_types[679]
	},
	{
		"matrixControlLastDeleteTime", "1.3.6.1.2.1.16.6.1.1.4", &_names[679],
		(OS) 12, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[664], &_types[678], NULLOT, &_types[680]
	},
	{
		"matrixControlOwner", "1.3.6.1.2.1.16.6.1.1.5", &_names[680],
		(OS) 4, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[665], &_types[679], NULLOT, &_types[681]
	},
	{
		"matrixControlStatus", "1.3.6.1.2.1.16.6.1.1.6", &_names[681],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[673], &_types[680], NULLOT, &_types[682]
	},
	{
		"matrixSDTable", "1.3.6.1.2.1.16.6.2", &_names[682],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[674], &_types[674], &_types[683], &_types[683]
	},
	{
		"matrixSDEntry", "1.3.6.1.2.1.16.6.2.1", &_names[683],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[675], NULLOT, &_types[689], &_types[684]
	},
	{
		"matrixSDSourceAddress", "1.3.6.1.2.1.16.6.2.1.1", &_names[684],
		(OS) 3, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[671], NULLOT, NULLOT, &_types[685]
	},
	{
		"matrixSDDestAddress", "1.3.6.1.2.1.16.6.2.1.2", &_names[685],
		(OS) 3, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[684], &_types[684], NULLOT, &_types[686]
	},
	{
		"matrixSDIndex", "1.3.6.1.2.1.16.6.2.1.3", &_names[686],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[676], &_types[685], NULLOT, &_types[687]
	},
	{
		"matrixSDPkts", "1.3.6.1.2.1.16.6.2.1.4", &_names[687],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[677], &_types[686], NULLOT, &_types[688]
	},
	{
		"matrixSDOctets", "1.3.6.1.2.1.16.6.2.1.5", &_names[688],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[681], &_types[687], NULLOT, &_types[689]
	},
	{
		"matrixSDErrors", "1.3.6.1.2.1.16.6.2.1.6", &_names[689],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[672], &_types[688], NULLOT, &_types[690]
	},
	{
		"matrixDSTable", "1.3.6.1.2.1.16.6.3", &_names[690],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[682], &_types[682], &_types[691], &_types[691]
	},
	{
		"matrixDSEntry", "1.3.6.1.2.1.16.6.3.1", &_names[691],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[683], NULLOT, &_types[697], &_types[692]
	},
	{
		"matrixDSSourceAddress", "1.3.6.1.2.1.16.6.3.1.1", &_names[692],
		(OS) 3, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[685], NULLOT, NULLOT, &_types[693]
	},
	{
		"matrixDSDestAddress", "1.3.6.1.2.1.16.6.3.1.2", &_names[693],
		(OS) 3, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[692], &_types[692], NULLOT, &_types[694]
	},
	{
		"matrixDSIndex", "1.3.6.1.2.1.16.6.3.1.3", &_names[694],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[686], &_types[693], NULLOT, &_types[695]
	},
	{
		"matrixDSPkts", "1.3.6.1.2.1.16.6.3.1.4", &_names[695],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[687], &_types[694], NULLOT, &_types[696]
	},
	{
		"matrixDSOctets", "1.3.6.1.2.1.16.6.3.1.5", &_names[696],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[688], &_types[695], NULLOT, &_types[697]
	},
	{
		"matrixDSErrors", "1.3.6.1.2.1.16.6.3.1.6", &_names[697],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[689], &_types[696], NULLOT, &_types[698]
	},
	{
		"filter", "1.3.6.1.2.1.16.7", &_names[698],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[552], &_types[673], &_types[712], &_types[699]
	},
	{
		"filterTable", "1.3.6.1.2.1.16.7.1", &_names[699],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[690], NULLOT, &_types[700], &_types[700]
	},
	{
		"filterEntry", "1.3.6.1.2.1.16.7.1.1", &_names[700],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[691], NULLOT, &_types[711], &_types[701]
	},
	{
		"filterIndex", "1.3.6.1.2.1.16.7.1.1.1", &_names[701],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[694], NULLOT, NULLOT, &_types[702]
	},
	{
		"filterChannelIndex", "1.3.6.1.2.1.16.7.1.1.2", &_names[702],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[701], &_types[701], NULLOT, &_types[703]
	},
	{
		"filterPktDataOffset", "1.3.6.1.2.1.16.7.1.1.3", &_names[703],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[172], &_types[702], NULLOT, &_types[704]
	},
	{
		"filterPktData", "1.3.6.1.2.1.16.7.1.1.4", &_names[704],
		(OS) 3, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[412], &_types[703], NULLOT, &_types[705]
	},
	{
		"filterPktDataMask", "1.3.6.1.2.1.16.7.1.1.5", &_names[705],
		(OS) 3, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[702], &_types[704], NULLOT, &_types[706]
	},
	{
		"filterPktDataNotMask", "1.3.6.1.2.1.16.7.1.1.6", &_names[706],
		(OS) 3, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[705], &_types[705], NULLOT, &_types[707]
	},
	{
		"filterPktStatus", "1.3.6.1.2.1.16.7.1.1.7", &_names[707],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[696], &_types[706], NULLOT, &_types[708]
	},
	{
		"filterPktStatusMask", "1.3.6.1.2.1.16.7.1.1.8", &_names[708],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[706], &_types[707], NULLOT, &_types[709]
	},
	{
		"filterPktStatusNotMask", "1.3.6.1.2.1.16.7.1.1.9", &_names[709],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[708], &_types[708], NULLOT, &_types[710]
	},
	{
		"filterOwner", "1.3.6.1.2.1.16.7.1.1.10", &_names[710],
		(OS) 4, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[680], &_types[709], NULLOT, &_types[711]
	},
	{
		"filterStatus", "1.3.6.1.2.1.16.7.1.1.11", &_names[711],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[707], &_types[710], NULLOT, &_types[712]
	},
	{
		"channelTable", "1.3.6.1.2.1.16.7.2", &_names[712],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[699], &_types[699], &_types[713], &_types[713]
	},
	{
		"channelEntry", "1.3.6.1.2.1.16.7.2.1", &_names[713],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[700], NULLOT, &_types[725], &_types[714]
	},
	{
		"channelIndex", "1.3.6.1.2.1.16.7.2.1.1", &_names[714],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[709], NULLOT, NULLOT, &_types[715]
	},
	{
		"channelIfIndex", "1.3.6.1.2.1.16.7.2.1.2", &_names[715],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[714], &_types[714], NULLOT, &_types[716]
	},
	{
		"channelAcceptType", "1.3.6.1.2.1.16.7.2.1.3", &_names[716],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[713], &_types[715], NULLOT, &_types[717]
	},
	{
		"channelDataControl", "1.3.6.1.2.1.16.7.2.1.4", &_names[717],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[360], &_types[716], NULLOT, &_types[718]
	},
	{
		"channelTurnOnEventIndex", "1.3.6.1.2.1.16.7.2.1.5", &_names[718],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[715], &_types[717], NULLOT, &_types[719]
	},
	{
		"channelTurnOffEventIndex", "1.3.6.1.2.1.16.7.2.1.6", &_names[719],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[718], &_types[718], NULLOT, &_types[720]
	},
	{
		"channelEventIndex", "1.3.6.1.2.1.16.7.2.1.7", &_names[720],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[719], &_types[719], NULLOT, &_types[721]
	},
	{
		"channelEventStatus", "1.3.6.1.2.1.16.7.2.1.8", &_names[721],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[711], &_types[720], NULLOT, &_types[722]
	},
	{
		"channelMatches", "1.3.6.1.2.1.16.7.2.1.9", &_names[722],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[721], &_types[721], NULLOT, &_types[723]
	},
	{
		"channelDescription", "1.3.6.1.2.1.16.7.2.1.10", &_names[723],
		(OS) 4, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[579], &_types[722], NULLOT, &_types[724]
	},
	{
		"channelOwner", "1.3.6.1.2.1.16.7.2.1.11", &_names[724],
		(OS) 4, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[710], &_types[723], NULLOT, &_types[725]
	},
	{
		"channelStatus", "1.3.6.1.2.1.16.7.2.1.12", &_names[725],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[722], &_types[724], NULLOT, &_types[726]
	},
	{
		"capture", "1.3.6.1.2.1.16.8", &_names[726],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[497], &_types[698], &_types[742], &_types[727]
	},
	{
		"bufferControlTable", "1.3.6.1.2.1.16.8.1", &_names[727],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[712], NULLOT, &_types[728], &_types[728]
	},
	{
		"bufferControlEntry", "1.3.6.1.2.1.16.8.1.1", &_names[728],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[716], NULLOT, &_types[741], &_types[729]
	},
	{
		"bufferControlIndex", "1.3.6.1.2.1.16.8.1.1.1", &_names[729],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[720], NULLOT, NULLOT, &_types[730]
	},
	{
		"bufferControlChannelIndex", "1.3.6.1.2.1.16.8.1.1.2", &_names[730],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[729], &_types[729], NULLOT, &_types[731]
	},
	{
		"bufferControlFullStatus", "1.3.6.1.2.1.16.8.1.1.3", &_names[731],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[725], &_types[730], NULLOT, &_types[732]
	},
	{
		"bufferControlFullAction", "1.3.6.1.2.1.16.8.1.1.4", &_names[732],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[723], &_types[731], NULLOT, &_types[733]
	},
	{
		"bufferControlCaptureSliceSize", "1.3.6.1.2.1.16.8.1.1.5", &_names[733],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[678], &_types[732], NULLOT, &_types[734]
	},
	{
		"bufferControlDownloadSliceSize", "1.3.6.1.2.1.16.8.1.1.6", &_names[734],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[733], &_types[733], NULLOT, &_types[735]
	},
	{
		"bufferControlDownloadOffset", "1.3.6.1.2.1.16.8.1.1.7", &_names[735],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[703], &_types[734], NULLOT, &_types[736]
	},
	{
		"bufferControlMaxOctetsRequested", "1.3.6.1.2.1.16.8.1.1.8", &_names[736],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[616], &_types[735], NULLOT, &_types[737]
	},
	{
		"bufferControlMaxOctetsGranted", "1.3.6.1.2.1.16.8.1.1.9", &_names[737],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[614], &_types[736], NULLOT, &_types[738]
	},
	{
		"bufferControlCapturedPackets", "1.3.6.1.2.1.16.8.1.1.10", &_names[738],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[726], &_types[737], NULLOT, &_types[739]
	},
	{
		"bufferControlTurnOnTime", "1.3.6.1.2.1.16.8.1.1.11", &_names[739],
		(OS) 12, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[679], &_types[738], NULLOT, &_types[740]
	},
	{
		"bufferControlOwner", "1.3.6.1.2.1.16.8.1.1.12", &_names[740],
		(OS) 4, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[724], &_types[739], NULLOT, &_types[741]
	},
	{
		"bufferControlStatus", "1.3.6.1.2.1.16.8.1.1.13", &_names[741],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[731], &_types[740], NULLOT, &_types[742]
	},
	{
		"captureBufferTable", "1.3.6.1.2.1.16.8.2", &_names[742],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[727], &_types[727], &_types[743], &_types[743]
	},
	{
		"captureBufferEntry", "1.3.6.1.2.1.16.8.2.1", &_names[743],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[728], NULLOT, &_types[750], &_types[744]
	},
	{
		"captureBufferControlIndex", "1.3.6.1.2.1.16.8.2.1.1", &_names[744],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[730], NULLOT, NULLOT, &_types[745]
	},
	{
		"captureBufferIndex", "1.3.6.1.2.1.16.8.2.1.2", &_names[745],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[744], &_types[744], NULLOT, &_types[746]
	},
	{
		"captureBufferPacketID", "1.3.6.1.2.1.16.8.2.1.3", &_names[746],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[734], &_types[745], NULLOT, &_types[747]
	},
	{
		"captureBufferPacketData", "1.3.6.1.2.1.16.8.2.1.4", &_names[747],
		(OS) 3, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[704], &_types[746], NULLOT, &_types[748]
	},
	{
		"captureBufferPacketLength", "1.3.6.1.2.1.16.8.2.1.5", &_names[748],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[742], &_types[747], NULLOT, &_types[749]
	},
	{
		"captureBufferPacketTime", "1.3.6.1.2.1.16.8.2.1.6", &_names[749],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[739], &_types[748], NULLOT, &_types[750]
	},
	{
		"captureBufferPacketStatus", "1.3.6.1.2.1.16.8.2.1.7", &_names[750],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[741], &_types[749], NULLOT, &_types[751]
	},
	{
		"event", "1.3.6.1.2.1.16.9", &_names[751],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[659], &_types[726], &_types[761], &_types[752]
	},
	{
		"eventTable", "1.3.6.1.2.1.16.9.1", &_names[752],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[748], NULLOT, &_types[753], &_types[753]
	},
	{
		"eventEntry", "1.3.6.1.2.1.16.9.1.1", &_names[753],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[743], NULLOT, &_types[760], &_types[754]
	},
	{
		"eventIndex", "1.3.6.1.2.1.16.9.1.1.1", &_names[754],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[745], NULLOT, NULLOT, &_types[755]
	},
	{
		"eventDescription", "1.3.6.1.2.1.16.9.1.1.2", &_names[755],
		(OS) 4, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[732], &_types[754], NULLOT, &_types[756]
	},
	{
		"eventType", "1.3.6.1.2.1.16.9.1.1.3", &_names[756],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[753], &_types[755], NULLOT, &_types[757]
	},
	{
		"eventCommunity", "1.3.6.1.2.1.16.9.1.1.4", &_names[757],
		(OS) 3, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[693], &_types[756], NULLOT, &_types[758]
	},
	{
		"eventLastTimeSent", "1.3.6.1.2.1.16.9.1.1.5", &_names[758],
		(OS) 12, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[553], &_types[757], NULLOT, &_types[759]
	},
	{
		"eventOwner", "1.3.6.1.2.1.16.9.1.1.6", &_names[759],
		(OS) 4, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[740], &_types[758], NULLOT, &_types[760]
	},
	{
		"eventStatus", "1.3.6.1.2.1.16.9.1.1.7", &_names[760],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[750], &_types[759], NULLOT, &_types[761]
	},
	{
		"logTable", "1.3.6.1.2.1.16.9.2", &_names[761],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[752], &_types[752], &_types[762], &_types[762]
	},
	{
		"logEntry", "1.3.6.1.2.1.16.9.2.1", &_names[762],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[756], NULLOT, &_types[766], &_types[763]
	},
	{
		"logEventIndex", "1.3.6.1.2.1.16.9.2.1.1", &_names[763],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[754], NULLOT, NULLOT, &_types[764]
	},
	{
		"logIndex", "1.3.6.1.2.1.16.9.2.1.2", &_names[764],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[763], &_types[763], NULLOT, &_types[765]
	},
	{
		"logTime", "1.3.6.1.2.1.16.9.2.1.3", &_names[765],
		(OS) 12, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[749], &_types[764], NULLOT, &_types[766]
	},
	{
		"logDescription", "1.3.6.1.2.1.16.9.2.1.4", &_names[766],
		(OS) 4, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[755], &_types[765], NULLOT, &_types[767]
	},
	{
		"experimental", "1.3.6.1.3", &_names[767],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[669], &_types[5], &_types[1291], &_types[768]
	},
	{
		"clns", "1.3.6.1.3.1", &_names[768],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[697], NULLOT, &_types[876], &_types[769]
	},
	{
		"clnp", "1.3.6.1.3.1.1", &_names[769],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[768], NULLOT, &_types[827], &_types[770]
	},
	{
		"clnpForwarding", "1.3.6.1.3.1.1.1", &_names[770],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[698], NULLOT, NULLOT, &_types[771]
	},
	{
		"clnpDefaultLifeTime", "1.3.6.1.3.1.1.2", &_names[771],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[765], &_types[770], NULLOT, &_types[772]
	},
	{
		"clnpInReceives", "1.3.6.1.3.1.1.3", &_names[772],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[548], &_types[771], NULLOT, &_types[773]
	},
	{
		"clnpInHdrErrors", "1.3.6.1.3.1.1.4", &_names[773],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[769], &_types[772], NULLOT, &_types[774]
	},
	{
		"clnpInAddrErrors", "1.3.6.1.3.1.1.5", &_names[774],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[773], &_types[773], NULLOT, &_types[775]
	},
	{
		"clnpForwPDUs", "1.3.6.1.3.1.1.6", &_names[775],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, &_types[774], NULLOT, &_types[776]
	},
	{
		"clnpInUnknownNLPs", "1.3.6.1.3.1.1.7", &_names[776],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, &_types[775], NULLOT, &_types[777]
	},
	{
		"clnpInUnknownULPs", "1.3.6.1.3.1.1.8", &_names[777],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[776], &_types[776], NULLOT, &_types[778]
	},
	{
		"clnpInDiscards", "1.3.6.1.3.1.1.9", &_names[778],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[654], &_types[777], NULLOT, &_types[779]
	},
	{
		"clnpInDelivers", "1.3.6.1.3.1.1.10", &_names[779],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[762], &_types[778], NULLOT, &_types[780]
	},
	{
		"clnpOutRequests", "1.3.6.1.3.1.1.11", &_names[780],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[736], &_types[779], NULLOT, &_types[781]
	},
	{
		"clnpOutDiscards", "1.3.6.1.3.1.1.12", &_names[781],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[778], &_types[780], NULLOT, &_types[782]
	},
	{
		"clnpOutNoRoutes", "1.3.6.1.3.1.1.13", &_names[782],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[771], &_types[781], NULLOT, &_types[783]
	},
	{
		"clnpReasmTimeout", "1.3.6.1.3.1.1.14", &_names[783],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[782], &_types[782], NULLOT, &_types[784]
	},
	{
		"clnpReasmReqds", "1.3.6.1.3.1.1.15", &_names[784],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[780], &_types[783], NULLOT, &_types[785]
	},
	{
		"clnpReasmOKs", "1.3.6.1.3.1.1.16", &_names[785],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[64], &_types[784], NULLOT, &_types[786]
	},
	{
		"clnpReasmFails", "1.3.6.1.3.1.1.17", &_names[786],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[130], &_types[785], NULLOT, &_types[787]
	},
	{
		"clnpSegOKs", "1.3.6.1.3.1.1.18", &_names[787],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[785], &_types[786], NULLOT, &_types[788]
	},
	{
		"clnpSegFails", "1.3.6.1.3.1.1.19", &_names[788],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[786], &_types[787], NULLOT, &_types[789]
	},
	{
		"clnpSegCreates", "1.3.6.1.3.1.1.20", &_names[789],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[737], &_types[788], NULLOT, &_types[790]
	},
	{
		"clnpAddrTable", "1.3.6.1.3.1.1.21", &_names[790],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[761], &_types[789], &_types[791], &_types[791]
	},
	{
		"clnpAddrEntry", "1.3.6.1.3.1.1.21.1", &_names[791],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[779], NULLOT, &_types[794], &_types[792]
	},
	{
		"clnpAdEntAddr", "1.3.6.1.3.1.1.21.1.1", &_names[792],
		(OS) 13, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[757], NULLOT, NULLOT, &_types[793]
	},
	{
		"clnpAdEntIfIndex", "1.3.6.1.3.1.1.21.1.2", &_names[793],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[764], &_types[792], NULLOT, &_types[794]
	},
	{
		"clnpAdEntReasmMaxSize", "1.3.6.1.3.1.1.21.1.3", &_names[794],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[746], &_types[793], NULLOT, &_types[795]
	},
	{
		"clnpRoutingTable", "1.3.6.1.3.1.1.22", &_names[795],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[790], &_types[790], &_types[796], &_types[796]
	},
	{
		"clnpRouteEntry", "1.3.6.1.3.1.1.22.1", &_names[796],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[791], NULLOT, &_types[808], &_types[797]
	},
	{
		"clnpRouteDest", "1.3.6.1.3.1.1.22.1.1", &_names[797],
		(OS) 13, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[766], NULLOT, NULLOT, &_types[798]
	},
	{
		"clnpRouteIfIndex", "1.3.6.1.3.1.1.22.1.2", &_names[798],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[793], &_types[797], NULLOT, &_types[799]
	},
	{
		"clnpRouteMetric1", "1.3.6.1.3.1.1.22.1.3", &_names[799],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[758], &_types[798], NULLOT, &_types[800]
	},
	{
		"clnpRouteMetric2", "1.3.6.1.3.1.1.22.1.4", &_names[800],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[799], &_types[799], NULLOT, &_types[801]
	},
	{
		"clnpRouteMetric3", "1.3.6.1.3.1.1.22.1.5", &_names[801],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[800], &_types[800], NULLOT, &_types[802]
	},
	{
		"clnpRouteMetric4", "1.3.6.1.3.1.1.22.1.6", &_names[802],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[801], &_types[801], NULLOT, &_types[803]
	},
	{
		"clnpRouteNextHop", "1.3.6.1.3.1.1.22.1.7", &_names[803],
		(OS) 13, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[770], &_types[802], NULLOT, &_types[804]
	},
	{
		"clnpRouteType", "1.3.6.1.3.1.1.22.1.8", &_names[804],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[796], &_types[803], NULLOT, &_types[805]
	},
	{
		"clnpRouteProto", "1.3.6.1.3.1.1.22.1.9", &_names[805],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[312], &_types[804], NULLOT, &_types[806]
	},
	{
		"clnpRouteAge", "1.3.6.1.3.1.1.22.1.10", &_names[806],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[798], &_types[805], NULLOT, &_types[807]
	},
	{
		"clnpRouteMetric5", "1.3.6.1.3.1.1.22.1.11", &_names[807],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[802], &_types[806], NULLOT, &_types[808]
	},
	{
		"clnpRouteInfo", "1.3.6.1.3.1.1.22.1.12", &_names[808],
		(OS) 6, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[792], &_types[807], NULLOT, &_types[809]
	},
	{
		"clnpNetToMediaTable", "1.3.6.1.3.1.1.23", &_names[809],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[795], &_types[795], &_types[810], &_types[810]
	},
	{
		"clnpNetToMediaEntry", "1.3.6.1.3.1.1.23.1", &_names[810],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[804], NULLOT, &_types[816], &_types[811]
	},
	{
		"clnpNetToMediaIfIndex", "1.3.6.1.3.1.1.23.1.1", &_names[811],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[806], NULLOT, NULLOT, &_types[812]
	},
	{
		"clnpNetToMediaPhysAddress", "1.3.6.1.3.1.1.23.1.2", &_names[812],
		(OS) 5, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[808], &_types[811], NULLOT, &_types[813]
	},
	{
		"clnpNetToMediaNetAddress", "1.3.6.1.3.1.1.23.1.3", &_names[813],
		(OS) 13, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[812], &_types[812], NULLOT, &_types[814]
	},
	{
		"clnpNetToMediaType", "1.3.6.1.3.1.1.23.1.4", &_names[814],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[810], &_types[813], NULLOT, &_types[815]
	},
	{
		"clnpNetToMediaAge", "1.3.6.1.3.1.1.23.1.5", &_names[815],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[811], &_types[814], NULLOT, &_types[816]
	},
	{
		"clnpNetToMediaHoldTime", "1.3.6.1.3.1.1.23.1.6", &_names[816],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[783], &_types[815], NULLOT, &_types[817]
	},
	{
		"clnpMediaToNetTable", "1.3.6.1.3.1.1.24", &_names[817],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[809], &_types[809], &_types[818], &_types[818]
	},
	{
		"clnpMediaToNetEntry", "1.3.6.1.3.1.1.24.1", &_names[818],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[814], NULLOT, &_types[824], &_types[819]
	},
	{
		"clnpMediaToNetIfIndex", "1.3.6.1.3.1.1.24.1.1", &_names[819],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[815], NULLOT, NULLOT, &_types[820]
	},
	{
		"clnpMediaToNetAddress", "1.3.6.1.3.1.1.24.1.2", &_names[820],
		(OS) 13, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[813], &_types[819], NULLOT, &_types[821]
	},
	{
		"clnpMediaToNetPhysAddress", "1.3.6.1.3.1.1.24.1.3", &_names[821],
		(OS) 5, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[820], &_types[820], NULLOT, &_types[822]
	},
	{
		"clnpMediaToNetType", "1.3.6.1.3.1.1.24.1.4", &_names[822],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[818], &_types[821], NULLOT, &_types[823]
	},
	{
		"clnpMediaToNetAge", "1.3.6.1.3.1.1.24.1.5", &_names[823],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[819], &_types[822], NULLOT, &_types[824]
	},
	{
		"clnpMediaToNetHoldTime", "1.3.6.1.3.1.1.24.1.6", &_names[824],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[816], &_types[823], NULLOT, &_types[825]
	},
	{
		"clnpInOpts", "1.3.6.1.3.1.1.25", &_names[825],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[522], &_types[817], NULLOT, &_types[826]
	},
	{
		"clnpOutOpts", "1.3.6.1.3.1.1.26", &_names[826],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[825], &_types[825], NULLOT, &_types[827]
	},
	{
		"clnpRoutingDiscards", "1.3.6.1.3.1.1.27", &_names[827],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[781], &_types[826], NULLOT, &_types[828]
	},
	{
		"error", "1.3.6.1.3.1.2", &_names[828],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[774], &_types[769], &_types[874], &_types[829]
	},
	{
		"clnpInErrors", "1.3.6.1.3.1.2.1", &_names[829],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[828], NULLOT, NULLOT, &_types[830]
	},
	{
		"clnpOutErrors", "1.3.6.1.3.1.2.2", &_names[830],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[829], &_types[829], NULLOT, &_types[831]
	},
	{
		"clnpInErrUnspecs", "1.3.6.1.3.1.2.3", &_names[831],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[660], &_types[830], NULLOT, &_types[832]
	},
	{
		"clnpInErrProcs", "1.3.6.1.3.1.2.4", &_names[832],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[805], &_types[831], NULLOT, &_types[833]
	},
	{
		"clnpInErrCksums", "1.3.6.1.3.1.2.5", &_names[833],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[822], &_types[832], NULLOT, &_types[834]
	},
	{
		"clnpInErrCongests", "1.3.6.1.3.1.2.6", &_names[834],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[717], &_types[833], NULLOT, &_types[835]
	},
	{
		"clnpInErrHdrs", "1.3.6.1.3.1.2.7", &_names[835],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[789], &_types[834], NULLOT, &_types[836]
	},
	{
		"clnpInErrSegs", "1.3.6.1.3.1.2.8", &_names[836],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[817], &_types[835], NULLOT, &_types[837]
	},
	{
		"clnpInErrIncomps", "1.3.6.1.3.1.2.9", &_names[837],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[784], &_types[836], NULLOT, &_types[838]
	},
	{
		"clnpInErrDups", "1.3.6.1.3.1.2.10", &_names[838],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[823], &_types[837], NULLOT, &_types[839]
	},
	{
		"clnpInErrUnreachDsts", "1.3.6.1.3.1.2.11", &_names[839],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[830], &_types[838], NULLOT, &_types[840]
	},
	{
		"clnpInErrUnknownDsts", "1.3.6.1.3.1.2.12", &_names[840],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[839], &_types[839], NULLOT, &_types[841]
	},
	{
		"clnpInErrSRUnspecs", "1.3.6.1.3.1.2.13", &_names[841],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[831], &_types[840], NULLOT, &_types[842]
	},
	{
		"clnpInErrSRSyntaxes", "1.3.6.1.3.1.2.14", &_names[842],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[307], &_types[841], NULLOT, &_types[843]
	},
	{
		"clnpInErrSRUnkAddrs", "1.3.6.1.3.1.2.15", &_names[843],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[821], &_types[842], NULLOT, &_types[844]
	},
	{
		"clnpInErrSRBadPaths", "1.3.6.1.3.1.2.16", &_names[844],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[551], &_types[843], NULLOT, &_types[845]
	},
	{
		"clnpInErrHops", "1.3.6.1.3.1.2.17", &_names[845],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[803], &_types[844], NULLOT, &_types[846]
	},
	{
		"clnpInErrHopReassms", "1.3.6.1.3.1.2.18", &_names[846],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[788], &_types[845], NULLOT, &_types[847]
	},
	{
		"clnpInErrUnsOptions", "1.3.6.1.3.1.2.19", &_names[847],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[826], &_types[846], NULLOT, &_types[848]
	},
	{
		"clnpInErrUnsVersions", "1.3.6.1.3.1.2.20", &_names[848],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[844], &_types[847], NULLOT, &_types[849]
	},
	{
		"clnpInErrUnsSecurities", "1.3.6.1.3.1.2.21", &_names[849],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[116], &_types[848], NULLOT, &_types[850]
	},
	{
		"clnpInErrUnsSRs", "1.3.6.1.3.1.2.22", &_names[850],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, &_types[849], NULLOT, &_types[851]
	},
	{
		"clnpInErrUnsRRs", "1.3.6.1.3.1.2.23", &_names[851],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[850], &_types[850], NULLOT, &_types[852]
	},
	{
		"clnpInErrInterferences", "1.3.6.1.3.1.2.24", &_names[852],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[610], &_types[851], NULLOT, &_types[853]
	},
	{
		"clnpOutErrUnspecs", "1.3.6.1.3.1.2.25", &_names[853],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[841], &_types[852], NULLOT, &_types[854]
	},
	{
		"clnpOutErrProcs", "1.3.6.1.3.1.2.26", &_names[854],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[832], &_types[853], NULLOT, &_types[855]
	},
	{
		"clnpOutErrCksums", "1.3.6.1.3.1.2.27", &_names[855],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[833], &_types[854], NULLOT, &_types[856]
	},
	{
		"clnpOutErrCongests", "1.3.6.1.3.1.2.28", &_names[856],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[834], &_types[855], NULLOT, &_types[857]
	},
	{
		"clnpOutErrHdrs", "1.3.6.1.3.1.2.29", &_names[857],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[835], &_types[856], NULLOT, &_types[858]
	},
	{
		"clnpOutErrSegs", "1.3.6.1.3.1.2.30", &_names[858],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[836], &_types[857], NULLOT, &_types[859]
	},
	{
		"clnpOutErrIncomps", "1.3.6.1.3.1.2.31", &_names[859],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[837], &_types[858], NULLOT, &_types[860]
	},
	{
		"clnpOutErrDups", "1.3.6.1.3.1.2.32", &_names[860],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[838], &_types[859], NULLOT, &_types[861]
	},
	{
		"clnpOutErrUnreachDsts", "1.3.6.1.3.1.2.33", &_names[861],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[840], &_types[860], NULLOT, &_types[862]
	},
	{
		"clnpOutErrUnknownDsts", "1.3.6.1.3.1.2.34", &_names[862],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[861], &_types[861], NULLOT, &_types[863]
	},
	{
		"clnpOutErrSRUnspecs", "1.3.6.1.3.1.2.35", &_names[863],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[853], &_types[862], NULLOT, &_types[864]
	},
	{
		"clnpOutErrSRSyntaxes", "1.3.6.1.3.1.2.36", &_names[864],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[842], &_types[863], NULLOT, &_types[865]
	},
	{
		"clnpOutErrSRUnkAddrs", "1.3.6.1.3.1.2.37", &_names[865],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[843], &_types[864], NULLOT, &_types[866]
	},
	{
		"clnpOutErrSRBadPaths", "1.3.6.1.3.1.2.38", &_names[866],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[848], &_types[865], NULLOT, &_types[867]
	},
	{
		"clnpOutErrHops", "1.3.6.1.3.1.2.39", &_names[867],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[845], &_types[866], NULLOT, &_types[868]
	},
	{
		"clnpOutErrHopReassms", "1.3.6.1.3.1.2.40", &_names[868],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[846], &_types[867], NULLOT, &_types[869]
	},
	{
		"clnpOutErrUnsOptions", "1.3.6.1.3.1.2.41", &_names[869],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[847], &_types[868], NULLOT, &_types[870]
	},
	{
		"clnpOutErrUnsVersions", "1.3.6.1.3.1.2.42", &_names[870],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[866], &_types[869], NULLOT, &_types[871]
	},
	{
		"clnpOutErrUnsSecurities", "1.3.6.1.3.1.2.43", &_names[871],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[849], &_types[870], NULLOT, &_types[872]
	},
	{
		"clnpOutErrUnsSRs", "1.3.6.1.3.1.2.44", &_names[872],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[851], &_types[871], NULLOT, &_types[873]
	},
	{
		"clnpOutErrUnsRRs", "1.3.6.1.3.1.2.45", &_names[873],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[872], &_types[872], NULLOT, &_types[874]
	},
	{
		"clnpOutErrInterferences", "1.3.6.1.3.1.2.46", &_names[874],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[852], &_types[873], NULLOT, &_types[875]
	},
	{
		"echo", "1.3.6.1.3.1.3", &_names[875],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[605], &_types[828], NULLOT, &_types[876]
	},
	{
		"es-is", "1.3.6.1.3.1.4", &_names[876],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[873], &_types[875], &_types[882], &_types[877]
	},
	{
		"esisESHins", "1.3.6.1.3.1.4.1", &_names[877],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[854], NULLOT, NULLOT, &_types[878]
	},
	{
		"esisESHouts", "1.3.6.1.3.1.4.2", &_names[878],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[827], &_types[877], NULLOT, &_types[879]
	},
	{
		"esisISHins", "1.3.6.1.3.1.4.3", &_names[879],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[877], &_types[878], NULLOT, &_types[880]
	},
	{
		"esisISHouts", "1.3.6.1.3.1.4.4", &_names[880],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[878], &_types[879], NULLOT, &_types[881]
	},
	{
		"esisRDUins", "1.3.6.1.3.1.4.5", &_names[881],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[863], &_types[880], NULLOT, &_types[882]
	},
	{
		"esisRDUouts", "1.3.6.1.3.1.4.6", &_names[882],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[543], &_types[881], NULLOT, &_types[883]
	},
	{
		"fddi", "1.3.6.1.3.8", &_names[883],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[6], &_types[768], &_types[982], &_types[884]
	},
	{
		"snmpFddiSMT", "1.3.6.1.3.8.1", &_names[884],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, NULLOT, &_types[886], &_types[885]
	},
	{
		"snmpFddiSMTNumber", "1.3.6.1.3.8.1.1", &_names[885],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[759], NULLOT, NULLOT, &_types[886]
	},
	{
		"snmpFddiSMTTable", "1.3.6.1.3.8.1.2", &_names[886],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[858], &_types[885], &_types[887], &_types[887]
	},
	{
		"snmpFddiSMTEntry", "1.3.6.1.3.8.1.2.1", &_names[887],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[855], NULLOT, &_types[906], &_types[888]
	},
	{
		"snmpFddiSMTIndex", "1.3.6.1.3.8.1.2.1.1", &_names[888],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[860], NULLOT, NULLOT, &_types[889]
	},
	{
		"snmpFddiSMTStationId", "1.3.6.1.3.8.1.2.1.2", &_names[889],
		(OS) 3, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[520], &_types[888], NULLOT, &_types[890]
	},
	{
		"snmpFddiSMTOpVersionId", "1.3.6.1.3.8.1.2.1.3", &_names[890],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[889], &_types[889], NULLOT, &_types[891]
	},
	{
		"snmpFddiSMTHiVersionId", "1.3.6.1.3.8.1.2.1.4", &_names[891],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[890], &_types[890], NULLOT, &_types[892]
	},
	{
		"snmpFddiSMTLoVersionId", "1.3.6.1.3.8.1.2.1.5", &_names[892],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[891], &_types[891], NULLOT, &_types[893]
	},
	{
		"snmpFddiSMTMACCt", "1.3.6.1.3.8.1.2.1.6", &_names[893],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, &_types[892], NULLOT, &_types[894]
	},
	{
		"snmpFddiSMTNonMasterCt", "1.3.6.1.3.8.1.2.1.7", &_names[894],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[893], &_types[893], NULLOT, &_types[895]
	},
	{
		"snmpFddiSMTMasterCt", "1.3.6.1.3.8.1.2.1.8", &_names[895],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[894], &_types[894], NULLOT, &_types[896]
	},
	{
		"snmpFddiSMTPathsAvailable", "1.3.6.1.3.8.1.2.1.9", &_names[896],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[399], &_types[895], NULLOT, &_types[897]
	},
	{
		"snmpFddiSMTConfigCapabilities", "1.3.6.1.3.8.1.2.1.10", &_names[897],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[738], &_types[896], NULLOT, &_types[898]
	},
	{
		"snmpFddiSMTConfigPolicy", "1.3.6.1.3.8.1.2.1.11", &_names[898],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[283], &_types[897], NULLOT, &_types[899]
	},
	{
		"snmpFddiSMTConnectionPolicy", "1.3.6.1.3.8.1.2.1.12", &_names[899],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[898], &_types[898], NULLOT, &_types[900]
	},
	{
		"snmpFddiSMTTNotify", "1.3.6.1.3.8.1.2.1.13", &_names[900],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[869], &_types[899], NULLOT, &_types[901]
	},
	{
		"snmpFddiSMTStatusReporting", "1.3.6.1.3.8.1.2.1.14", &_names[901],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[767], &_types[900], NULLOT, &_types[902]
	},
	{
		"snmpFddiSMTECMState", "1.3.6.1.3.8.1.2.1.15", &_names[902],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[760], &_types[901], NULLOT, &_types[903]
	},
	{
		"snmpFddiSMTCFState", "1.3.6.1.3.8.1.2.1.16", &_names[903],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[902], &_types[902], NULLOT, &_types[904]
	},
	{
		"snmpFddiSMTHoldState", "1.3.6.1.3.8.1.2.1.17", &_names[904],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[903], &_types[903], NULLOT, &_types[905]
	},
	{
		"snmpFddiSMTRemoteDisconnectFlag", "1.3.6.1.3.8.1.2.1.18", &_names[905],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[882], &_types[904], NULLOT, &_types[906]
	},
	{
		"snmpFddiSMTStationAction", "1.3.6.1.3.8.1.2.1.19", &_names[906],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[797], &_types[905], NULLOT, &_types[907]
	},
	{
		"snmpFddiMAC", "1.3.6.1.3.8.2", &_names[907],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[870], &_types[884], &_types[909], &_types[908]
	},
	{
		"snmpFddiMACNumber", "1.3.6.1.3.8.2.1", &_names[908],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[885], NULLOT, NULLOT, &_types[909]
	},
	{
		"snmpFddiMACTable", "1.3.6.1.3.8.2.2", &_names[909],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[886], &_types[908], &_types[910], &_types[910]
	},
	{
		"snmpFddiMACEntry", "1.3.6.1.3.8.2.2.1", &_names[910],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[887], NULLOT, &_types[940], &_types[911]
	},
	{
		"snmpFddiMACSMTIndex", "1.3.6.1.3.8.2.2.1.1", &_names[911],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[888], NULLOT, NULLOT, &_types[912]
	},
	{
		"snmpFddiMACIndex", "1.3.6.1.3.8.2.2.1.2", &_names[912],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[911], &_types[911], NULLOT, &_types[913]
	},
	{
		"snmpFddiMACFrameStatusCapabilities", "1.3.6.1.3.8.2.2.1.3", &_names[913],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[897], &_types[912], NULLOT, &_types[914]
	},
	{
		"snmpFddiMACTMaxGreatestLowerBound", "1.3.6.1.3.8.2.2.1.4", &_names[914],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[864], &_types[913], NULLOT, &_types[915]
	},
	{
		"snmpFddiMACTVXGreatestLowerBound", "1.3.6.1.3.8.2.2.1.5", &_names[915],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[914], &_types[914], NULLOT, &_types[916]
	},
	{
		"snmpFddiMACPathsAvailable", "1.3.6.1.3.8.2.2.1.6", &_names[916],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[896], &_types[915], NULLOT, &_types[917]
	},
	{
		"snmpFddiMACCurrentPath", "1.3.6.1.3.8.2.2.1.7", &_names[917],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[907], &_types[916], NULLOT, &_types[918]
	},
	{
		"snmpFddiMACUpstreamNbr", "1.3.6.1.3.8.2.2.1.8", &_names[918],
		(OS) 3, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[859], &_types[917], NULLOT, &_types[919]
	},
	{
		"snmpFddiMACOldUpstreamNbr", "1.3.6.1.3.8.2.2.1.9", &_names[919],
		(OS) 3, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[918], &_types[918], NULLOT, &_types[920]
	},
	{
		"snmpFddiMACDupAddrTest", "1.3.6.1.3.8.2.2.1.10", &_names[920],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[856], &_types[919], NULLOT, &_types[921]
	},
	{
		"snmpFddiMACPathsRequested", "1.3.6.1.3.8.2.2.1.11", &_names[921],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[919], &_types[920], NULLOT, &_types[922]
	},
	{
		"snmpFddiMACDownstreamPORTType", "1.3.6.1.3.8.2.2.1.12", &_names[922],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[910], &_types[921], NULLOT, &_types[923]
	},
	{
		"snmpFddiMACSMTAddress", "1.3.6.1.3.8.2.2.1.13", &_names[923],
		(OS) 3, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[865], &_types[922], NULLOT, &_types[924]
	},
	{
		"snmpFddiMACTReq", "1.3.6.1.3.8.2.2.1.14", &_names[924],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[921], &_types[923], NULLOT, &_types[925]
	},
	{
		"snmpFddiMACTNeg", "1.3.6.1.3.8.2.2.1.15", &_names[925],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[772], &_types[924], NULLOT, &_types[926]
	},
	{
		"snmpFddiMACTMax", "1.3.6.1.3.8.2.2.1.16", &_names[926],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[794], &_types[925], NULLOT, &_types[927]
	},
	{
		"snmpFddiMACTvxValue", "1.3.6.1.3.8.2.2.1.17", &_names[927],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[923], &_types[926], NULLOT, &_types[928]
	},
	{
		"snmpFddiMACTMin", "1.3.6.1.3.8.2.2.1.18", &_names[928],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[913], &_types[927], NULLOT, &_types[929]
	},
	{
		"snmpFddiMACCurrentFrameStatus", "1.3.6.1.3.8.2.2.1.19", &_names[929],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[904], &_types[928], NULLOT, &_types[930]
	},
	{
		"snmpFddiMACFrameCts", "1.3.6.1.3.8.2.2.1.20", &_names[930],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[920], &_types[929], NULLOT, &_types[931]
	},
	{
		"snmpFddiMACErrorCts", "1.3.6.1.3.8.2.2.1.21", &_names[931],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[930], &_types[930], NULLOT, &_types[932]
	},
	{
		"snmpFddiMACLostCts", "1.3.6.1.3.8.2.2.1.22", &_names[932],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[931], &_types[931], NULLOT, &_types[933]
	},
	{
		"snmpFddiMACFrameErrorThreshold", "1.3.6.1.3.8.2.2.1.23", &_names[933],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[924], &_types[932], NULLOT, &_types[934]
	},
	{
		"snmpFddiMACFrameErrorRatio", "1.3.6.1.3.8.2.2.1.24", &_names[934],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[862], &_types[933], NULLOT, &_types[935]
	},
	{
		"snmpFddiMACRMTState", "1.3.6.1.3.8.2.2.1.25", &_names[935],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[929], &_types[934], NULLOT, &_types[936]
	},
	{
		"snmpFddiMACDaFlag", "1.3.6.1.3.8.2.2.1.26", &_names[936],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[905], &_types[935], NULLOT, &_types[937]
	},
	{
		"snmpFddiMACUnaDaFlag", "1.3.6.1.3.8.2.2.1.27", &_names[937],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[936], &_types[936], NULLOT, &_types[938]
	},
	{
		"snmpFddiMACFrameCondition", "1.3.6.1.3.8.2.2.1.28", &_names[938],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[932], &_types[937], NULLOT, &_types[939]
	},
	{
		"snmpFddiMACChipSet", "1.3.6.1.3.8.2.2.1.29", &_names[939],
		(OS) 6, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[938], &_types[938], NULLOT, &_types[940]
	},
	{
		"snmpFddiMACAction", "1.3.6.1.3.8.2.2.1.30", &_names[940],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[906], &_types[939], NULLOT, &_types[941]
	},
	{
		"snmpFddiPATH", "1.3.6.1.3.8.3", &_names[941],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[915], &_types[907], NULLOT, &_types[942]
	},
	{
		"snmpFddiPORT", "1.3.6.1.3.8.4", &_names[942],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[884], &_types[941], &_types[944], &_types[943]
	},
	{
		"snmpFddiPORTNumber", "1.3.6.1.3.8.4.1", &_names[943],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[908], NULLOT, NULLOT, &_types[944]
	},
	{
		"snmpFddiPORTTable", "1.3.6.1.3.8.4.2", &_names[944],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[909], &_types[943], &_types[945], &_types[945]
	},
	{
		"snmpFddiPORTEntry", "1.3.6.1.3.8.4.2.1", &_names[945],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[922], NULLOT, &_types[970], &_types[946]
	},
	{
		"snmpFddiPORTSMTIndex", "1.3.6.1.3.8.4.2.1.1", &_names[946],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[912], NULLOT, NULLOT, &_types[947]
	},
	{
		"snmpFddiPORTIndex", "1.3.6.1.3.8.4.2.1.2", &_names[947],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[946], &_types[946], NULLOT, &_types[948]
	},
	{
		"snmpFddiPORTPCType", "1.3.6.1.3.8.4.2.1.3", &_names[948],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[945], &_types[947], NULLOT, &_types[949]
	},
	{
		"snmpFddiPORTPCNeighbor", "1.3.6.1.3.8.4.2.1.4", &_names[949],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[928], &_types[948], NULLOT, &_types[950]
	},
	{
		"snmpFddiPORTConnectionPolicies", "1.3.6.1.3.8.4.2.1.5", &_names[950],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[899], &_types[949], NULLOT, &_types[951]
	},
	{
		"snmpFddiPORTRemoteMACIndicated", "1.3.6.1.3.8.4.2.1.6", &_names[951],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[947], &_types[950], NULLOT, &_types[952]
	},
	{
		"snmpFddiPORTCEState", "1.3.6.1.3.8.4.2.1.7", &_names[952],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[935], &_types[951], NULLOT, &_types[953]
	},
	{
		"snmpFddiPORTPathsRequested", "1.3.6.1.3.8.4.2.1.8", &_names[953],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[933], &_types[952], NULLOT, &_types[954]
	},
	{
		"snmpFddiPORTMACPlacement", "1.3.6.1.3.8.4.2.1.9", &_names[954],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, &_types[953], NULLOT, &_types[955]
	},
	{
		"snmpFddiPORTAvailablePaths", "1.3.6.1.3.8.4.2.1.10", &_names[955],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[917], &_types[954], NULLOT, &_types[956]
	},
	{
		"snmpFddiPORTMACLoopTime", "1.3.6.1.3.8.4.2.1.11", &_names[956],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[824], &_types[955], NULLOT, &_types[957]
	},
	{
		"snmpFddiPORTTBMax", "1.3.6.1.3.8.4.2.1.12", &_names[957],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[926], &_types[956], NULLOT, &_types[958]
	},
	{
		"snmpFddiPORTBSFlag", "1.3.6.1.3.8.4.2.1.13", &_names[958],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[937], &_types[957], NULLOT, &_types[959]
	},
	{
		"snmpFddiPORTLCTFailCts", "1.3.6.1.3.8.4.2.1.14", &_names[959],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[939], &_types[958], NULLOT, &_types[960]
	},
	{
		"snmpFddiPORTLerEstimate", "1.3.6.1.3.8.4.2.1.15", &_names[960],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[943], &_types[959], NULLOT, &_types[961]
	},
	{
		"snmpFddiPORTLemRejectCts", "1.3.6.1.3.8.4.2.1.16", &_names[961],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[959], &_types[960], NULLOT, &_types[962]
	},
	{
		"snmpFddiPORTLemCts", "1.3.6.1.3.8.4.2.1.17", &_names[962],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[961], &_types[961], NULLOT, &_types[963]
	},
	{
		"snmpFddiPORTLerCutoff", "1.3.6.1.3.8.4.2.1.18", &_names[963],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[962], &_types[962], NULLOT, &_types[964]
	},
	{
		"snmpFddiPORTLerAlarm", "1.3.6.1.3.8.4.2.1.19", &_names[964],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[857], &_types[963], NULLOT, &_types[965]
	},
	{
		"snmpFddiPORTConnectState", "1.3.6.1.3.8.4.2.1.20", &_names[965],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[952], &_types[964], NULLOT, &_types[966]
	},
	{
		"snmpFddiPORTPCMState", "1.3.6.1.3.8.4.2.1.21", &_names[966],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[965], &_types[965], NULLOT, &_types[967]
	},
	{
		"snmpFddiPORTPCWithhold", "1.3.6.1.3.8.4.2.1.22", &_names[967],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[963], &_types[966], NULLOT, &_types[968]
	},
	{
		"snmpFddiPORTLerCondition", "1.3.6.1.3.8.4.2.1.23", &_names[968],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[967], &_types[967], NULLOT, &_types[969]
	},
	{
		"snmpFddiPORTChipSet", "1.3.6.1.3.8.4.2.1.24", &_names[969],
		(OS) 6, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[968], &_types[968], NULLOT, &_types[970]
	},
	{
		"snmpFddiPORTAction", "1.3.6.1.3.8.4.2.1.25", &_names[970],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[940], &_types[969], NULLOT, &_types[971]
	},
	{
		"snmpFddiATTACHMENT", "1.3.6.1.3.8.5", &_names[971],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[942], &_types[942], &_types[973], &_types[972]
	},
	{
		"snmpFddiATTACHMENTNumber", "1.3.6.1.3.8.5.1", &_names[972],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[960], NULLOT, NULLOT, &_types[973]
	},
	{
		"snmpFddiATTACHMENTTable", "1.3.6.1.3.8.5.2", &_names[973],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[944], &_types[972], &_types[974], &_types[974]
	},
	{
		"snmpFddiATTACHMENTEntry", "1.3.6.1.3.8.5.2.1", &_names[974],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[948], NULLOT, &_types[981], &_types[975]
	},
	{
		"snmpFddiATTACHMENTSMTIndex", "1.3.6.1.3.8.5.2.1.1", &_names[975],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[951], NULLOT, NULLOT, &_types[976]
	},
	{
		"snmpFddiATTACHMENTIndex", "1.3.6.1.3.8.5.2.1.2", &_names[976],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[975], &_types[975], NULLOT, &_types[977]
	},
	{
		"snmpFddiATTACHMENTClass", "1.3.6.1.3.8.5.2.1.3", &_names[977],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[956], &_types[976], NULLOT, &_types[978]
	},
	{
		"snmpFddiATTACHMENTOpticalBypassPresent", "1.3.6.1.3.8.5.2.1.4", &_names[978],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[955], &_types[977], NULLOT, &_types[979]
	},
	{
		"snmpFddiATTACHMENTIMaxExpiration", "1.3.6.1.3.8.5.2.1.5", &_names[979],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[901], &_types[978], NULLOT, &_types[980]
	},
	{
		"snmpFddiATTACHMENTInsertedStatus", "1.3.6.1.3.8.5.2.1.6", &_names[980],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[966], &_types[979], NULLOT, &_types[981]
	},
	{
		"snmpFddiATTACHMENTInsertPolicy", "1.3.6.1.3.8.5.2.1.7", &_names[981],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[950], &_types[980], NULLOT, &_types[982]
	},
	{
		"snmpFddiChipSets", "1.3.6.1.3.8.6", &_names[982],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[969], &_types[971], &_types[985], &_types[983]
	},
	{
		"snmpFddiPHYChipSets", "1.3.6.1.3.8.6.1", &_names[983],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[982], NULLOT, NULLOT, &_types[984]
	},
	{
		"snmpFddiMACChipSets", "1.3.6.1.3.8.6.2", &_names[984],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[983], &_types[983], NULLOT, &_types[985]
	},
	{
		"snmpFddiPHYMACChipSets", "1.3.6.1.3.8.6.3", &_names[985],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[984], &_types[984], NULLOT, &_types[986]
	},
	{
		"lanmgr-1", "1.3.6.1.3.9", &_names[986],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[695], &_types[883], &_types[1016], &_types[987]
	},
	{
		"common", "1.3.6.1.3.9.1", &_names[987],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[927], NULLOT, &_types[994], &_types[988]
	},
	{
		"comVersionMaj", "1.3.6.1.3.9.1.1", &_names[988],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[964], NULLOT, NULLOT, &_types[989]
	},
	{
		"comVersionMin", "1.3.6.1.3.9.1.2", &_names[989],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[949], &_types[988], NULLOT, &_types[990]
	},
	{
		"comType", "1.3.6.1.3.9.1.3", &_names[990],
		(OS) 3, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[974], &_types[989], NULLOT, &_types[991]
	},
	{
		"comStatStart", "1.3.6.1.3.9.1.4", &_names[991],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[980], &_types[990], NULLOT, &_types[992]
	},
	{
		"comStatNumNetIOs", "1.3.6.1.3.9.1.5", &_names[992],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, &_types[991], NULLOT, &_types[993]
	},
	{
		"comStatFiNetIOs", "1.3.6.1.3.9.1.6", &_names[993],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[992], &_types[992], NULLOT, &_types[994]
	},
	{
		"comStatFcNetIOs", "1.3.6.1.3.9.1.7", &_names[994],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[993], &_types[993], NULLOT, &_types[995]
	},
	{
		"server", "1.3.6.1.3.9.2", &_names[995],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[991], &_types[987], &_types[1015], &_types[996]
	},
	{
		"svDescription", "1.3.6.1.3.9.2.1", &_names[996],
		(OS) 4, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[970], NULLOT, NULLOT, &_types[997]
	},
	{
		"svSvcNumber", "1.3.6.1.3.9.2.2", &_names[997],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[972], &_types[996], NULLOT, &_types[998]
	},
	{
		"svSvcTable", "1.3.6.1.3.9.2.3", &_names[998],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[973], &_types[997], &_types[999], &_types[999]
	},
	{
		"svSvcEntry", "1.3.6.1.3.9.2.3.1", &_names[999],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[990], NULLOT, &_types[1004], &_types[1000]
	},
	{
		"svSvcName", "1.3.6.1.3.9.2.3.1.1", &_names[1000],
		(OS) 4, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[881], NULLOT, NULLOT, &_types[1001]
	},
	{
		"svSvcInstalledState", "1.3.6.1.3.9.2.3.1.2", &_names[1001],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[995], &_types[1000], NULLOT, &_types[1002]
	},
	{
		"svSvcOperatingState", "1.3.6.1.3.9.2.3.1.3", &_names[1002],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1001], &_types[1001], NULLOT, &_types[1003]
	},
	{
		"svSvcCanBeUninstalled", "1.3.6.1.3.9.2.3.1.4", &_names[1003],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[925], &_types[1002], NULLOT, &_types[1004]
	},
	{
		"svSvcCanBePaused", "1.3.6.1.3.9.2.3.1.5", &_names[1004],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[957], &_types[1003], NULLOT, &_types[1005]
	},
	{
		"svStatOpens", "1.3.6.1.3.9.2.4", &_names[1005],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1004], &_types[998], NULLOT, &_types[1006]
	},
	{
		"svStatDevOpens", "1.3.6.1.3.9.2.5", &_names[1006],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1005], &_types[1005], NULLOT, &_types[1007]
	},
	{
		"svStatQueuedJobs", "1.3.6.1.3.9.2.6", &_names[1007],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[979], &_types[1006], NULLOT, &_types[1008]
	},
	{
		"svStatSOpens", "1.3.6.1.3.9.2.7", &_names[1008],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1006], &_types[1007], NULLOT, &_types[1009]
	},
	{
		"svStatErrorOuts", "1.3.6.1.3.9.2.8", &_names[1009],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[880], &_types[1008], NULLOT, &_types[1010]
	},
	{
		"svStatPwErrors", "1.3.6.1.3.9.2.9", &_names[1010],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[934], &_types[1009], NULLOT, &_types[1011]
	},
	{
		"svStatPermErrors", "1.3.6.1.3.9.2.10", &_names[1011],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1010], &_types[1010], NULLOT, &_types[1012]
	},
	{
		"svStatSysErrors", "1.3.6.1.3.9.2.11", &_names[1012],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1011], &_types[1011], NULLOT, &_types[1013]
	},
	{
		"svStatSentBytes", "1.3.6.1.3.9.2.12", &_names[1013],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1007], &_types[1012], NULLOT, &_types[1014]
	},
	{
		"svStatRcvdBytes", "1.3.6.1.3.9.2.13", &_names[1014],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1013], &_types[1013], NULLOT, &_types[1015]
	},
	{
		"svStatAvResponse", "1.3.6.1.3.9.2.14", &_names[1015],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1002], &_types[1014], NULLOT, &_types[1016]
	},
	{
		"workstation", "1.3.6.1.3.9.3", &_names[1016],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1000], &_types[995], &_types[1021], &_types[1017]
	},
	{
		"wkstaStatSessStarts", "1.3.6.1.3.9.3.1", &_names[1017],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1015], NULLOT, NULLOT, &_types[1018]
	},
	{
		"wkstaStatSessFails", "1.3.6.1.3.9.3.2", &_names[1018],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[868], &_types[1017], NULLOT, &_types[1019]
	},
	{
		"wkstaStatUses", "1.3.6.1.3.9.3.3", &_names[1019],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[278], &_types[1018], NULLOT, &_types[1020]
	},
	{
		"wkstaStatUseFails", "1.3.6.1.3.9.3.4", &_names[1020],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1018], &_types[1019], NULLOT, &_types[1021]
	},
	{
		"wkstaStatAutoRecs", "1.3.6.1.3.9.3.5", &_names[1021],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1003], &_types[1020], NULLOT, &_types[1022]
	},
	{
		"view", "1.3.6.1.3.11", &_names[1022],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[989], &_types[986], &_types[1056], &_types[1023]
	},
	{
		"viewPrimTable", "1.3.6.1.3.11.1", &_names[1023],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[998], NULLOT, &_types[1024], &_types[1024]
	},
	{
		"viewPrimEntry", "1.3.6.1.3.11.1.1", &_names[1024],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[999], NULLOT, &_types[1030], &_types[1025]
	},
	{
		"viewPrimName", "1.3.6.1.3.11.1.1.1", &_names[1025],
		(OS) 6, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1016], NULLOT, NULLOT, &_types[1026]
	},
	{
		"viewPrimTDomain", "1.3.6.1.3.11.1.1.2", &_names[1026],
		(OS) 6, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[985], &_types[1025], NULLOT, &_types[1027]
	},
	{
		"viewPrimTAddr", "1.3.6.1.3.11.1.1.3", &_names[1027],
		(OS) 3, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[987], &_types[1026], NULLOT, &_types[1028]
	},
	{
		"viewPrimUser", "1.3.6.1.3.11.1.1.4", &_names[1028],
		(OS) 3, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1019], &_types[1027], NULLOT, &_types[1029]
	},
	{
		"viewPrimCommunity", "1.3.6.1.3.11.1.1.5", &_names[1029],
		(OS) 3, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1027], &_types[1028], NULLOT, &_types[1030]
	},
	{
		"viewPrimType", "1.3.6.1.3.11.1.1.6", &_names[1030],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1024], &_types[1029], NULLOT, &_types[1031]
	},
	{
		"defaultView", "1.3.6.1.3.11.2", &_names[1031],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1022], &_types[1023], &_types[1036], &_types[1032]
	},
	{
		"defViewWholeRW", "1.3.6.1.3.11.2.1", &_names[1032],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, NULLOT, NULLOT, &_types[1033]
	},
	{
		"defViewWholeRO", "1.3.6.1.3.11.2.2", &_names[1033],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[874], &_types[1032], NULLOT, &_types[1034]
	},
	{
		"defViewStandardRW", "1.3.6.1.3.11.2.3", &_names[1034],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1032], &_types[1033], NULLOT, &_types[1035]
	},
	{
		"defViewStandardRO", "1.3.6.1.3.11.2.4", &_names[1035],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1033], &_types[1034], NULLOT, &_types[1036]
	},
	{
		"defViewTrapDest", "1.3.6.1.3.11.2.5", &_names[1036],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[996], &_types[1035], NULLOT, &_types[1037]
	},
	{
		"viewDomains", "1.3.6.1.3.11.3", &_names[1037],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1026], &_types[1031], &_types[1038], &_types[1038]
	},
	{
		"snmpDomain", "1.3.6.1.3.11.3.1", &_names[1038],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1037], NULLOT, &_types[1042], &_types[1039]
	},
	{
		"rfc1157Domain", "1.3.6.1.3.11.3.1.1", &_names[1039],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1038], NULLOT, NULLOT, &_types[1040]
	},
	{
		"cltsDomain", "1.3.6.1.3.11.3.1.3", &_names[1040],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1039], &_types[1039], NULLOT, &_types[1041]
	},
	{
		"cotsNDomain", "1.3.6.1.3.11.3.1.4", &_names[1041],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1040], &_types[1040], NULLOT, &_types[1042]
	},
	{
		"cotsXDomain", "1.3.6.1.3.11.3.1.5", &_names[1042],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1041], &_types[1041], NULLOT, &_types[1043]
	},
	{
		"viewAclTable", "1.3.6.1.3.11.4", &_names[1043],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1023], &_types[1037], &_types[1044], &_types[1044]
	},
	{
		"viewAclEntry", "1.3.6.1.3.11.4.1", &_names[1044],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1030], NULLOT, &_types[1049], &_types[1045]
	},
	{
		"viewAclView", "1.3.6.1.3.11.4.1.1", &_names[1045],
		(OS) 6, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1031], NULLOT, NULLOT, &_types[1046]
	},
	{
		"viewAclCommunity", "1.3.6.1.3.11.4.1.2", &_names[1046],
		(OS) 3, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1029], &_types[1045], NULLOT, &_types[1047]
	},
	{
		"viewAclUser", "1.3.6.1.3.11.4.1.3", &_names[1047],
		(OS) 3, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1028], &_types[1046], NULLOT, &_types[1048]
	},
	{
		"viewAclPrivileges", "1.3.6.1.3.11.4.1.4", &_names[1048],
		(OS) 2, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[611], &_types[1047], NULLOT, &_types[1049]
	},
	{
		"viewAclType", "1.3.6.1.3.11.4.1.5", &_names[1049],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1044], &_types[1048], NULLOT, &_types[1050]
	},
	{
		"viewTrapTable", "1.3.6.1.3.11.5", &_names[1050],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1043], &_types[1043], &_types[1051], &_types[1051]
	},
	{
		"viewTrapEntry", "1.3.6.1.3.11.5.1", &_names[1051],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1049], NULLOT, &_types[1055], &_types[1052]
	},
	{
		"viewTrapView", "1.3.6.1.3.11.5.1.1", &_names[1052],
		(OS) 6, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1045], NULLOT, NULLOT, &_types[1053]
	},
	{
		"viewTrapGenerics", "1.3.6.1.3.11.5.1.2", &_names[1053],
		(OS) 3, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1021], &_types[1052], NULLOT, &_types[1054]
	},
	{
		"viewTrapSpecifics", "1.3.6.1.3.11.5.1.3", &_names[1054],
		(OS) 3, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[40], &_types[1053], NULLOT, &_types[1055]
	},
	{
		"viewTrapType", "1.3.6.1.3.11.5.1.4", &_names[1055],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1051], &_types[1054], NULLOT, &_types[1056]
	},
	{
		"viewTranTable", "1.3.6.1.3.11.6", &_names[1056],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1050], &_types[1050], &_types[1057], &_types[1057]
	},
	{
		"viewTranEntry", "1.3.6.1.3.11.6.1", &_names[1057],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1055], NULLOT, &_types[1062], &_types[1058]
	},
	{
		"viewSourceName", "1.3.6.1.3.11.6.1.1", &_names[1058],
		(OS) 6, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1025], NULLOT, NULLOT, &_types[1059]
	},
	{
		"viewSourceSubtree", "1.3.6.1.3.11.6.1.2", &_names[1059],
		(OS) 6, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1017], &_types[1058], NULLOT, &_types[1060]
	},
	{
		"viewTargetName", "1.3.6.1.3.11.6.1.3", &_names[1060],
		(OS) 6, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1058], &_types[1059], NULLOT, &_types[1061]
	},
	{
		"viewTargetSubtree", "1.3.6.1.3.11.6.1.4", &_names[1061],
		(OS) 6, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1059], &_types[1060], NULLOT, &_types[1062]
	},
	{
		"viewTranType", "1.3.6.1.3.11.6.1.5", &_names[1062],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1057], &_types[1061], NULLOT, &_types[1063]
	},
	{
		"ppp", "1.3.6.1.3.18", &_names[1063],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1053], &_types[1022], &_types[1172], &_types[1064]
	},
	{
		"pppLinkControlTable", "1.3.6.1.3.18.1", &_names[1064],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1056], NULLOT, &_types[1065], &_types[1065]
	},
	{
		"pppLinkControlEntry", "1.3.6.1.3.18.1.1", &_names[1065],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1062], NULLOT, &_types[1075], &_types[1066]
	},
	{
		"pppLinkControlIndex", "1.3.6.1.3.18.1.1.1", &_names[1066],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[976], NULLOT, NULLOT, &_types[1067]
	},
	{
		"pppLinkCRCSize", "1.3.6.1.3.18.1.1.2", &_names[1067],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1008], &_types[1066], NULLOT, &_types[1068]
	},
	{
		"pppLinkRestartTimerValue", "1.3.6.1.3.18.1.1.3", &_names[1068],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1046], &_types[1067], NULLOT, &_types[1069]
	},
	{
		"pppLinkMaxRestarts", "1.3.6.1.3.18.1.1.4", &_names[1069],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1061], &_types[1068], NULLOT, &_types[1070]
	},
	{
		"pppLinkLocalMRU", "1.3.6.1.3.18.1.1.5", &_names[1070],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, &_types[1069], NULLOT, &_types[1071]
	},
	{
		"pppLinkRemoteMRU", "1.3.6.1.3.18.1.1.6", &_names[1071],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1070], &_types[1070], NULLOT, &_types[1072]
	},
	{
		"pppLinkLocalACCMap", "1.3.6.1.3.18.1.1.7", &_names[1072],
		(OS) 3, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[807], &_types[1071], NULLOT, &_types[1073]
	},
	{
		"pppLinkRemoteACCMap", "1.3.6.1.3.18.1.1.8", &_names[1073],
		(OS) 3, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1072], &_types[1072], NULLOT, &_types[1074]
	},
	{
		"pppLinkMagicLoopCount", "1.3.6.1.3.18.1.1.9", &_names[1074],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[867], &_types[1073], NULLOT, &_types[1075]
	},
	{
		"pppLinkCommand", "1.3.6.1.3.18.1.1.10", &_names[1075],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1068], &_types[1074], NULLOT, &_types[1076]
	},
	{
		"pppLinkStatusTable", "1.3.6.1.3.18.2", &_names[1076],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1064], &_types[1064], &_types[1077], &_types[1077]
	},
	{
		"pppLinkStatusEntry", "1.3.6.1.3.18.2.1", &_names[1077],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1065], NULLOT, &_types[1090], &_types[1078]
	},
	{
		"pppLinkStatusIndex", "1.3.6.1.3.18.2.1.1", &_names[1078],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1066], NULLOT, NULLOT, &_types[1079]
	},
	{
		"pppLinkVersion", "1.3.6.1.3.18.2.1.2", &_names[1079],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[978], &_types[1078], NULLOT, &_types[1080]
	},
	{
		"pppLinkCurrentState", "1.3.6.1.3.18.2.1.3", &_names[1080],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1069], &_types[1079], NULLOT, &_types[1081]
	},
	{
		"pppLinkPreviousState", "1.3.6.1.3.18.2.1.4", &_names[1081],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1080], &_types[1080], NULLOT, &_types[1082]
	},
	{
		"pppLinkChangeTime", "1.3.6.1.3.18.2.1.5", &_names[1082],
		(OS) 12, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[977], &_types[1081], NULLOT, &_types[1083]
	},
	{
		"pppLinkMagicNumber", "1.3.6.1.3.18.2.1.6", &_names[1083],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[997], &_types[1082], NULLOT, &_types[1084]
	},
	{
		"pppLinkLocalQualityPeriod", "1.3.6.1.3.18.2.1.7", &_names[1084],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1014], &_types[1083], NULLOT, &_types[1085]
	},
	{
		"pppLinkRemoteQualityPeriod", "1.3.6.1.3.18.2.1.8", &_names[1085],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1084], &_types[1084], NULLOT, &_types[1086]
	},
	{
		"pppLinkProtocolCompression", "1.3.6.1.3.18.2.1.9", &_names[1086],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1075], &_types[1085], NULLOT, &_types[1087]
	},
	{
		"pppLinkACCompression", "1.3.6.1.3.18.2.1.10", &_names[1087],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1086], &_types[1086], NULLOT, &_types[1088]
	},
	{
		"pppLinkMeasurementsValid", "1.3.6.1.3.18.2.1.11", &_names[1088],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1087], &_types[1087], NULLOT, &_types[1089]
	},
	{
		"pppLinkQuality", "1.3.6.1.3.18.2.1.12", &_names[1089],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1085], &_types[1088], NULLOT, &_types[1090]
	},
	{
		"pppLinkPhysical", "1.3.6.1.3.18.2.1.13", &_names[1090],
		(OS) 6, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1088], &_types[1089], NULLOT, &_types[1091]
	},
	{
		"pppLinkErrorsTable", "1.3.6.1.3.18.3", &_names[1091],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1076], &_types[1076], &_types[1092], &_types[1092]
	},
	{
		"pppLinkErrorsEntry", "1.3.6.1.3.18.3.1", &_names[1092],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1077], NULLOT, &_types[1104], &_types[1093]
	},
	{
		"pppLinkErrorsIndex", "1.3.6.1.3.18.3.1.1", &_names[1093],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1078], NULLOT, NULLOT, &_types[1094]
	},
	{
		"pppLinkBadAddresses", "1.3.6.1.3.18.3.1.2", &_names[1094],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1090], &_types[1093], NULLOT, &_types[1095]
	},
	{
		"pppLinkLastBadAddress", "1.3.6.1.3.18.3.1.3", &_names[1095],
		(OS) 3, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1094], &_types[1094], NULLOT, &_types[1096]
	},
	{
		"pppLinkBadControls", "1.3.6.1.3.18.3.1.4", &_names[1096],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1042], &_types[1095], NULLOT, &_types[1097]
	},
	{
		"pppLinkLastBadControl", "1.3.6.1.3.18.3.1.5", &_names[1097],
		(OS) 3, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1096], &_types[1096], NULLOT, &_types[1098]
	},
	{
		"pppLinkLastUnknownProtocol", "1.3.6.1.3.18.3.1.6", &_names[1098],
		(OS) 3, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[879], &_types[1097], NULLOT, &_types[1099]
	},
	{
		"pppLinkInvalidProtocols", "1.3.6.1.3.18.3.1.7", &_names[1099],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1098], &_types[1098], NULLOT, &_types[1100]
	},
	{
		"pppLinkLastInvalidProtocol", "1.3.6.1.3.18.3.1.8", &_names[1100],
		(OS) 3, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1099], &_types[1099], NULLOT, &_types[1101]
	},
	{
		"pppLinkPacketTooLongs", "1.3.6.1.3.18.3.1.9", &_names[1101],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1092], &_types[1100], NULLOT, &_types[1102]
	},
	{
		"pppLinkBadCRCs", "1.3.6.1.3.18.3.1.10", &_names[1102],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, &_types[1101], NULLOT, &_types[1103]
	},
	{
		"pppLinkConfigTimeouts", "1.3.6.1.3.18.3.1.11", &_names[1103],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1082], &_types[1102], NULLOT, &_types[1104]
	},
	{
		"pppLinkTerminateTimeouts", "1.3.6.1.3.18.3.1.12", &_names[1104],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1103], &_types[1103], NULLOT, &_types[1105]
	},
	{
		"pppLinkQualityTable", "1.3.6.1.3.18.4", &_names[1105],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1091], &_types[1091], &_types[1106], &_types[1106]
	},
	{
		"pppLinkQualityEntry", "1.3.6.1.3.18.4.1", &_names[1106],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1101], NULLOT, &_types[1116], &_types[1107]
	},
	{
		"pppLinkQualityIndex", "1.3.6.1.3.18.4.1.1", &_names[1107],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1093], NULLOT, NULLOT, &_types[1108]
	},
	{
		"pppLinkInTxLQRs", "1.3.6.1.3.18.4.1.2", &_names[1108],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[876], &_types[1107], NULLOT, &_types[1109]
	},
	{
		"pppLinkInTxPackets", "1.3.6.1.3.18.4.1.3", &_names[1109],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1052], &_types[1108], NULLOT, &_types[1110]
	},
	{
		"pppLinkLastOutTxPackets", "1.3.6.1.3.18.4.1.4", &_names[1110],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1109], &_types[1109], NULLOT, &_types[1111]
	},
	{
		"pppLinkInTxOctets", "1.3.6.1.3.18.4.1.5", &_names[1111],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1081], &_types[1110], NULLOT, &_types[1112]
	},
	{
		"pppLinkLastOutTxOctets", "1.3.6.1.3.18.4.1.6", &_names[1112],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1111], &_types[1111], NULLOT, &_types[1113]
	},
	{
		"pppLinkInRxPackets", "1.3.6.1.3.18.4.1.7", &_names[1113],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1110], &_types[1112], NULLOT, &_types[1114]
	},
	{
		"pppLinkLastInRxPackets", "1.3.6.1.3.18.4.1.8", &_names[1114],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1113], &_types[1113], NULLOT, &_types[1115]
	},
	{
		"pppLinkInRxOctets", "1.3.6.1.3.18.4.1.9", &_names[1115],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1112], &_types[1114], NULLOT, &_types[1116]
	},
	{
		"pppLinkLastInRxOctets", "1.3.6.1.3.18.4.1.10", &_names[1116],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1115], &_types[1115], NULLOT, &_types[1117]
	},
	{
		"pppProtocolTables", "1.3.6.1.3.18.5", &_names[1117],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1105], &_types[1105], &_types[1163], &_types[1118]
	},
	{
		"pppIPTable", "1.3.6.1.3.18.5.1", &_names[1118],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1117], NULLOT, &_types[1119], &_types[1119]
	},
	{
		"pppIPEntry", "1.3.6.1.3.18.5.1.1", &_names[1119],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1106], NULLOT, &_types[1125], &_types[1120]
	},
	{
		"pppIPLinkNumber", "1.3.6.1.3.18.5.1.1.1", &_names[1120],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1083], NULLOT, NULLOT, &_types[1121]
	},
	{
		"pppIPRejects", "1.3.6.1.3.18.5.1.1.2", &_names[1121],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[747], &_types[1120], NULLOT, &_types[1122]
	},
	{
		"pppIPInPackets", "1.3.6.1.3.18.5.1.1.3", &_names[1122],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1114], &_types[1121], NULLOT, &_types[1123]
	},
	{
		"pppIPInOctets", "1.3.6.1.3.18.5.1.1.4", &_names[1123],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1116], &_types[1122], NULLOT, &_types[1124]
	},
	{
		"pppIPOutPackets", "1.3.6.1.3.18.5.1.1.5", &_names[1124],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1122], &_types[1123], NULLOT, &_types[1125]
	},
	{
		"pppIPOutOctets", "1.3.6.1.3.18.5.1.1.6", &_names[1125],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1123], &_types[1124], NULLOT, &_types[1126]
	},
	{
		"pppIPCPTable", "1.3.6.1.3.18.5.2", &_names[1126],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1118], &_types[1118], &_types[1127], &_types[1127]
	},
	{
		"pppIPCPEntry", "1.3.6.1.3.18.5.2.1", &_names[1127],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1119], NULLOT, &_types[1134], &_types[1128]
	},
	{
		"pppIPCPLinkNumber", "1.3.6.1.3.18.5.2.1.1", &_names[1128],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1120], NULLOT, NULLOT, &_types[1129]
	},
	{
		"pppIPCPRejects", "1.3.6.1.3.18.5.2.1.2", &_names[1129],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1121], &_types[1128], NULLOT, &_types[1130]
	},
	{
		"pppIPCPInPackets", "1.3.6.1.3.18.5.2.1.3", &_names[1130],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1124], &_types[1129], NULLOT, &_types[1131]
	},
	{
		"pppIPCPInOctets", "1.3.6.1.3.18.5.2.1.4", &_names[1131],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1125], &_types[1130], NULLOT, &_types[1132]
	},
	{
		"pppIPCPOutPackets", "1.3.6.1.3.18.5.2.1.5", &_names[1132],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1130], &_types[1131], NULLOT, &_types[1133]
	},
	{
		"pppIPCPOutOctets", "1.3.6.1.3.18.5.2.1.6", &_names[1133],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1131], &_types[1132], NULLOT, &_types[1134]
	},
	{
		"pppIPCPCompressionType", "1.3.6.1.3.18.5.2.1.7", &_names[1134],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1127], &_types[1133], NULLOT, &_types[1135]
	},
	{
		"pppLCPTable", "1.3.6.1.3.18.5.3", &_names[1135],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1126], &_types[1126], &_types[1136], &_types[1136]
	},
	{
		"pppLCPEntry", "1.3.6.1.3.18.5.3.1", &_names[1136],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1134], NULLOT, &_types[1162], &_types[1137]
	},
	{
		"pppLCPLinkNumber", "1.3.6.1.3.18.5.3.1.1", &_names[1137],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1128], NULLOT, NULLOT, &_types[1138]
	},
	{
		"pppLCPRejects", "1.3.6.1.3.18.5.3.1.2", &_names[1138],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1129], &_types[1137], NULLOT, &_types[1139]
	},
	{
		"pppLCPInPackets", "1.3.6.1.3.18.5.3.1.3", &_names[1139],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1132], &_types[1138], NULLOT, &_types[1140]
	},
	{
		"pppLCPInOctets", "1.3.6.1.3.18.5.3.1.4", &_names[1140],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1133], &_types[1139], NULLOT, &_types[1141]
	},
	{
		"pppLCPOutPackets", "1.3.6.1.3.18.5.3.1.5", &_names[1141],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1139], &_types[1140], NULLOT, &_types[1142]
	},
	{
		"pppLCPOutOctets", "1.3.6.1.3.18.5.3.1.6", &_names[1142],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1140], &_types[1141], NULLOT, &_types[1143]
	},
	{
		"pppLCPOutCRs", "1.3.6.1.3.18.5.3.1.7", &_names[1143],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1108], &_types[1142], NULLOT, &_types[1144]
	},
	{
		"pppLCPInCRs", "1.3.6.1.3.18.5.3.1.8", &_names[1144],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1143], &_types[1143], NULLOT, &_types[1145]
	},
	{
		"pppLCPOutCAs", "1.3.6.1.3.18.5.3.1.9", &_names[1145],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[539], &_types[1144], NULLOT, &_types[1146]
	},
	{
		"pppLCPInCAs", "1.3.6.1.3.18.5.3.1.10", &_names[1146],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1145], &_types[1145], NULLOT, &_types[1147]
	},
	{
		"pppLCPOutCNs", "1.3.6.1.3.18.5.3.1.11", &_names[1147],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, &_types[1146], NULLOT, &_types[1148]
	},
	{
		"pppLCPInCNs", "1.3.6.1.3.18.5.3.1.12", &_names[1148],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1147], &_types[1147], NULLOT, &_types[1149]
	},
	{
		"pppLCPOutCRejs", "1.3.6.1.3.18.5.3.1.13", &_names[1149],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1138], &_types[1148], NULLOT, &_types[1150]
	},
	{
		"pppLCPInCRejs", "1.3.6.1.3.18.5.3.1.14", &_names[1150],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1149], &_types[1149], NULLOT, &_types[1151]
	},
	{
		"pppLCPOutTRs", "1.3.6.1.3.18.5.3.1.15", &_names[1151],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1144], &_types[1150], NULLOT, &_types[1152]
	},
	{
		"pppLCPInTRs", "1.3.6.1.3.18.5.3.1.16", &_names[1152],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1151], &_types[1151], NULLOT, &_types[1153]
	},
	{
		"pppLCPOutTAs", "1.3.6.1.3.18.5.3.1.17", &_names[1153],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1146], &_types[1152], NULLOT, &_types[1154]
	},
	{
		"pppLCPInTAs", "1.3.6.1.3.18.5.3.1.18", &_names[1154],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1153], &_types[1153], NULLOT, &_types[1155]
	},
	{
		"pppLCPOutCodeRejs", "1.3.6.1.3.18.5.3.1.19", &_names[1155],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1150], &_types[1154], NULLOT, &_types[1156]
	},
	{
		"pppLCPInCodeRejs", "1.3.6.1.3.18.5.3.1.20", &_names[1156],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1155], &_types[1155], NULLOT, &_types[1157]
	},
	{
		"pppLCPOutEchoReqs", "1.3.6.1.3.18.5.3.1.21", &_names[1157],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[953], &_types[1156], NULLOT, &_types[1158]
	},
	{
		"pppLCPInEchoReqs", "1.3.6.1.3.18.5.3.1.22", &_names[1158],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1157], &_types[1157], NULLOT, &_types[1159]
	},
	{
		"pppLCPOutEchoReps", "1.3.6.1.3.18.5.3.1.23", &_names[1159],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1089], &_types[1158], NULLOT, &_types[1160]
	},
	{
		"pppLCPInEchoReps", "1.3.6.1.3.18.5.3.1.24", &_names[1160],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1159], &_types[1159], NULLOT, &_types[1161]
	},
	{
		"pppLCPOutDiscReqs", "1.3.6.1.3.18.5.3.1.25", &_names[1161],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1158], &_types[1160], NULLOT, &_types[1162]
	},
	{
		"pppLCPInDiscReqs", "1.3.6.1.3.18.5.3.1.26", &_names[1162],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1161], &_types[1161], NULLOT, &_types[1163]
	},
	{
		"pppPAPTable", "1.3.6.1.3.18.5.4", &_names[1163],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1135], &_types[1135], &_types[1164], &_types[1164]
	},
	{
		"pppPAPEntry", "1.3.6.1.3.18.5.4.1", &_names[1164],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1136], NULLOT, &_types[1171], &_types[1165]
	},
	{
		"pppPAPLinkNumber", "1.3.6.1.3.18.5.4.1.1", &_names[1165],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1137], NULLOT, NULLOT, &_types[1166]
	},
	{
		"pppPAPInAuthenticates", "1.3.6.1.3.18.5.4.1.2", &_names[1166],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1142], &_types[1165], NULLOT, &_types[1167]
	},
	{
		"pppPAPOutAuthenticates", "1.3.6.1.3.18.5.4.1.3", &_names[1167],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1166], &_types[1166], NULLOT, &_types[1168]
	},
	{
		"pppPAPInAcks", "1.3.6.1.3.18.5.4.1.4", &_names[1168],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1074], &_types[1167], NULLOT, &_types[1169]
	},
	{
		"pppPAPOutAcks", "1.3.6.1.3.18.5.4.1.5", &_names[1169],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1168], &_types[1168], NULLOT, &_types[1170]
	},
	{
		"pppPAPInNaks", "1.3.6.1.3.18.5.4.1.6", &_names[1170],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1104], &_types[1169], NULLOT, &_types[1171]
	},
	{
		"pppPAPOutNaks", "1.3.6.1.3.18.5.4.1.7", &_names[1171],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1170], &_types[1170], NULLOT, &_types[1172]
	},
	{
		"pppTests", "1.3.6.1.3.18.6", &_names[1172],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1097], &_types[1117], &_types[1173], &_types[1173]
	},
	{
		"pppEchoTest", "1.3.6.1.3.18.6.1", &_names[1173],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1172], NULLOT, NULLOT, &_types[1174]
	},
	{
		"char", "1.3.6.1.3.19", &_names[1174],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1073], &_types[1063], &_types[1208], &_types[1175]
	},
	{
		"charNumber", "1.3.6.1.3.19.1", &_names[1175],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1165], NULLOT, NULLOT, &_types[1176]
	},
	{
		"charPortTable", "1.3.6.1.3.19.2", &_names[1176],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1163], &_types[1175], &_types[1177], &_types[1177]
	},
	{
		"charPortEntry", "1.3.6.1.3.19.2.1", &_names[1177],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1164], NULLOT, &_types[1195], &_types[1178]
	},
	{
		"charPortIndex", "1.3.6.1.3.19.2.1.1", &_names[1178],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1107], NULLOT, NULLOT, &_types[1179]
	},
	{
		"charPortName", "1.3.6.1.3.19.2.1.2", &_names[1179],
		(OS) 4, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1060], &_types[1178], NULLOT, &_types[1180]
	},
	{
		"charPortType", "1.3.6.1.3.19.2.1.3", &_names[1180],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1177], &_types[1179], NULLOT, &_types[1181]
	},
	{
		"charPortHardware", "1.3.6.1.3.19.2.1.4", &_names[1181],
		(OS) 6, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[986], &_types[1180], NULLOT, &_types[1182]
	},
	{
		"charPortReset", "1.3.6.1.3.19.2.1.5", &_names[1182],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1167], &_types[1181], NULLOT, &_types[1183]
	},
	{
		"charPortAdminStatus", "1.3.6.1.3.19.2.1.6", &_names[1183],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1182], &_types[1182], NULLOT, &_types[1184]
	},
	{
		"charPortOperStatus", "1.3.6.1.3.19.2.1.7", &_names[1184],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1183], &_types[1183], NULLOT, &_types[1185]
	},
	{
		"charPortLastChange", "1.3.6.1.3.19.2.1.8", &_names[1185],
		(OS) 12, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1174], &_types[1184], NULLOT, &_types[1186]
	},
	{
		"charPortInFlowType", "1.3.6.1.3.19.2.1.9", &_names[1186],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1180], &_types[1185], NULLOT, &_types[1187]
	},
	{
		"charPortOutFlowType", "1.3.6.1.3.19.2.1.10", &_names[1187],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1186], &_types[1186], NULLOT, &_types[1188]
	},
	{
		"charPortInFlowState", "1.3.6.1.3.19.2.1.11", &_names[1188],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1184], &_types[1187], NULLOT, &_types[1189]
	},
	{
		"charPortOutFlowState", "1.3.6.1.3.19.2.1.12", &_names[1189],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1188], &_types[1188], NULLOT, &_types[1190]
	},
	{
		"charPortInCharacters", "1.3.6.1.3.19.2.1.13", &_names[1190],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1185], &_types[1189], NULLOT, &_types[1191]
	},
	{
		"charPortOutCharacters", "1.3.6.1.3.19.2.1.14", &_names[1191],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1190], &_types[1190], NULLOT, &_types[1192]
	},
	{
		"charPortAdminOrigin", "1.3.6.1.3.19.2.1.15", &_names[1192],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1175], &_types[1191], NULLOT, &_types[1193]
	},
	{
		"charPortSessionMaximum", "1.3.6.1.3.19.2.1.16", &_names[1193],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1067], &_types[1192], NULLOT, &_types[1194]
	},
	{
		"charPortSessionNumber", "1.3.6.1.3.19.2.1.17", &_names[1194],
		(OS) 11, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1192], &_types[1193], NULLOT, &_types[1195]
	},
	{
		"charPortSessionIndex", "1.3.6.1.3.19.2.1.18", &_names[1195],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1178], &_types[1194], NULLOT, &_types[1196]
	},
	{
		"charSessTable", "1.3.6.1.3.19.3", &_names[1196],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1176], &_types[1176], &_types[1197], &_types[1197]
	},
	{
		"charSessEntry", "1.3.6.1.3.19.3.1", &_names[1197],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1187], NULLOT, &_types[1207], &_types[1198]
	},
	{
		"charSessPortIndex", "1.3.6.1.3.19.3.1.1", &_names[1198],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1195], NULLOT, NULLOT, &_types[1199]
	},
	{
		"charSessIndex", "1.3.6.1.3.19.3.1.2", &_names[1199],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1198], &_types[1198], NULLOT, &_types[1200]
	},
	{
		"charSessKill", "1.3.6.1.3.19.3.1.3", &_names[1200],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1020], &_types[1199], NULLOT, &_types[1201]
	},
	{
		"charSessState", "1.3.6.1.3.19.3.1.4", &_names[1201],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1189], &_types[1200], NULLOT, &_types[1202]
	},
	{
		"charSessProtocol", "1.3.6.1.3.19.3.1.5", &_names[1202],
		(OS) 6, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1100], &_types[1201], NULLOT, &_types[1203]
	},
	{
		"charSessOperOrigin", "1.3.6.1.3.19.3.1.6", &_names[1203],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1194], &_types[1202], NULLOT, &_types[1204]
	},
	{
		"charSessInCharacters", "1.3.6.1.3.19.3.1.7", &_names[1204],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1191], &_types[1203], NULLOT, &_types[1205]
	},
	{
		"charSessOutCharacters", "1.3.6.1.3.19.3.1.8", &_names[1205],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1204], &_types[1204], NULLOT, &_types[1206]
	},
	{
		"charSessConnectionId", "1.3.6.1.3.19.3.1.9", &_names[1206],
		(OS) 6, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[892], &_types[1205], NULLOT, &_types[1207]
	},
	{
		"charSessStartTime", "1.3.6.1.3.19.3.1.10", &_names[1207],
		(OS) 12, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1171], &_types[1206], NULLOT, &_types[1208]
	},
	{
		"wellKnownProtocols", "1.3.6.1.3.19.4", &_names[1208],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1202], &_types[1196], &_types[1214], &_types[1209]
	},
	{
		"protocolOther", "1.3.6.1.3.19.4.1", &_names[1209],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1079], NULLOT, NULLOT, &_types[1210]
	},
	{
		"protocolTelnet", "1.3.6.1.3.19.4.2", &_names[1210],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[958], &_types[1209], NULLOT, &_types[1211]
	},
	{
		"protocolRlogin", "1.3.6.1.3.19.4.3", &_names[1211],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1196], &_types[1210], NULLOT, &_types[1212]
	},
	{
		"protocolLat", "1.3.6.1.3.19.4.4", &_names[1212],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1199], &_types[1211], NULLOT, &_types[1213]
	},
	{
		"protocolX29", "1.3.6.1.3.19.4.5", &_names[1213],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1152], &_types[1212], NULLOT, &_types[1214]
	},
	{
		"protocolVtp", "1.3.6.1.3.19.4.6", &_names[1214],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1141], &_types[1213], NULLOT, &_types[1215]
	},
	{
		"rs232", "1.3.6.1.3.20", &_names[1215],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, &_types[1174], &_types[1250], &_types[1216]
	},
	{
		"rs232Number", "1.3.6.1.3.20.1", &_names[1216],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1203], NULLOT, NULLOT, &_types[1217]
	},
	{
		"rs232PortTable", "1.3.6.1.3.20.2", &_names[1217],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1211], &_types[1216], &_types[1218], &_types[1218]
	},
	{
		"rs232PortEntry", "1.3.6.1.3.20.2.1", &_names[1218],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1197], NULLOT, &_types[1224], &_types[1219]
	},
	{
		"rs232PortIndex", "1.3.6.1.3.20.2.1.1", &_names[1219],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1212], NULLOT, NULLOT, &_types[1220]
	},
	{
		"rs232PortType", "1.3.6.1.3.20.2.1.2", &_names[1220],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1218], &_types[1219], NULLOT, &_types[1221]
	},
	{
		"rs232PortInSigNumber", "1.3.6.1.3.20.2.1.3", &_names[1221],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1216], &_types[1220], NULLOT, &_types[1222]
	},
	{
		"rs232PortOutSigNumber", "1.3.6.1.3.20.2.1.4", &_names[1222],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1221], &_types[1221], NULLOT, &_types[1223]
	},
	{
		"rs232PortInSpeed", "1.3.6.1.3.20.2.1.5", &_names[1223],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1054], &_types[1222], NULLOT, &_types[1224]
	},
	{
		"rs232PortOutSpeed", "1.3.6.1.3.20.2.1.6", &_names[1224],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1223], &_types[1223], NULLOT, &_types[1225]
	},
	{
		"rs232AsyncPortTable", "1.3.6.1.3.20.3", &_names[1225],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1217], &_types[1217], &_types[1226], &_types[1226]
	},
	{
		"rs232AsyncPortEntry", "1.3.6.1.3.20.3.1", &_names[1226],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1220], NULLOT, &_types[1234], &_types[1227]
	},
	{
		"rs232AsyncPortIndex", "1.3.6.1.3.20.3.1.1", &_names[1227],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1219], NULLOT, NULLOT, &_types[1228]
	},
	{
		"rs232AsyncPortBits", "1.3.6.1.3.20.3.1.2", &_names[1228],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1208], &_types[1227], NULLOT, &_types[1229]
	},
	{
		"rs232AsyncPortStopBits", "1.3.6.1.3.20.3.1.3", &_names[1229],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1228], &_types[1228], NULLOT, &_types[1230]
	},
	{
		"rs232AsyncPortParity", "1.3.6.1.3.20.3.1.4", &_names[1230],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1095], &_types[1229], NULLOT, &_types[1231]
	},
	{
		"rs232AsyncPortAutobaud", "1.3.6.1.3.20.3.1.5", &_names[1231],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1201], &_types[1230], NULLOT, &_types[1232]
	},
	{
		"rs232AsyncPortParityErrs", "1.3.6.1.3.20.3.1.6", &_names[1232],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1012], &_types[1231], NULLOT, &_types[1233]
	},
	{
		"rs232AsyncPortFramingErrs", "1.3.6.1.3.20.3.1.7", &_names[1233],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1232], &_types[1232], NULLOT, &_types[1234]
	},
	{
		"rs232AsyncPortOverrunErrs", "1.3.6.1.3.20.3.1.8", &_names[1234],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1233], &_types[1233], NULLOT, &_types[1235]
	},
	{
		"rs232SyncPortTable", "1.3.6.1.3.20.4", &_names[1235],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1225], &_types[1225], &_types[1236], &_types[1236]
	},
	{
		"rs232SyncPortEntry", "1.3.6.1.3.20.4.1", &_names[1236],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1226], NULLOT, &_types[1243], &_types[1237]
	},
	{
		"rs232SyncPortIndex", "1.3.6.1.3.20.4.1.1", &_names[1237],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1227], NULLOT, NULLOT, &_types[1238]
	},
	{
		"rs232SyncPortClockSource", "1.3.6.1.3.20.4.1.2", &_names[1238],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1181], &_types[1237], NULLOT, &_types[1239]
	},
	{
		"rs232SyncPortFrameCheckErrs", "1.3.6.1.3.20.4.1.3", &_names[1239],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1234], &_types[1238], NULLOT, &_types[1240]
	},
	{
		"rs232SyncPortTransmitUnderrunErrs", "1.3.6.1.3.20.4.1.4", &_names[1240],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1239], &_types[1239], NULLOT, &_types[1241]
	},
	{
		"rs232SyncPortReceiveOverrunErrs", "1.3.6.1.3.20.4.1.5", &_names[1241],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1240], &_types[1240], NULLOT, &_types[1242]
	},
	{
		"rs232SyncPortInterruptedFrames", "1.3.6.1.3.20.4.1.6", &_names[1242],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1235], &_types[1241], NULLOT, &_types[1243]
	},
	{
		"rs232SyncPortAbortedFrames", "1.3.6.1.3.20.4.1.7", &_names[1243],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1242], &_types[1242], NULLOT, &_types[1244]
	},
	{
		"rs232InSigTable", "1.3.6.1.3.20.5", &_names[1244],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1243], &_types[1235], &_types[1245], &_types[1245]
	},
	{
		"rs232InSigEntry", "1.3.6.1.3.20.5.1", &_names[1245],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1236], NULLOT, &_types[1249], &_types[1246]
	},
	{
		"rs232InSigPortIndex", "1.3.6.1.3.20.5.1.1", &_names[1246],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1237], NULLOT, NULLOT, &_types[1247]
	},
	{
		"rs232InSigName", "1.3.6.1.3.20.5.1.2", &_names[1247],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1179], &_types[1246], NULLOT, &_types[1248]
	},
	{
		"rs232InSigState", "1.3.6.1.3.20.5.1.3", &_names[1248],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1231], &_types[1247], NULLOT, &_types[1249]
	},
	{
		"rs232InSigChanges", "1.3.6.1.3.20.5.1.4", &_names[1249],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1205], &_types[1248], NULLOT, &_types[1250]
	},
	{
		"rs232OutSigTable", "1.3.6.1.3.20.6", &_names[1250],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1244], &_types[1244], &_types[1251], &_types[1251]
	},
	{
		"rs232OutSigEntry", "1.3.6.1.3.20.6.1", &_names[1251],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1245], NULLOT, &_types[1255], &_types[1252]
	},
	{
		"rs232OutSigPortIndex", "1.3.6.1.3.20.6.1.1", &_names[1252],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1246], NULLOT, NULLOT, &_types[1253]
	},
	{
		"rs232OutSigName", "1.3.6.1.3.20.6.1.2", &_names[1253],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1247], &_types[1252], NULLOT, &_types[1254]
	},
	{
		"rs232OutSigState", "1.3.6.1.3.20.6.1.3", &_names[1254],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1248], &_types[1253], NULLOT, &_types[1255]
	},
	{
		"rs232OutSigChanges", "1.3.6.1.3.20.6.1.4", &_names[1255],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1249], &_types[1254], NULLOT, &_types[1256]
	},
	{
		"frame-relay", "1.3.6.1.3.26", &_names[1256],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1250], &_types[1215], &_types[1285], &_types[1257]
	},
	{
		"frDlcmiTable", "1.3.6.1.3.26.1", &_names[1257],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1256], NULLOT, &_types[1258], &_types[1258]
	},
	{
		"frDlcmiEntry", "1.3.6.1.3.26.1.1", &_names[1258],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1251], NULLOT, &_types[1268], &_types[1259]
	},
	{
		"frDlcmiIfIndex", "1.3.6.1.3.26.1.1.1", &_names[1259],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1252], NULLOT, NULLOT, &_types[1260]
	},
	{
		"frDlcmiState", "1.3.6.1.3.26.1.1.2", &_names[1260],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1254], &_types[1259], NULLOT, &_types[1261]
	},
	{
		"frDlcmiAddress", "1.3.6.1.3.26.1.1.3", &_names[1261],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1230], &_types[1260], NULLOT, &_types[1262]
	},
	{
		"frDlcmiAddressLen", "1.3.6.1.3.26.1.1.4", &_names[1262],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1257], &_types[1261], NULLOT, &_types[1263]
	},
	{
		"frDlcmiPollingInterval", "1.3.6.1.3.26.1.1.5", &_names[1263],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1035], &_types[1262], NULLOT, &_types[1264]
	},
	{
		"frDlcmiFullEnquiryInterval", "1.3.6.1.3.26.1.1.6", &_names[1264],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1263], &_types[1263], NULLOT, &_types[1265]
	},
	{
		"frDlcmiErrorThreshold", "1.3.6.1.3.26.1.1.7", &_names[1265],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1162], &_types[1264], NULLOT, &_types[1266]
	},
	{
		"frDlcmiMonitoredEvents", "1.3.6.1.3.26.1.1.8", &_names[1266],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[751], &_types[1265], NULLOT, &_types[1267]
	},
	{
		"frDlcmiMaxSupportedVCs", "1.3.6.1.3.26.1.1.9", &_names[1267],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1102], &_types[1266], NULLOT, &_types[1268]
	},
	{
		"frDlcmiMulticast", "1.3.6.1.3.26.1.1.10", &_names[1268],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1193], &_types[1267], NULLOT, &_types[1269]
	},
	{
		"frCircuitTable", "1.3.6.1.3.26.2", &_names[1269],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1262], &_types[1257], &_types[1270], &_types[1270]
	},
	{
		"frCircuitEntry", "1.3.6.1.3.26.2.1", &_names[1270],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1258], NULLOT, &_types[1284], &_types[1271]
	},
	{
		"frCircuitIfIndex", "1.3.6.1.3.26.2.1.1", &_names[1271],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1259], NULLOT, NULLOT, &_types[1272]
	},
	{
		"frCircuitDlci", "1.3.6.1.3.26.2.1.2", &_names[1272],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1210], &_types[1271], NULLOT, &_types[1273]
	},
	{
		"frCircuitState", "1.3.6.1.3.26.2.1.3", &_names[1273],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1260], &_types[1272], NULLOT, &_types[1274]
	},
	{
		"frCircuitFECNreceived", "1.3.6.1.3.26.2.1.4", &_names[1274],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1261], &_types[1273], NULLOT, &_types[1275]
	},
	{
		"frCircuitBECNreceived", "1.3.6.1.3.26.2.1.5", &_names[1275],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1274], &_types[1274], NULLOT, &_types[1276]
	},
	{
		"frCircuitFramesSent", "1.3.6.1.3.26.2.1.6", &_names[1276],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1255], &_types[1275], NULLOT, &_types[1277]
	},
	{
		"frCircuitOctetsSent", "1.3.6.1.3.26.2.1.7", &_names[1277],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1276], &_types[1276], NULLOT, &_types[1278]
	},
	{
		"frCircuitFramesReceived", "1.3.6.1.3.26.2.1.8", &_names[1278],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1063], &_types[1277], NULLOT, &_types[1279]
	},
	{
		"frCircuitOctetsReceived", "1.3.6.1.3.26.2.1.9", &_names[1279],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1278], &_types[1278], NULLOT, &_types[1280]
	},
	{
		"frCircuitCreationTime", "1.3.6.1.3.26.2.1.10", &_names[1280],
		(OS) 12, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1207], &_types[1279], NULLOT, &_types[1281]
	},
	{
		"frCircuitLastTimeChange", "1.3.6.1.3.26.2.1.11", &_names[1281],
		(OS) 12, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1277], &_types[1280], NULLOT, &_types[1282]
	},
	{
		"frCircuitCommittedBurst", "1.3.6.1.3.26.2.1.12", &_names[1282],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1271], &_types[1281], NULLOT, &_types[1283]
	},
	{
		"frCircuitExcessBurst", "1.3.6.1.3.26.2.1.13", &_names[1283],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1282], &_types[1282], NULLOT, &_types[1284]
	},
	{
		"frCircuitThroughput", "1.3.6.1.3.26.2.1.14", &_names[1284],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1265], &_types[1283], NULLOT, &_types[1285]
	},
	{
		"frErrTable", "1.3.6.1.3.26.3", &_names[1285],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1269], &_types[1269], &_types[1286], &_types[1286]
	},
	{
		"frErrEntry", "1.3.6.1.3.26.3.1", &_names[1286],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1270], NULLOT, &_types[1290], &_types[1287]
	},
	{
		"frErrIfIndex", "1.3.6.1.3.26.3.1.1", &_names[1287],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1283], NULLOT, NULLOT, &_types[1288]
	},
	{
		"frErrType", "1.3.6.1.3.26.3.1.2", &_names[1288],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1286], &_types[1287], NULLOT, &_types[1289]
	},
	{
		"frErrData", "1.3.6.1.3.26.3.1.3", &_names[1289],
		(OS) 3, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1156], &_types[1288], NULLOT, &_types[1290]
	},
	{
		"frErrTime", "1.3.6.1.3.26.3.1.4", &_names[1290],
		(OS) 12, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1280], &_types[1289], NULLOT, &_types[1291]
	},
	{
		"snmpDot3RptrMgt", "1.3.6.1.3.29", &_names[1291],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1253], &_types[1256], &_types[1344], &_types[1292]
	},
	{
		"rptrBasicGroup", "1.3.6.1.3.29.1", &_names[1292],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1268], NULLOT, &_types[1315], &_types[1293]
	},
	{
		"rptrBasicTable", "1.3.6.1.3.29.1.1", &_names[1293],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1285], NULLOT, &_types[1294], &_types[1294]
	},
	{
		"rptrBasicEntry", "1.3.6.1.3.29.1.1.1", &_names[1294],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1288], NULLOT, &_types[1306], &_types[1295]
	},
	{
		"rptrBasID", "1.3.6.1.3.29.1.1.1.1", &_names[1295],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1292], NULLOT, NULLOT, &_types[1296]
	},
	{
		"rptrBasManufacturer", "1.3.6.1.3.29.1.1.1.2", &_names[1296],
		(OS) 3, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1291], &_types[1295], NULLOT, &_types[1297]
	},
	{
		"rptrBasProduct", "1.3.6.1.3.29.1.1.1.3", &_names[1297],
		(OS) 3, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1229], &_types[1296], NULLOT, &_types[1298]
	},
	{
		"rptrBasVersion", "1.3.6.1.3.29.1.1.1.4", &_names[1298],
		(OS) 3, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1209], &_types[1297], NULLOT, &_types[1299]
	},
	{
		"rptrBasGroupCapacity", "1.3.6.1.3.29.1.1.1.5", &_names[1299],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1214], &_types[1298], NULLOT, &_types[1300]
	},
	{
		"rptrBasGroupMap", "1.3.6.1.3.29.1.1.1.6", &_names[1300],
		(OS) 3, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1281], &_types[1299], NULLOT, &_types[1301]
	},
	{
		"rptrBasHealthState", "1.3.6.1.3.29.1.1.1.7", &_names[1301],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1273], &_types[1300], NULLOT, &_types[1302]
	},
	{
		"rptrBasHealthText", "1.3.6.1.3.29.1.1.1.8", &_names[1302],
		(OS) 4, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1048], &_types[1301], NULLOT, &_types[1303]
	},
	{
		"rptrBasHealthData", "1.3.6.1.3.29.1.1.1.9", &_names[1303],
		(OS) 3, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1289], &_types[1302], NULLOT, &_types[1304]
	},
	{
		"rptrBasReset", "1.3.6.1.3.29.1.1.1.10", &_names[1304],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1301], &_types[1303], NULLOT, &_types[1305]
	},
	{
		"rptrBasSelfTest1", "1.3.6.1.3.29.1.1.1.11", &_names[1305],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1173], &_types[1304], NULLOT, &_types[1306]
	},
	{
		"rptrBasSelfTest2", "1.3.6.1.3.29.1.1.1.12", &_names[1306],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1305], &_types[1305], NULLOT, &_types[1307]
	},
	{
		"rptrBasicGroupTable", "1.3.6.1.3.29.1.2", &_names[1307],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1293], &_types[1293], &_types[1308], &_types[1308]
	},
	{
		"rptrBasicGroupEntry", "1.3.6.1.3.29.1.2.1", &_names[1308],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1294], NULLOT, &_types[1314], &_types[1309]
	},
	{
		"rptrBasGroupRptrID", "1.3.6.1.3.29.1.2.1.1", &_names[1309],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1295], NULLOT, NULLOT, &_types[1310]
	},
	{
		"rptrBasGroupID", "1.3.6.1.3.29.1.2.1.2", &_names[1310],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1309], &_types[1309], NULLOT, &_types[1311]
	},
	{
		"rptrBasGroupDescr", "1.3.6.1.3.29.1.2.1.3", &_names[1311],
		(OS) 4, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1036], &_types[1310], NULLOT, &_types[1312]
	},
	{
		"rptrBasGroupObjectID", "1.3.6.1.3.29.1.2.1.4", &_names[1312],
		(OS) 6, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1310], &_types[1311], NULLOT, &_types[1313]
	},
	{
		"rptrBasGroupUpTime", "1.3.6.1.3.29.1.2.1.5", &_names[1313],
		(OS) 12, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1290], &_types[1312], NULLOT, &_types[1314]
	},
	{
		"rptrBasGroupNumOfPorts", "1.3.6.1.3.29.1.2.1.6", &_names[1314],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[538], &_types[1313], NULLOT, &_types[1315]
	},
	{
		"rptrBasicPortTable", "1.3.6.1.3.29.1.3", &_names[1315],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1307], &_types[1307], &_types[1316], &_types[1316]
	},
	{
		"rptrBasicPortEntry", "1.3.6.1.3.29.1.3.1", &_names[1316],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1308], NULLOT, &_types[1321], &_types[1317]
	},
	{
		"rptrBasPortRptrID", "1.3.6.1.3.29.1.3.1.1", &_names[1317],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1312], NULLOT, NULLOT, &_types[1318]
	},
	{
		"rptrBasPortGroupID", "1.3.6.1.3.29.1.3.1.2", &_names[1318],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1317], &_types[1317], NULLOT, &_types[1319]
	},
	{
		"rptrBasPortID", "1.3.6.1.3.29.1.3.1.3", &_names[1319],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1318], &_types[1318], NULLOT, &_types[1320]
	},
	{
		"rptrBasPortAdminState", "1.3.6.1.3.29.1.3.1.4", &_names[1320],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1304], &_types[1319], NULLOT, &_types[1321]
	},
	{
		"rptrBasPortAutoPartitionState", "1.3.6.1.3.29.1.3.1.5", &_names[1321],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1320], &_types[1320], NULLOT, &_types[1322]
	},
	{
		"rptrMonitorGroup", "1.3.6.1.3.29.2", &_names[1322],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1319], &_types[1292], &_types[1328], &_types[1323]
	},
	{
		"rptrMonitorTable", "1.3.6.1.3.29.2.1", &_names[1323],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1315], NULLOT, &_types[1324], &_types[1324]
	},
	{
		"rptrMonitorEntry", "1.3.6.1.3.29.2.1.1", &_names[1324],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1316], NULLOT, &_types[1327], &_types[1325]
	},
	{
		"rptrMonID", "1.3.6.1.3.29.2.1.1.1", &_names[1325],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1322], NULLOT, NULLOT, &_types[1326]
	},
	{
		"rptrMonTransmitCollisions", "1.3.6.1.3.29.2.1.1.2", &_names[1326],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1321], &_types[1325], NULLOT, &_types[1327]
	},
	{
		"rptrMonMJLPs", "1.3.6.1.3.29.2.1.1.3", &_names[1327],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[777], &_types[1326], NULLOT, &_types[1328]
	},
	{
		"rptrMonitorPortTable", "1.3.6.1.3.29.2.2", &_names[1328],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1323], &_types[1323], &_types[1329], &_types[1329]
	},
	{
		"rptrMonitorPortEntry", "1.3.6.1.3.29.2.2.1", &_names[1329],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1324], NULLOT, &_types[1343], &_types[1330]
	},
	{
		"rptrMonPortRptrID", "1.3.6.1.3.29.2.2.1.1", &_names[1330],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1325], NULLOT, NULLOT, &_types[1331]
	},
	{
		"rptrMonPortGroupID", "1.3.6.1.3.29.2.2.1.2", &_names[1331],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1330], &_types[1330], NULLOT, &_types[1332]
	},
	{
		"rptrMonPortID", "1.3.6.1.3.29.2.2.1.3", &_names[1332],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1331], &_types[1331], NULLOT, &_types[1333]
	},
	{
		"rptrMonPortReadableFrames", "1.3.6.1.3.29.2.2.1.4", &_names[1333],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1328], &_types[1332], NULLOT, &_types[1334]
	},
	{
		"rptrMonPortReadableOctets", "1.3.6.1.3.29.2.2.1.5", &_names[1334],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1326], &_types[1333], NULLOT, &_types[1335]
	},
	{
		"rptrMonPortFrameCheckSequenceErrs", "1.3.6.1.3.29.2.2.1.6", &_names[1335],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1241], &_types[1334], NULLOT, &_types[1336]
	},
	{
		"rptrMonPortAlignmentErrors", "1.3.6.1.3.29.2.2.1.7", &_names[1336],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1335], &_types[1335], NULLOT, &_types[1337]
	},
	{
		"rptrMonPortFrameTooLongs", "1.3.6.1.3.29.2.2.1.8", &_names[1337],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1329], &_types[1336], NULLOT, &_types[1338]
	},
	{
		"rptrMonPortShortEvents", "1.3.6.1.3.29.2.2.1.9", &_names[1338],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1266], &_types[1337], NULLOT, &_types[1339]
	},
	{
		"rptrMonPortRunts", "1.3.6.1.3.29.2.2.1.10", &_names[1339],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1337], &_types[1338], NULLOT, &_types[1340]
	},
	{
		"rptrMonPortCollisions", "1.3.6.1.3.29.2.2.1.11", &_names[1340],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1334], &_types[1339], NULLOT, &_types[1341]
	},
	{
		"rptrMonPortLateCollisions", "1.3.6.1.3.29.2.2.1.12", &_names[1341],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1340], &_types[1340], NULLOT, &_types[1342]
	},
	{
		"rptrMonPortDataRateMismatches", "1.3.6.1.3.29.2.2.1.13", &_names[1342],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1303], &_types[1341], NULLOT, &_types[1343]
	},
	{
		"rptrMonPortAutoPartitions", "1.3.6.1.3.29.2.2.1.14", &_names[1343],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1275], &_types[1342], NULLOT, &_types[1344]
	},
	{
		"rptrAddrTrackGroup", "1.3.6.1.3.29.3", &_names[1344],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1332], &_types[1322], &_types[1345], &_types[1345]
	},
	{
		"rptrAddrTrackTable", "1.3.6.1.3.29.3.1", &_names[1345],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1333], NULLOT, &_types[1346], &_types[1346]
	},
	{
		"rptrAddrTrackEntry", "1.3.6.1.3.29.3.1.1", &_names[1346],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1339], NULLOT, &_types[1351], &_types[1347]
	},
	{
		"rptrAddrRptrID", "1.3.6.1.3.29.3.1.1.1", &_names[1347],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1344], NULLOT, NULLOT, &_types[1348]
	},
	{
		"rptrAddrGroupID", "1.3.6.1.3.29.3.1.1.2", &_names[1348],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1347], &_types[1347], NULLOT, &_types[1349]
	},
	{
		"rptrAddrPortID", "1.3.6.1.3.29.3.1.1.3", &_names[1349],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1348], &_types[1348], NULLOT, &_types[1350]
	},
	{
		"rptrAddrLastSourceAddress", "1.3.6.1.3.29.3.1.1.4", &_names[1350],
		(OS) 3, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1343], &_types[1349], NULLOT, &_types[1351]
	},
	{
		"rptrAddrSourceAddrChanges", "1.3.6.1.3.29.3.1.1.5", &_names[1351],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1300], &_types[1350], NULLOT, &_types[1352]
	},
	{
		"private", "1.3.6.1.4", &_names[1352],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1302], &_types[767], &_types[1353], &_types[1353]
	},
	{
		"enterprises", "1.3.6.1.4.1", &_names[1353],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1346], NULLOT, &_types[1492], &_types[1354]
	},
	{
		"unix", "1.3.6.1.4.1.4", &_names[1354],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1279], NULLOT, &_types[1451], &_types[1355]
	},
	{
		"agents", "1.3.6.1.4.1.4.1", &_names[1355],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1287], NULLOT, &_types[1357], &_types[1356]
	},
	{
		"fourBSD-isode", "1.3.6.1.4.1.4.1.2", &_names[1356],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1341], NULLOT, NULLOT, &_types[1357]
	},
	{
		"agentAction", "1.3.6.1.4.1.4.1.3", &_names[1357],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1311], &_types[1356], NULLOT, &_types[1358]
	},
	{
		"mbuf", "1.3.6.1.4.1.4.2", &_names[1358],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1356], &_types[1355], &_types[1370], &_types[1359]
	},
	{
		"mbufs", "1.3.6.1.4.1.4.2.1", &_names[1359],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1358], NULLOT, NULLOT, &_types[1360]
	},
	{
		"mbufClusters", "1.3.6.1.4.1.4.2.2", &_names[1360],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[621], &_types[1359], NULLOT, &_types[1361]
	},
	{
		"mbufFreeClusters", "1.3.6.1.4.1.4.2.3", &_names[1361],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1360], &_types[1360], NULLOT, &_types[1362]
	},
	{
		"mbufDrops", "1.3.6.1.4.1.4.2.4", &_names[1362],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1350], &_types[1361], NULLOT, &_types[1363]
	},
	{
		"mbufWaits", "1.3.6.1.4.1.4.2.5", &_names[1363],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1355], &_types[1362], NULLOT, &_types[1364]
	},
	{
		"mbufDrains", "1.3.6.1.4.1.4.2.6", &_names[1364],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1314], &_types[1363], NULLOT, &_types[1365]
	},
	{
		"mbufFrees", "1.3.6.1.4.1.4.2.7", &_names[1365],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1238], &_types[1364], NULLOT, &_types[1366]
	},
	{
		"mbufTable", "1.3.6.1.4.1.4.2.8", &_names[1366],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1345], &_types[1365], &_types[1367], &_types[1367]
	},
	{
		"mbufEntry", "1.3.6.1.4.1.4.2.8.1", &_names[1367],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1353], NULLOT, &_types[1369], &_types[1368]
	},
	{
		"mbufType", "1.3.6.1.4.1.4.2.8.1.1", &_names[1368],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1367], NULLOT, NULLOT, &_types[1369]
	},
	{
		"mbufAllocates", "1.3.6.1.4.1.4.2.8.1.2", &_names[1369],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1362], &_types[1368], NULLOT, &_types[1370]
	},
	{
		"mbufSpaces", "1.3.6.1.4.1.4.2.9", &_names[1370],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[327], &_types[1366], NULLOT, &_types[1371]
	},
	{
		"peers", "1.3.6.1.4.1.4.3", &_names[1371],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1354], &_types[1358], &_types[1372], &_types[1372]
	},
	{
		"unixd", "1.3.6.1.4.1.4.3.1", &_names[1372],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1371], NULLOT, NULLOT, &_types[1373]
	},
	{
		"smux", "1.3.6.1.4.1.4.4", &_names[1373],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1272], &_types[1371], &_types[1380], &_types[1374]
	},
	{
		"smuxPeerTable", "1.3.6.1.4.1.4.4.1", &_names[1374],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1366], NULLOT, &_types[1375], &_types[1375]
	},
	{
		"smuxPeerEntry", "1.3.6.1.4.1.4.4.1.1", &_names[1375],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1368], NULLOT, &_types[1379], &_types[1376]
	},
	{
		"smuxPindex", "1.3.6.1.4.1.4.4.1.1.1", &_names[1376],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1374], NULLOT, NULLOT, &_types[1377]
	},
	{
		"smuxPidentity", "1.3.6.1.4.1.4.4.1.1.2", &_names[1377],
		(OS) 6, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[603], &_types[1376], NULLOT, &_types[1378]
	},
	{
		"smuxPdescription", "1.3.6.1.4.1.4.4.1.1.3", &_names[1378],
		(OS) 4, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[871], &_types[1377], NULLOT, &_types[1379]
	},
	{
		"smuxPstatus", "1.3.6.1.4.1.4.4.1.1.4", &_names[1379],
		(OS) 27, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, &_types[1378], NULLOT, &_types[1380]
	},
	{
		"smuxTreeTable", "1.3.6.1.4.1.4.4.2", &_names[1380],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1376], &_types[1374], &_types[1381], &_types[1381]
	},
	{
		"smuxTreeEntry", "1.3.6.1.4.1.4.4.2.1", &_names[1381],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1375], NULLOT, &_types[1385], &_types[1382]
	},
	{
		"smuxTsubtree", "1.3.6.1.4.1.4.4.2.1.1", &_names[1382],
		(OS) 6, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[988], NULLOT, NULLOT, &_types[1383]
	},
	{
		"smuxTpriority", "1.3.6.1.4.1.4.4.2.1.2", &_names[1383],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1382], &_types[1382], NULLOT, &_types[1384]
	},
	{
		"smuxTindex", "1.3.6.1.4.1.4.4.2.1.3", &_names[1384],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1365], &_types[1383], NULLOT, &_types[1385]
	},
	{
		"smuxTstatus", "1.3.6.1.4.1.4.4.2.1.4", &_names[1385],
		(OS) 28, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1380], &_types[1384], NULLOT, &_types[1386]
	},
	{
		"netstat", "1.3.6.1.4.1.4.5", &_names[1386],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1160], &_types[1373], &_types[1408], &_types[1387]
	},
	{
		"unixNetstat", "1.3.6.1.4.1.4.5.1", &_names[1387],
		(OS) 29, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1386], NULLOT, NULLOT, &_types[1388]
	},
	{
		"unixTcpConnTable", "1.3.6.1.4.1.4.5.2", &_names[1388],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1385], &_types[1387], &_types[1389], &_types[1389]
	},
	{
		"unixTcpConnEntry", "1.3.6.1.4.1.4.5.2.1", &_names[1389],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1381], NULLOT, &_types[1391], &_types[1390]
	},
	{
		"unixTcpConnSendQ", "1.3.6.1.4.1.4.5.2.1.1", &_names[1390],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1379], NULLOT, NULLOT, &_types[1391]
	},
	{
		"unixTcpConnRecvQ", "1.3.6.1.4.1.4.5.2.1.2", &_names[1391],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1390], &_types[1390], NULLOT, &_types[1392]
	},
	{
		"unixUdpTable", "1.3.6.1.4.1.4.5.3", &_names[1392],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1388], &_types[1388], &_types[1393], &_types[1393]
	},
	{
		"unixUdpEntry", "1.3.6.1.4.1.4.5.3.1", &_names[1393],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1389], NULLOT, &_types[1397], &_types[1394]
	},
	{
		"unixUdpRemAddress", "1.3.6.1.4.1.4.5.3.1.1", &_names[1394],
		(OS) 8, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1369], NULLOT, NULLOT, &_types[1395]
	},
	{
		"unixUdpRemPort", "1.3.6.1.4.1.4.5.3.1.2", &_names[1395],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1364], &_types[1394], NULLOT, &_types[1396]
	},
	{
		"unixUdpSendQ", "1.3.6.1.4.1.4.5.3.1.3", &_names[1396],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1391], &_types[1395], NULLOT, &_types[1397]
	},
	{
		"unixUdpRecvQ", "1.3.6.1.4.1.4.5.3.1.4", &_names[1397],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1396], &_types[1396], NULLOT, &_types[1398]
	},
	{
		"unixIpRoutingTable", "1.3.6.1.4.1.4.5.4", &_names[1398],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1392], &_types[1392], &_types[1399], &_types[1399]
	},
	{
		"unixIpRouteEntry", "1.3.6.1.4.1.4.5.4.1", &_names[1399],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1393], NULLOT, &_types[1402], &_types[1400]
	},
	{
		"unixIpRouteFlags", "1.3.6.1.4.1.4.5.4.1.1", &_names[1400],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1373], NULLOT, NULLOT, &_types[1401]
	},
	{
		"unixIpRouteRefCnt", "1.3.6.1.4.1.4.5.4.1.2", &_names[1401],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1169], &_types[1400], NULLOT, &_types[1402]
	},
	{
		"unixIpRouteUses", "1.3.6.1.4.1.4.5.4.1.3", &_names[1402],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1047], &_types[1401], NULLOT, &_types[1403]
	},
	{
		"unixRouteBadRedirects", "1.3.6.1.4.1.4.5.5", &_names[1403],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1378], &_types[1398], NULLOT, &_types[1404]
	},
	{
		"unixRouteCreatedByRedirects", "1.3.6.1.4.1.4.5.6", &_names[1404],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1403], &_types[1403], NULLOT, &_types[1405]
	},
	{
		"unixRouteModifiedByRedirects", "1.3.6.1.4.1.4.5.7", &_names[1405],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1404], &_types[1404], NULLOT, &_types[1406]
	},
	{
		"unixRouteLookupFails", "1.3.6.1.4.1.4.5.8", &_names[1406],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1200], &_types[1405], NULLOT, &_types[1407]
	},
	{
		"unixRouteWildcardUses", "1.3.6.1.4.1.4.5.9", &_names[1407],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1402], &_types[1406], NULLOT, &_types[1408]
	},
	{
		"unixClnpRoutingTable", "1.3.6.1.4.1.4.5.10", &_names[1408],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1398], &_types[1407], &_types[1409], &_types[1409]
	},
	{
		"unixClnpRouteEntry", "1.3.6.1.4.1.4.5.10.1", &_names[1409],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1399], NULLOT, &_types[1412], &_types[1410]
	},
	{
		"unixClnpRouteFlags", "1.3.6.1.4.1.4.5.10.1.1", &_names[1410],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1400], NULLOT, NULLOT, &_types[1411]
	},
	{
		"unixClnpRouteRefCnt", "1.3.6.1.4.1.4.5.10.1.2", &_names[1411],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1401], &_types[1410], NULLOT, &_types[1412]
	},
	{
		"unixClnpRouteUses", "1.3.6.1.4.1.4.5.10.1.3", &_names[1412],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1407], &_types[1411], NULLOT, &_types[1413]
	},
	{
		"print", "1.3.6.1.4.1.4.6", &_names[1413],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1352], &_types[1386], &_types[1421], &_types[1414]
	},
	{
		"printQTable", "1.3.6.1.4.1.4.6.1", &_names[1414],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1408], NULLOT, &_types[1415], &_types[1415]
	},
	{
		"printQEntry", "1.3.6.1.4.1.4.6.1.1", &_names[1415],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1409], NULLOT, &_types[1420], &_types[1416]
	},
	{
		"printQName", "1.3.6.1.4.1.4.6.1.1.1", &_names[1416],
		(OS) 4, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1296], NULLOT, NULLOT, &_types[1417]
	},
	{
		"printQStatus", "1.3.6.1.4.1.4.6.1.1.2", &_names[1417],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1359], &_types[1416], NULLOT, &_types[1418]
	},
	{
		"printQDisplay", "1.3.6.1.4.1.4.6.1.1.3", &_names[1418],
		(OS) 4, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1009], &_types[1417], NULLOT, &_types[1419]
	},
	{
		"printQEntries", "1.3.6.1.4.1.4.6.1.1.4", &_names[1419],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1415], &_types[1418], NULLOT, &_types[1420]
	},
	{
		"printQAction", "1.3.6.1.4.1.4.6.1.1.5", &_names[1420],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1357], &_types[1419], NULLOT, &_types[1421]
	},
	{
		"printJTable", "1.3.6.1.4.1.4.6.2", &_names[1421],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1414], &_types[1414], &_types[1422], &_types[1422]
	},
	{
		"printJEntry", "1.3.6.1.4.1.4.6.2.1", &_names[1422],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1419], NULLOT, &_types[1428], &_types[1423]
	},
	{
		"printJRank", "1.3.6.1.4.1.4.6.2.1.1", &_names[1423],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1363], NULLOT, NULLOT, &_types[1424]
	},
	{
		"printJName", "1.3.6.1.4.1.4.6.2.1.2", &_names[1424],
		(OS) 4, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1416], &_types[1423], NULLOT, &_types[1425]
	},
	{
		"printJOwner", "1.3.6.1.4.1.4.6.2.1.3", &_names[1425],
		(OS) 4, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1222], &_types[1424], NULLOT, &_types[1426]
	},
	{
		"printJDescription", "1.3.6.1.4.1.4.6.2.1.4", &_names[1426],
		(OS) 4, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1420], &_types[1425], NULLOT, &_types[1427]
	},
	{
		"printJSize", "1.3.6.1.4.1.4.6.2.1.5", &_names[1427],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1349], &_types[1426], NULLOT, &_types[1428]
	},
	{
		"printJAction", "1.3.6.1.4.1.4.6.2.1.6", &_names[1428],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1426], &_types[1427], NULLOT, &_types[1429]
	},
	{
		"users", "1.3.6.1.4.1.4.7", &_names[1429],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1412], &_types[1413], &_types[1448], &_types[1430]
	},
	{
		"userTable", "1.3.6.1.4.1.4.7.1", &_names[1430],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1421], NULLOT, &_types[1431], &_types[1431]
	},
	{
		"userEntry", "1.3.6.1.4.1.4.7.1.1", &_names[1431],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1422], NULLOT, &_types[1441], &_types[1432]
	},
	{
		"userName", "1.3.6.1.4.1.4.7.1.1.1", &_names[1432],
		(OS) 4, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1424], NULLOT, NULLOT, &_types[1433]
	},
	{
		"userPasswd", "1.3.6.1.4.1.4.7.1.1.2", &_names[1433],
		(OS) 4, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1306], &_types[1432], NULLOT, &_types[1434]
	},
	{
		"userID", "1.3.6.1.4.1.4.7.1.1.3", &_names[1434],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1427], &_types[1433], NULLOT, &_types[1435]
	},
	{
		"userGroup", "1.3.6.1.4.1.4.7.1.1.4", &_names[1435],
		(OS) 4, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1434], &_types[1434], NULLOT, &_types[1436]
	},
	{
		"userQuota", "1.3.6.1.4.1.4.7.1.1.5", &_names[1436],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1431], &_types[1435], NULLOT, &_types[1437]
	},
	{
		"userComment", "1.3.6.1.4.1.4.7.1.1.6", &_names[1437],
		(OS) 4, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1394], &_types[1436], NULLOT, &_types[1438]
	},
	{
		"userFullName", "1.3.6.1.4.1.4.7.1.1.7", &_names[1438],
		(OS) 4, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1432], &_types[1437], NULLOT, &_types[1439]
	},
	{
		"userHome", "1.3.6.1.4.1.4.7.1.1.8", &_names[1439],
		(OS) 4, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1425], &_types[1438], NULLOT, &_types[1440]
	},
	{
		"userShell", "1.3.6.1.4.1.4.7.1.1.9", &_names[1440],
		(OS) 4, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1372], &_types[1439], NULLOT, &_types[1441]
	},
	{
		"userStatus", "1.3.6.1.4.1.4.7.1.1.10", &_names[1441],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1417], &_types[1440], NULLOT, &_types[1442]
	},
	{
		"groupTable", "1.3.6.1.4.1.4.7.2", &_names[1442],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1430], &_types[1430], &_types[1443], &_types[1443]
	},
	{
		"groupEntry", "1.3.6.1.4.1.4.7.2.1", &_names[1443],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1436], NULLOT, &_types[1447], &_types[1444]
	},
	{
		"groupName", "1.3.6.1.4.1.4.7.2.1.1", &_names[1444],
		(OS) 4, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1438], NULLOT, NULLOT, &_types[1445]
	},
	{
		"groupPasswd", "1.3.6.1.4.1.4.7.2.1.2", &_names[1445],
		(OS) 4, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1433], &_types[1444], NULLOT, &_types[1446]
	},
	{
		"groupID", "1.3.6.1.4.1.4.7.2.1.3", &_names[1446],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1435], &_types[1445], NULLOT, &_types[1447]
	},
	{
		"groupStatus", "1.3.6.1.4.1.4.7.2.1.4", &_names[1447],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1441], &_types[1446], NULLOT, &_types[1448]
	},
	{
		"grUserTable", "1.3.6.1.4.1.4.7.3", &_names[1448],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1442], &_types[1442], &_types[1449], &_types[1449]
	},
	{
		"grUserEntry", "1.3.6.1.4.1.4.7.3.1", &_names[1449],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1443], NULLOT, &_types[1450], &_types[1450]
	},
	{
		"grUserStatus", "1.3.6.1.4.1.4.7.3.1.1", &_names[1450],
		(OS) 0, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1447], NULLOT, NULLOT, &_types[1451]
	},
	{
		"unixFs", "1.3.6.1.4.1.4.8", &_names[1451],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		NULLOT, &_types[1429], &_types[1452], &_types[1452]
	},
	{
		"fsTable", "1.3.6.1.4.1.4.8.1", &_names[1452],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1448], NULLOT, &_types[1453], &_types[1453]
	},
	{
		"fsTableEntry", "1.3.6.1.4.1.4.8.1.1", &_names[1453],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1449], NULLOT, &_types[1464], &_types[1454]
	},
	{
		"fsIdentifier", "1.3.6.1.4.1.4.8.1.1.1", &_names[1454],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[875], NULLOT, NULLOT, &_types[1455]
	},
	{
		"fsName", "1.3.6.1.4.1.4.8.1.1.2", &_names[1455],
		(OS) 4, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1444], &_types[1454], NULLOT, &_types[1456]
	},
	{
		"fsMountPoint", "1.3.6.1.4.1.4.8.1.1.3", &_names[1456],
		(OS) 4, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1454], &_types[1455], NULLOT, &_types[1457]
	},
	{
		"fsMountType", "1.3.6.1.4.1.4.8.1.1.4", &_names[1457],
		(OS) 4, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1453], &_types[1456], NULLOT, &_types[1458]
	},
	{
		"fsMountOptions", "1.3.6.1.4.1.4.8.1.1.5", &_names[1458],
		(OS) 4, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[900], &_types[1457], NULLOT, &_types[1459]
	},
	{
		"fsBlockSize", "1.3.6.1.4.1.4.8.1.1.6", &_names[1459],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1446], &_types[1458], NULLOT, &_types[1460]
	},
	{
		"fsBlockCount", "1.3.6.1.4.1.4.8.1.1.7", &_names[1460],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1411], &_types[1459], NULLOT, &_types[1461]
	},
	{
		"fsBlocksFree", "1.3.6.1.4.1.4.8.1.1.8", &_names[1461],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1384], &_types[1460], NULLOT, &_types[1462]
	},
	{
		"fsBlocksAvailable", "1.3.6.1.4.1.4.8.1.1.9", &_names[1462],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[916], &_types[1461], NULLOT, &_types[1463]
	},
	{
		"fsInodeCount", "1.3.6.1.4.1.4.8.1.1.10", &_names[1463],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1460], &_types[1462], NULLOT, &_types[1464]
	},
	{
		"fsInodesAvailable", "1.3.6.1.4.1.4.8.1.1.11", &_names[1464],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1462], &_types[1463], NULLOT, &_types[1465]
	},
	{
		"snmpResearch", "1.3.6.1.4.1.99", &_names[1465],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1450], &_types[1354], &_types[1483], &_types[1466]
	},
	{
		"functions", "1.3.6.1.4.1.99.3", &_names[1466],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1423], NULLOT, &_types[1482], &_types[1467]
	},
	{
		"functAdd", "1.3.6.1.4.1.99.3.1", &_names[1467],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1437], NULLOT, NULLOT, &_types[1468]
	},
	{
		"functSub", "1.3.6.1.4.1.99.3.2", &_names[1468],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1465], &_types[1467], NULLOT, &_types[1469]
	},
	{
		"functMul", "1.3.6.1.4.1.99.3.3", &_names[1469],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1459], &_types[1468], NULLOT, &_types[1470]
	},
	{
		"functDiv", "1.3.6.1.4.1.99.3.4", &_names[1470],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1397], &_types[1469], NULLOT, &_types[1471]
	},
	{
		"functMod", "1.3.6.1.4.1.99.3.5", &_names[1471],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1445], &_types[1470], NULLOT, &_types[1472]
	},
	{
		"functNeg", "1.3.6.1.4.1.99.3.6", &_names[1472],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1440], &_types[1471], NULLOT, &_types[1473]
	},
	{
		"functXch", "1.3.6.1.4.1.99.3.7", &_names[1473],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1387], &_types[1472], NULLOT, &_types[1474]
	},
	{
		"functClr", "1.3.6.1.4.1.99.3.8", &_names[1474],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1463], &_types[1473], NULLOT, &_types[1475]
	},
	{
		"functDup", "1.3.6.1.4.1.99.3.9", &_names[1475],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1466], &_types[1474], NULLOT, &_types[1476]
	},
	{
		"functPop", "1.3.6.1.4.1.99.3.10", &_names[1476],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1405], &_types[1475], NULLOT, &_types[1477]
	},
	{
		"functAbs", "1.3.6.1.4.1.99.3.11", &_names[1477],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1428], &_types[1476], NULLOT, &_types[1478]
	},
	{
		"functSgn", "1.3.6.1.4.1.99.3.12", &_names[1478],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1455], &_types[1477], NULLOT, &_types[1479]
	},
	{
		"functMin", "1.3.6.1.4.1.99.3.13", &_names[1479],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1299], &_types[1478], NULLOT, &_types[1480]
	},
	{
		"functAnd", "1.3.6.1.4.1.99.3.14", &_names[1480],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1342], &_types[1479], NULLOT, &_types[1481]
	},
	{
		"functOr", "1.3.6.1.4.1.99.3.15", &_names[1481],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1327], &_types[1480], NULLOT, &_types[1482]
	},
	{
		"functNot", "1.3.6.1.4.1.99.3.16", &_names[1482],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1458], &_types[1481], NULLOT, &_types[1483]
	},
	{
		"expressions", "1.3.6.1.4.1.99.4", &_names[1483],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1473], &_types[1466], &_types[1485], &_types[1484]
	},
	{
		"exprNumber", "1.3.6.1.4.1.99.4.1", &_names[1484],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1439], NULLOT, NULLOT, &_types[1485]
	},
	{
		"exprTable", "1.3.6.1.4.1.99.4.2", &_names[1485],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1452], &_types[1484], &_types[1486], &_types[1486]
	},
	{
		"exprEntry", "1.3.6.1.4.1.99.4.2.1", &_names[1486],
		(OS) -1, 0, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1457], NULLOT, &_types[1491], &_types[1487]
	},
	{
		"exprIndex", "1.3.6.1.4.1.99.4.2.1.1", &_names[1487],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1475], NULLOT, NULLOT, &_types[1488]
	},
	{
		"exprEval", "1.3.6.1.4.1.99.4.2.1.2", &_names[1488],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1472], &_types[1487], NULLOT, &_types[1489]
	},
	{
		"exprExpr", "1.3.6.1.4.1.99.4.2.1.3", &_names[1489],
		(OS) 3, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1483], &_types[1488], NULLOT, &_types[1490]
	},
	{
		"exprStatus", "1.3.6.1.4.1.99.4.2.1.4", &_names[1490],
		(OS) 0, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1468], &_types[1489], NULLOT, &_types[1491]
	},
	{
		"exprHints", "1.3.6.1.4.1.99.4.2.1.5", &_names[1491],
		(OS) 4, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1297], &_types[1490], NULLOT, &_types[1492]
	},
	{
		"isode-consortium", "1.3.6.1.4.1.453", &_names[1492],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1336], &_types[1465], &_types[1493], &_types[1493]
	},
	{
		"application-mib", "1.3.6.1.4.1.453.2", &_names[1493],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1467], NULLOT, &_types[1505], &_types[1494]
	},
	{
		"application", "1.3.6.1.4.1.453.2.1", &_names[1494],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1493], NULLOT, &_types[1499], &_types[1495]
	},
	{
		"distinguishedName", "1.3.6.1.4.1.453.2.1.1", &_names[1495],
		(OS) 4, 3, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1478], NULLOT, NULLOT, &_types[1496]
	},
	{
		"applicationStatus", "1.3.6.1.4.1.453.2.1.2", &_names[1496],
		(OS) 30, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1490], &_types[1495], NULLOT, &_types[1497]
	},
	{
		"applicationUptime", "1.3.6.1.4.1.453.2.1.3", &_names[1497],
		(OS) 12, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1461], &_types[1496], NULLOT, &_types[1498]
	},
	{
		"inboundAssociations", "1.3.6.1.4.1.453.2.1.4", &_names[1498],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1494], &_types[1497], NULLOT, &_types[1499]
	},
	{
		"outboundAssociations", "1.3.6.1.4.1.453.2.1.5", &_names[1499],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1498], &_types[1498], NULLOT, &_types[1500]
	},
	{
		"mta", "1.3.6.1.4.1.453.2.2", &_names[1500],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1495], &_types[1494], &_types[1504], &_types[1501]
	},
	{
		"numberMessages", "1.3.6.1.4.1.453.2.2.1", &_names[1501],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1410], NULLOT, NULLOT, &_types[1502]
	},
	{
		"volumeMessages", "1.3.6.1.4.1.453.2.2.2", &_names[1502],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1501], &_types[1501], NULLOT, &_types[1503]
	},
	{
		"submittedMessages", "1.3.6.1.4.1.453.2.2.3", &_names[1503],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1502], &_types[1502], NULLOT, &_types[1504]
	},
	{
		"deliveredMessages", "1.3.6.1.4.1.453.2.2.4", &_names[1504],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1503], &_types[1503], NULLOT, &_types[1505]
	},
	{
		"dsa", "1.3.6.1.4.1.453.2.3", &_names[1505],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1479], &_types[1500], &_types[1509], &_types[1506]
	},
	{
		"operations", "1.3.6.1.4.1.453.2.3.1", &_names[1506],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1469], NULLOT, NULLOT, &_types[1507]
	},
	{
		"masterEntries", "1.3.6.1.4.1.453.2.3.2", &_names[1507],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1486], &_types[1506], NULLOT, &_types[1508]
	},
	{
		"copyEntries", "1.3.6.1.4.1.453.2.3.3", &_names[1508],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1507], &_types[1507], NULLOT, &_types[1509]
	},
	{
		"cacheEntries", "1.3.6.1.4.1.453.2.3.4", &_names[1509],
		(OS) 10, 1, (u_long) 0, 1,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1508], &_types[1508], NULLOT, &_types[1510]
	},
	{
		"joint-iso-ccitt", "2", &_names[1510],
		(OS) -1, 0, (u_long) 0, 0,
		(caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,
		&_types[1506], NULLOT, NULLOT, NULLOT
	},
	NULL
};

// OT	anchor = _types;
// OT	chain = &_types[1510];

static OT _Tbuckets[128] = {
	&_types[270],
	NULLOT,
	&_types[775],
	&_types[490],
	NULLOT,
	&_types[1206],
	NULLOT,
	NULLOT,
	NULLOT,
	NULLOT,
	NULLOT,
	NULLOT,
	NULLOT,
	&_types[41],
	&_types[1154],
	&_types[895],
	&_types[1267],
	NULLOT,
	NULLOT,
	&_types[1451],
	NULLOT,
	NULLOT,
	NULLOT,
	NULLOT,
	&_types[787],
	&_types[47],
	NULLOT,
	&_types[1148],
	&_types[994],
	&_types[1481],
	NULLOT,
	&_types[1213],
	NULLOT,
	NULLOT,
	&_types[178],
	NULLOT,
	&_types[228],
	NULLOT,
	NULLOT,
	NULLOT,
	NULLOT,
	NULLOT,
	NULLOT,
	NULLOT,
	NULLOT,
	NULLOT,
	NULLOT,
	NULLOT,
	NULLOT,
	&_types[1215],
	NULLOT,
	NULLOT,
	NULLOT,
	NULLOT,
	NULLOT,
	NULLOT,
	NULLOT,
	NULLOT,
	NULLOT,
	NULLOT,
	NULLOT,
	NULLOT,
	NULLOT,
	NULLOT,
	NULLOT,
	&_types[329],
	NULLOT,
	&_types[301],
	&_types[1370],
	&_types[954],
	&_types[883],
	&_types[1429],
	&_types[1224],
	&_types[541],
	&_types[1456],
	&_types[1377],
	&_types[1464],
	&_types[981],
	&_types[1406],
	&_types[735],
	&_types[1488],
	&_types[1476],
	&_types[1505],
	&_types[1395],
	&_types[1338],
	&_types[1485],
	&_types[1383],
	&_types[1480],
	&_types[1313],
	&_types[1497],
	&_types[1500],
	&_types[1504],
	&_types[1351],
	&_types[1489],
	&_types[1284],
	&_types[1487],
	&_types[1496],
	&_types[1499],
	&_types[1471],
	&_types[1298],
	&_types[1510],
	&_types[1492],
	&_types[1484],
	&_types[1413],
	&_types[941],
	&_types[1474],
	NULLOT,
	&_types[1509],
	&_types[1361],
	&_types[1491],
	&_types[1418],
	&_types[1264],
	NULLOT,
	&_types[1470],
	&_types[1477],
	&_types[1482],
	&_types[971],
	&_types[1071],
	NULLOT,
	&_types[1034],
	NULLOT,
	NULLOT,
	NULLOT,
	NULLOT,
	NULLOT,
	NULLOT,
	NULLOT,
	NULLOT,
};

extern	int	once_only_Tbuckets;
extern	OT	Tbuckets[];

loadobjects (file)
char   *file;
{
	int	    i;
	struct _syntax *sy;
	OT	    ot;
	static int once_only = 0;

	if (file && !once_only)
		return readobjects (file);

	if (once_only) {
		sprintf (PY_pepy, "loadobjects called more than once!");
		return NOTOK;
	}
	once_only = 1;

	bcopy ((char *) _Tbuckets, (char *) Tbuckets, sizeof _Tbuckets);
	once_only_Tbuckets = 1;

	readsyntax ();
	for (sy = _syntaxes; sy -> name; sy++)
		if ((sy -> value = text2syn (sy -> name)) == NULLOS) {
			sprintf (PY_pepy, "lost \"%s\" syntax", sy -> name);
			return NOTOK;
		}

	for (ot = _types; ot -> ot_text; ot++)
		ot -> ot_syntax = (i = (int) ot -> ot_syntax) < 0
						  ? NULLOS : _syntaxes[i].value;

	return OK;
}

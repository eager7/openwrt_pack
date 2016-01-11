#include <stdio.h>
#include <syslog.h>

//#define SYSLOG

#ifdef SYSLOG
#define UI_BLUE(x) 	    x
#define UI_GREN(x) 		x
#define UI_YELW(x)    	x
#define UI_REDF(x)	    x
#define UI_RFWB(x)		x
#define DBG_vPrintf(a,b,ARGS...) do {  if (a) {syslog(LOG_DEBUG,   UI_BLUE("[DBG_%d]") b, __LINE__, ## ARGS);} } while(0)
#define INF_vPrintf(a,b,ARGS...) do {  if (a) {syslog(LOG_INFO,    UI_YELW("[INF_%d]") b, __LINE__, ## ARGS);} } while(0)
#define LOG_vPrintf(a,b,ARGS...) do {  if (a) {syslog(LOG_NOTICE,  UI_GREN("[LOG_%d]") b, __LINE__, ## ARGS);} } while(0)
#define WAR_vPrintf(a,b,ARGS...) do {  if (a) {syslog(LOG_WARNING, UI_RFWB("[RED_%d]") b, __LINE__, ## ARGS);} } while(0)
#define ERR_vPrintf(a,b,ARGS...) do {  if (a) {syslog(LOG_ERR,     UI_REDF("[ERR_%s_%d]") b, __FILE__, __LINE__, ## ARGS);} } while(0)
#else
#define UI_BLUE(x) 	    "\e[34;1m"x"\e[0m"
#define UI_GREN(x) 		"\e[32;1m"x"\e[0m"
#define UI_YELW(x)    	"\e[33;1m"x"\e[0m"
#define UI_REDF(x)	    "\e[31;1m"x"\e[0m"
#define UI_RFWB(x)		"\e[41m"x"\e[0m" //white font,red background
#define DBG_vPrintf(a,b,ARGS...) do {  if (a) {printf(UI_BLUE("[DBG_%d]") b, __LINE__, ## ARGS);} } while(0)
#define INF_vPrintf(a,b,ARGS...) do {  if (a) {printf(UI_YELW("[INF_%d]") b, __LINE__, ## ARGS);} } while(0)
#define LOG_vPrintf(a,b,ARGS...) do {  if (a) {printf(UI_GREN("[LOG_%d]") b, __LINE__, ## ARGS);} } while(0)
#define WAR_vPrintf(a,b,ARGS...) do {  if (a) {printf(UI_RFWB("[RED_%d]") b, __LINE__, ## ARGS);} } while(0)
#define ERR_vPrintf(a,b,ARGS...) do {  if (a) {printf(UI_REDF("[ERR_%s_%d]") b, __FILE__, __LINE__, ## ARGS);} } while(0)
#endif

	
int main( int argc, char *argv[] )
{
	printf("Hello World!\n");
	
	DBG_vPrintf(1, "DBG_vPrintf\n");
	INF_vPrintf(1, "INF_vPrintf\n");
	LOG_vPrintf(1, "LOG_vPrintf\n");
	WAR_vPrintf(1, "WAR_vPrintf\n");
	ERR_vPrintf(1, "ERR_vPrintf\n");
	
	
	return 0;
}
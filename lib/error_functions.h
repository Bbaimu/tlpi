#ifndef ERROR_FUNCTIONS_H
#define ERROR_FUNCTIONS_H

void errMsg(const char *format, ...);

#ifdef _GNUC_

/*
	This macro stop 'gcc -Wall' complaning that "controls reaches
	end of non-void function" if we use the following functions to
	terminate main() or some other non-void function
*/

#define NORETURN _attribute_((_noreturn_))
#else
#define NORETURN
#endif


void errExit(const char *format, ...) NORETURN;
void err_exit(const char *format, ...) NORETURN;
void errExitEN(int errnum, const char *format, ...) NORETURN;

void fatal(const char *format, ...) NORETURN;
void usageErr(const char *format, ...) NORETURN;
void cmdLineErr(const char *format, ...) NORETURN;

#endif

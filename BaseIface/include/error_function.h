#pragma once

void errMsg( const char* format, ... );

#ifdef __GNUC__
#define NORETURN __attribute__ ((__noreturn__))
#else // define __GNUC__
#define NORETURN
#endif // define __GNUC__

void errExit( const char* format, ... ) NORETURN;
void err_exit( const char* format, ... ) NORETURN;
void errExitEN( int errnum, const char* format, ... ) NORETURN;
void fatal( const char* format, ... ) NORETURN;
void usageErr( const char* format, ... ) NORETURN;
void cmdLineErr( const char* format, ... ) NORETURN;


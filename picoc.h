#ifndef PICOC_H
#define PICOC_H

/* picoc version number */
#define PICOC_VERSION "v2.2"

/* handy definitions */
#ifndef TRUE
#define TRUE 1
#define FALSE 0
#endif

#include <setjmp.h>

/* mark where to end the program for platforms which require this */
extern jmp_buf PicocExitBuf;

/* this has to be a macro, otherwise errors will occur due to the stack being corrupt */
#define PicocPlatformSetExitPoint() setjmp(PicocExitBuf)

/* parse.c */
void PicocParse(const char *FileName, const char *Source, int SourceLen, int RunIt, int CleanupNow, int CleanupSource);
void PicocParseInteractive();

/* platform.c */
void PicocCallMain(int argc, char **argv);
void PicocInitialise(int StackSize);
void PicocCleanup();
void PicocPlatformScanFile(const char *FileName);

extern int PicocExitValue;

/* include.c */
void PicocIncludeAllSystemHeaders();

#endif /* PICOC_H */

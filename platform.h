/* all platform-specific includes and defines go in this file */
#ifndef PLATFORM_H
#define PLATFORM_H

#define LARGE_INT_POWER_OF_TEN 1000000000   /* the largest power of ten which fits in an int on this architecture */

#define ALIGN_TYPE void *                   /* the default data type to use for alignment */

#define GLOBAL_TABLE_SIZE 97                /* global variable table */
#define STRING_TABLE_SIZE 97                /* shared string table size */
#define STRING_LITERAL_TABLE_SIZE 97        /* string literal table size */
#define PARAMETER_MAX 16                    /* maximum number of parameters to a function */
#define LINEBUFFER_MAX 256                  /* maximum number of characters on a line */
#define LOCAL_TABLE_SIZE 11                 /* size of local variable table (can expand) */
#define STRUCT_TABLE_SIZE 11                /* size of struct/union member table (can expand) */

#define INTERACTIVE_PROMPT_START "iniciando picoc " PICOC_VERSION " modo interactivo\n"
#define INTERACTIVE_PROMPT_STATEMENT "picoc> "
#define INTERACTIVE_PROMPT_LINE "     > "

/* host platform includes */
#define USE_MALLOC_STACK                   /* stack is allocated using malloc() */
#define USE_MALLOC_HEAP                    /* heap is allocated using malloc() */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <assert.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdarg.h>
#include <setjmp.h>
#include <math.h>
#endif /* PLATFORM_H */

/* stdlib.h library for large systems - small embedded systems use clibrary.c instead */
#include "../interpreter.h"

#ifndef BUILTIN_MINI_STDLIB

static int ZeroValue = 0;

#ifndef NO_FP
void StdlibAtof(struct ParseState *Parser, struct Value *ReturnValue, struct Value **Param, int NumArgs)
{
    ReturnValue->Val->FP = atof(Param[0]->Val->Pointer);
}
#endif

void StdlibAtoi(struct ParseState *Parser, struct Value *ReturnValue, struct Value **Param, int NumArgs)
{
    ReturnValue->Val->Integer = atoi(Param[0]->Val->Pointer);
}

void StdlibAtol(struct ParseState *Parser, struct Value *ReturnValue, struct Value **Param, int NumArgs)
{
    ReturnValue->Val->Integer = atol(Param[0]->Val->Pointer);
}

#ifndef NO_FP
void StdlibStrtod(struct ParseState *Parser, struct Value *ReturnValue, struct Value **Param, int NumArgs)
{
    ReturnValue->Val->FP = strtod(Param[0]->Val->Pointer, Param[1]->Val->Pointer);
}
#endif

void StdlibStrtol(struct ParseState *Parser, struct Value *ReturnValue, struct Value **Param, int NumArgs)
{
    ReturnValue->Val->Integer = strtol(Param[0]->Val->Pointer, Param[1]->Val->Pointer, Param[2]->Val->Integer);
}

void StdlibStrtoul(struct ParseState *Parser, struct Value *ReturnValue, struct Value **Param, int NumArgs)
{
    ReturnValue->Val->Integer = strtoul(Param[0]->Val->Pointer, Param[1]->Val->Pointer, Param[2]->Val->Integer);
}

void StdlibMalloc(struct ParseState *Parser, struct Value *ReturnValue, struct Value **Param, int NumArgs)
{
    ReturnValue->Val->Pointer = malloc(Param[0]->Val->Integer);
}

void StdlibCalloc(struct ParseState *Parser, struct Value *ReturnValue, struct Value **Param, int NumArgs)
{
    ReturnValue->Val->Pointer = calloc(Param[0]->Val->Integer, Param[1]->Val->Integer);
}

void StdlibRealloc(struct ParseState *Parser, struct Value *ReturnValue, struct Value **Param, int NumArgs)
{
    ReturnValue->Val->Pointer = realloc(Param[0]->Val->Pointer, Param[1]->Val->Integer);
}

void StdlibFree(struct ParseState *Parser, struct Value *ReturnValue, struct Value **Param, int NumArgs)
{
    free(Param[0]->Val->Pointer);
}

void StdlibRand(struct ParseState *Parser, struct Value *ReturnValue, struct Value **Param, int NumArgs)
{
    ReturnValue->Val->Integer = rand();
}

void StdlibSrand(struct ParseState *Parser, struct Value *ReturnValue, struct Value **Param, int NumArgs)
{
    srand(Param[0]->Val->Integer);
}

void StdlibAbort(struct ParseState *Parser, struct Value *ReturnValue, struct Value **Param, int NumArgs)
{
    ProgramFail(Parser, "abort");
}

void StdlibExit(struct ParseState *Parser, struct Value *ReturnValue, struct Value **Param, int NumArgs)
{
    PlatformExit(Param[0]->Val->Integer);
}

void StdlibGetenv(struct ParseState *Parser, struct Value *ReturnValue, struct Value **Param, int NumArgs)
{
    ReturnValue->Val->Pointer = getenv(Param[0]->Val->Pointer);
}

void StdlibSystem(struct ParseState *Parser, struct Value *ReturnValue, struct Value **Param, int NumArgs)
{
    ReturnValue->Val->Integer = system(Param[0]->Val->Pointer);
}

void StdlibAbs(struct ParseState *Parser, struct Value *ReturnValue, struct Value **Param, int NumArgs)
{
    ReturnValue->Val->Integer = abs(Param[0]->Val->Integer);
}

void StdlibLabs(struct ParseState *Parser, struct Value *ReturnValue, struct Value **Param, int NumArgs)
{
    ReturnValue->Val->Integer = labs(Param[0]->Val->Integer);
}

#if 0
void StdlibDiv(struct ParseState *Parser, struct Value *ReturnValue, struct Value **Param, int NumArgs)
{
    ReturnValue->Val->Integer = div(Param[0]->Val->Integer, Param[1]->Val->Integer);
}

void StdlibLdiv(struct ParseState *Parser, struct Value *ReturnValue, struct Value **Param, int NumArgs)
{
    ReturnValue->Val->Integer = ldiv(Param[0]->Val->Integer, Param[1]->Val->Integer);
}

void StdlibBsearch(struct ParseState *Parser, struct Value *ReturnValue, struct Value **Param, int NumArgs)
{
    ReturnValue->Val->Pointer = bsearch(Param[0]->Val->Pointer, Param[1]->Val->Pointer, Param[2]->Val->Integer, Param[3]->Val->Integer, (int (*)())Param[4]->Val->Pointer);
}

/* handy structure definitions */
const char StdlibDefs[] = "\
typedef struct { \
    int quot, rem; \
} div_t; \
\
typedef struct { \
    int quot, rem; \
} ldiv_t; \
";
#endif

/* all stdlib.h functions */
struct LibraryFunction StdlibFunctions[] =
{
#ifndef NO_FP
    { StdlibAtof,           "float atof(char *);" },
    { StdlibStrtod,         "double strtod(char *,char **);" },
#endif
    { StdlibAtoi,           "int atoi(char *);" },
    { StdlibAtol,           "long atol(char *);" },
    { StdlibStrtol,         "long strtol(char *,char **,int);" },
    { StdlibStrtoul,        "long strtoul(char *,char **,int);" },
    { StdlibMalloc,         "void *malloc(int);" },
    { StdlibCalloc,         "void *calloc(int,int);" },
    { StdlibRealloc,        "void *realloc(void *,int);" },
    { StdlibFree,           "void free(void *);" },
    { StdlibRand,           "int rand();" },
    { StdlibSrand,          "void srand(int);" },
    { StdlibAbort,          "void abort();" },
    { StdlibExit,           "void exit(int);" },
    { StdlibGetenv,         "char *getenv(char *);" },
    { StdlibSystem,         "int system(char *);" },
<<<<<<< HEAD
/*  { StdlibBsearch,        "void *bsearch(void *,void *,int,int,int (*)());" }, 
    { StdlibQsort,          "void *qsort(void *,int,int,int (*)());" }, 
=======
/*    { StdlibBsearch,        "void *bsearch(void *,void *,int,int,int (*)());" }, */
/*    { StdlibQsort,          "void *qsort(void *,int,int,int (*)());" }, */
    { StdlibAbs,            "int abs(int);" },
    { StdlibLabs,           "long labs(int);" },
#if 0
>>>>>>> 497ccae6e27d3d9d1167a20db59d12a61eaaa022
    { StdlibDiv,            "div_t div(int);" },
    { StdlibLdiv,           "ldiv_t ldiv(int);" }, */
    { StdlibAbs,            "int abs(int);" },
    { StdlibLabs,           "long labs(int);" },
/* SPANISH */
#ifndef NO_FP
    { StdlibAtof,           "float a_flotante(char *);" },
    { StdlibAtoi,           "int a_entero(char *);" },
#endif
/* SPANISH */
    { NULL,                 NULL }
};

/* creates various system-dependent definitions */
void StdlibSetupFunc(void)
{
    /* define NULL, TRUE and FALSE */
    if (!VariableDefined(TableStrRegister("NULL")))
        VariableDefinePlatformVar(NULL, "NULL", &IntType, (union AnyValue *)&ZeroValue, FALSE);
}

#endif /* !BUILTIN_MINI_STDLIB */

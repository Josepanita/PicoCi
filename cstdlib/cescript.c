#include "../interpreter.h"
#include "cescript.h"
#include <limits.h>

static int ENTERO_MAXIMO = INT_MAX;

void CustomAleatorio(struct ParseState *Parser, struct Value *ReturnValue, struct Value **Param, int NumArgs)
{
    ReturnValue->Val->Integer = aleatorio(Param[0]->Val->Integer);
}

void CustomSubstr(struct ParseState *Parser, struct Value *ReturnValue, struct Value **Param, int NumArgs)
{
    ReturnValue->Val->Pointer = subcadena(Param[0]->Val->Pointer, Param[1]->Val->Integer, Param[2]->Val->Integer);
}

void CustomDerecha(struct ParseState *Parser, struct Value *ReturnValue, struct Value **Param, int NumArgs)
{
    ReturnValue->Val->Pointer = derecha(Param[0]->Val->Pointer, Param[1]->Val->Integer);
}

void CustomIzquierda(struct ParseState *Parser, struct Value *ReturnValue, struct Value **Param, int NumArgs)
{
    ReturnValue->Val->Pointer = izquierda(Param[0]->Val->Pointer, Param[1]->Val->Integer);
}

void CustomRaizn(struct ParseState *Parser, struct Value *ReturnValue, struct Value **Param, int NumArgs)
{
    ReturnValue->Val->FP = raizn(Param[0]->Val->FP, Param[1]->Val->FP);
}

void CustomSigno(struct ParseState *Parser, struct Value *ReturnValue, struct Value **Param, int NumArgs)
{
    ReturnValue->Val->Integer = signo(Param[0]->Val->FP);
}

void CustomPausar(struct ParseState *Parser, struct Value *ReturnValue, struct Value **Param, int NumArgs) 
{
    ReturnValue->Val->Integer = pausar();
}
/* all cescript.h functions */
struct LibraryFunction CustomFunctions[] =
{
    { CustomAleatorio,     "int aleatorio(int);" },
    { CustomSubstr,        "char *subcadena(char *, int, int);" },
    { CustomDerecha,       "char *derecha(char *,int);" },
    { CustomIzquierda,     "char *izquierda(char *,int);" },
    { CustomRaizn,         "float raizn(float,float);" },
    { CustomSigno,         "int signo(float);" },
    { CustomPausar,        "int pausar();" },
    { CustomPausar,        "int stop();" },
    { NULL,             NULL }
};

void CustomFuncSetup(void)
{
    VariableDefinePlatformVar(NULL, "ENTERO_MAXIMO", &IntType, (union AnyValue *)&ENTERO_MAXIMO, FALSE);
    VariableDefinePlatformVar(NULL, "INT_MAX", &IntType, (union AnyValue *)&ENTERO_MAXIMO, FALSE);
}
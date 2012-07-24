/* string.h library for large systems - small embedded systems use clibrary.c instead */
#include "../interpreter.h"

#ifndef BUILTIN_MINI_STDLIB

static int trueValue = 1;
static int falseValue = 0;


/* structure definitions */
const char StdboolDefs[] = "typedef int bool;";

/* creates various system-dependent definitions */
void StdboolSetupFunc(void)
{
    /* defines */
    VariableDefinePlatformVar(NULL, "true", &IntType, (union AnyValue *)&trueValue, FALSE);
    VariableDefinePlatformVar(NULL, "false", &IntType, (union AnyValue *)&falseValue, FALSE);
<<<<<<< HEAD
    VariableDefinePlatformVar(NULL, "verdadero", &IntType, (union AnyValue *)&trueValue, FALSE);
    VariableDefinePlatformVar(NULL, "falso", &IntType, (union AnyValue *)&falseValue, FALSE);
=======
>>>>>>> c3435acdc4bc287becf13c49533cc00eef021aea
    VariableDefinePlatformVar(NULL, "__bool_true_false_are_defined", &IntType, (union AnyValue *)&trueValue, FALSE);
}

#endif /* !BUILTIN_MINI_STDLIB */

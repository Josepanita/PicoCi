/* include only picoc.h here - should be able to use it with only the external interfaces, no internals from interpreter.h */
#include "picoc.h"

/* platform-dependent code for running programs is in this file */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define PICOC_STACK_SIZE (128*1024)              /* space for the the stack */

int main(int argc, char **argv)
{
    int ParamCount = 1;
    int DontRunMain = FALSE;
    int StackSize = getenv("STACKSIZE") ? atoi(getenv("STACKSIZE")) : PICOC_STACK_SIZE;
    
    if (argc < 2)
    {
        printf("Formato: picoc <csource1.c>... [<archivos>...]    : corre un programa (llama a main() para iniciar )\n"
               "         picoc -s <csource1.c>... [<archivos>...] : modo script - corre un programa sin llamar a main()\n"
               "         picoc -i                               : modo interactivo\n");
        exit(1);
    }
    
    PicocInitialise(StackSize);
    
    if (strcmp(argv[ParamCount], "-s") == 0 || strcmp(argv[ParamCount], "-m") == 0)
    {
        DontRunMain = TRUE;
        PicocIncludeAllSystemHeaders();
        ParamCount++;
    }
        
    if (argc > ParamCount && strcmp(argv[ParamCount], "-i") == 0)
    {
        PicocIncludeAllSystemHeaders();
        PicocParseInteractive();
    }
    else
    {
        if (PicocPlatformSetExitPoint())
        {
            PicocCleanup();
            return PicocExitValue;
        }
        
        for (; ParamCount < argc && strcmp(argv[ParamCount], "-") != 0; ParamCount++)
            PicocPlatformScanFile(argv[ParamCount]);
        
        if (!DontRunMain)
            PicocCallMain(argc - ParamCount, &argv[ParamCount]);
    }
    
    PicocCleanup();
    return PicocExitValue;
}

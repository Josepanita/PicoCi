#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>

typedef struct __SLib{
   void* handle;
   char* path;
   int flags;
} SLib;

SLib* sl_open(const char* path, int flags){
   SLib* Loader = (SLib*) malloc(sizeof(SLib));
   Loader->handle = dlopen(path, flags);
   if(Loader->handle == NULL) {
      fprintf(stderr, "%s\n", dlerror());
      exit(1);
   }
   return Loader;
}

void* sl_symbol(SLib* self, const char* name){
   char *error;
   void * Symbol = dlsym(self->handle, name);
   if ((error = dlerror()) != NULL) {
      fprintf(stderr, "%s\n", error);
      exit(1);
   }
   return Symbol;
}

void sl_close(SLib* self){
   dlclose(self->handle);
}
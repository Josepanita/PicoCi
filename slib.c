#include <stdio.h>
#include <stdlib.h>

#ifndef WIN32
   #include <dlfcn.h>
#else
   #include <windows.h>
#endif

typedef struct __SLib{
   void* handle;
   char* path;
   int flags;
} SLib;

SLib* sl_open(const char* path, int flags){
   SLib* Loader = (SLib*) malloc(sizeof(SLib));
   #ifndef WIN32
   Loader->handle = dlopen(path, flags);
   if(Loader->handle == NULL) {
      fprintf(stderr, "%s\n", dlerror());
      exit(1);
   }
   #else
   Loader->handle = LoadLibrary(path);
   if (Loader->handle == NULL) {
      fprintf(stderr, "Error cargando la libreria dinamica\n" );
      exit(1);
   }
   #endif
   return Loader;
}

void* sl_symbol(SLib* self, const char* name){
   #ifndef WIN32
   char *error;
   void * Symbol = dlsym(self->handle, name);
   if ((error = dlerror()) != NULL) {
      fprintf(stderr, "%s\n", error);
      exit(1);
   }
   #else
   void * Symbol = GetProcAddress(self->handle,name);
   if (Symbol == NULL) {
      fprintf(stderr, "Error cargando el simbolo '%s'\n", name);
      exit(1);
   }
   #endif
   return Symbol;
}

void sl_close(SLib* self){
   #ifndef WIN32
      dlclose(self->handle);
   #else
      FreeLibrary(self->handle);
   #endif
}
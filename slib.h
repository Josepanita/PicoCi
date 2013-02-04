typedef struct __SLib{
   void* handle;
} SLib;

extern SLib* sl_open(const char*, int);
extern void* sl_symbol(SLib*, const char*);
extern void sl_close(SLib*);

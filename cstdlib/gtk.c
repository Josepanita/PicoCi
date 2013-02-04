#include "../interpreter.h"
#include "gtk.h"

void GTKInit(struct ParseState *Parser, struct Value *ReturnValue, struct Value **Param, int NumArgs) 
{
     printf("Prueba");
}

const char GTKDefs[] = "\
typedef int    gint;\
typedef gint   gboolean;\
typedef void* gpointer;\
typedef const void *gconstpointer;\
typedef char   gchar;\
typedef unsigned char   guchar;\
typedef unsigned int    guint;\
typedef short  gshort;\
typedef unsigned short  gushort;\
typedef long   glong;\
typedef unsigned long   gulong;\
typedef signed char gint8;\
typedef unsigned char guint8;\
typedef signed short gint16;\
typedef unsigned short guint16;\
typedef signed int gint32;\
typedef unsigned int guint32;\
typedef signed long gint64;\
typedef unsigned long guint64;\
typedef float   gfloat;\
typedef double  gdouble;\
typedef unsigned long gsize;\
typedef signed long gssize;\
typedef gint64 goffset;\
typedef signed long gintptr;\
typedef unsigned long guintptr;\
";

/* all cescript.h functions */
struct LibraryFunction GTKFunctions[] =
{
	{CustomTest, "int lorem();"},
    { NULL,             NULL }
};

void GTKFuncSetup(void)
{
    
}
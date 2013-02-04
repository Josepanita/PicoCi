#include <stdio.h>
#include <cescript.h>

printf("::Global Variables:: \n\n");

int a;
a = 42;
printf("An Integer: %d\n", a);

float b = 6.321;

printf("A Floating Point: %f\n", b);

char c = 'A', 
	 d[5] = {'H', 'e', 'l','l','o'}, 
	 *e = "World";

printf("A Character: %c\n", c);
printf("A String: %s\n", d);
printf("A String with Pointer: %s\n", e);

struct id{
	char tipo_cedula;
	int cedula;
	char *nombre;
	char *apellido;
};
typedef struct id id;

id mi_cedula;

mi_cedula.tipo_cedula = 'V';
mi_cedula.cedula = 23683862;
mi_cedula.nombre = "Jose Daniel";
mi_cedula.apellido = "Gomez Rodriguez";

void print_id(id cedula){
	printf("%c-%d %s %s", cedula.tipo_cedula, cedula.cedula, cedula.nombre, cedula.apellido);
}
printf("A Struct: ");
print_id(mi_cedula);

int main() {

	printf("\n\n::Scoped Variables:: \n\n");

	float a = 3.13551;
	int b = 33;
	char *d = "Lorem", c[5] = {'I','p','s','u','m'}, e = 'C';


	printf("An Integer: %d\n", b);

	printf("A Floating Point: %f\n", a);

	printf("A Character: %c\n", e);
	printf("A String: %s\n", d);
	printf("A String with Pointer: %s\n", c);

	return 0;
}
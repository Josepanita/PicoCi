#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float aleatorio(void);
char* subcadena(char*, int, int);
char* izquierda(char*, int);
char* derecha(char*, int);
float raizn(float, float);
int signo(float n);
int pausar(void);

float aleatorio() {
	float a, i;
	srand((unsigned int)time( NULL ));
	i = rand() % 1000000;
	a = i / 1000000;
	return a;
}

char* subcadena(char* cadena, int comienzo, int longitud) {
	if (longitud == 0) longitud = strlen(cadena)-comienzo;
	char *nuevo = (char*)malloc(sizeof(char) * longitud);
	strncpy(nuevo, cadena + comienzo, longitud);
	return nuevo;
}

char* izquierda(char* cadena, int comienzo) {
	return subcadena(cadena, comienzo, 0);
}

char* derecha(char* cadena, int longitud) {	
	return subcadena(cadena, 0, longitud);
}

float raizn(float value, float n) {
	return pow(value, 1/n);
}

int signo(float n){
	if ( n > 0 ){
		return 1;
	}else if(n == 0){
		return 0;
	}else {
		return -1;
	}
}

int pausar(){
	puts("Presione una tecla para continuar...");
    char c;
    while ((c = getchar()) != '\n' && c != EOF);
    return getchar();
}
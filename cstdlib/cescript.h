#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <math.h>

int aleatorio(int max);
char* subcadena(char*, int, int);
char* izquierda(char*, int);
char* derecha(char*, int);
float raizn(float, float);
int signo(float n);
int pausar(void);
void limpiar_buffer(void);
int aleatorio(int max) {
	int divisor = INT_MAX/(max+1), retval;
    do { 
    	srand((unsigned int)time( NULL ));
        retval = rand() / divisor;
    } while (retval > max);

    return retval+1;
}

char* subcadena(char* cadena, int comienzo, int longitud) {
	if (longitud == 0) longitud = strlen(cadena) - comienzo;
	char *nuevo = (char*)malloc(sizeof(char) * longitud);
	strncpy(nuevo, cadena + comienzo, longitud);
	nuevo[longitud] = '\0';
	return nuevo;
}

char* izquierda(char* cadena, int comienzo) {
	return subcadena(cadena, comienzo, 0);
}

char* derecha(char* cadena, int longitud) {	
	return subcadena(cadena, 0, longitud);
}

float raizn(float n, float value) {
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

int mayor(float n, float m){
	if ( n > m ){
		return 1;
	}else if(n == m){
		return 0;
	}else {
		return -1;
	}
}

int menor(float n, float m){
	if ( n > m ){
		return 1;
	}else if(n == m){
		return 0;
	}else {
		return -1;
	}
}

int pausar(){
	int ret;
#ifdef WINDOWS_HOST
    ret = system("pause");
#endif
#ifdef UNIX_HOST
    ret = system("bash -c \"read -s -n 1 -p 'Presione una tecla para continuar...\n'\"");
#endif
    return ret;
}

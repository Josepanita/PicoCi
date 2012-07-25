#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <termios.h>
#include <unistd.h>

int getch(void)
{
	struct termios oldt, newt;
	int ch;
	tcgetattr( STDIN_FILENO, &oldt );
	newt = oldt;
	newt.c_lflag &= ~( ICANON | ECHO );
	tcsetattr( STDIN_FILENO, TCSANOW, &newt );
	ch = getchar();
	tcsetattr( STDIN_FILENO, TCSANOW, &oldt );
	return ch;
}

float aleatorio(){
	float a, i;
	srand((unsigned int)time( NULL ));
	i = rand() % 1000000;
	a = i / 1000000;
	return a;
}


char* subcadena(char* cadena, int comienzo, int longitud)
{
	if (longitud == 0) longitud = strlen(cadena)-comienzo;
	char *nuevo = (char*)malloc(sizeof(char) * longitud);
	strncpy(nuevo, cadena + comienzo, longitud);
	return nuevo;
}

char* izquierda(char* cadena, int comienzo)
{
	int longitud = strlen(cadena)-comienzo;
	return subcadena(cadena, comienzo, 0);
}

char* derecha(char* cadena, int longitud)
{	
	return subcadena(cadena, 0, longitud);
}
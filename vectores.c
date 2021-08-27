#include <stdio.h>

#define TAM_MAX 8

int main(){

	// tamaño maximo es de 8
	// la posicion maxima accesible es 7
	int numeros[TAM_MAX]={3,4,21,23,11,40,101,0};// aca esta la pos 8

	printf("%i\n", numeros[2] );

	numeros[7]=1001;

	printf("%i\n", numeros[7] );

	return 0;
}
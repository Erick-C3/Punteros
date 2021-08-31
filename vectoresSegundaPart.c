#include <stdio.h>

#define TAM_MAX 8
#define TAM_MAX_CARACTER 5

//como asignar o alterar un elemento del vector
void alterarVector(int numeros[], char caracteres[TAM_MAX_CARACTER]){
	numeros[7] = numeros[1] + numeros[2];
	caracteres[3] = caracteres[1];
}


int main(){

	// tamaño maximo es de 8
	// la posicion maxima accesible es 7
	int numeros[TAM_MAX] = {3,4,21,23,11,40,101,0};
	char caracteres[TAM_MAX_CARACTER] = {'a','f','q','z','e'};

	//como acceder a un elemento del vector
	printf("%i\n", numeros[TAM_MAX-1] );
	printf("%c\n", caracteres[3] );

	alterarVector(numeros, caracteres);//le paso la direccion de memoria del vector "de la 1º posicion"

	//como acceder a un elemento del vector
	printf("%i\n", numeros[TAM_MAX-1] );
	printf("%c\n", caracteres[3] );


	return 0;
}
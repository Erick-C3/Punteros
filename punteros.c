#include <stdio.h>


int main(){

	// tiene una direccion de memoria
	int numero = 3;//pedir un espacio en la memoria de la pc

	//definicion de puntero e inicializacion
	int *punteroNumero = &numero; // asignarle la direccion de numero al punteroNumero


	// * operador de indireccion
	// & operador de direccion
	printf("Valor contenido en numero: %i\n", numero );
	printf("Direccion de memoria de numero: %p\n\n", &numero );

	printf("Valor contenido en punteroNumero: %p \n", punteroNumero );
	printf("Direccion de memoria del punteroNumero: %p \n", &punteroNumero );
	printf("Valor contenido en numero mediante punteroNumero: %i\n", *punteroNumero);


	*punteroNumero = 7;

	
	printf("Valor contenido en numero mediante punteroNumero: %i\n", *punteroNumero);
	printf("Valor contenido en numero: %i\n", numero );


	return 0;
}
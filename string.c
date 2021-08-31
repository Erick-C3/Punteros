#include <stdio.h>

#define TAM_MAX_CARACTER 5

#define MAX_NOMBRE 46

int main(){
	//tamaño maximo de elementos es de 5
	//la maxima posicion para acceder es 4 (si fuese un vector)
	//para el string la cantidad maxima de caracteres/elementos es 4
	char caracteres[TAM_MAX_CARACTER] = {'h','o','l','u','\0'};
	printf("%s \n",  caracteres);//1º holu

	//tam max 4
	//en realidad el tam max es de 5
	char palabra[5] = "hola";// asignando un valor literal de tipo texto/string
	printf("%s\n", palabra );//2ºhola 

	//nombre tiene un tamaño maximo de 5+1 elementos (1 elemento es para '\0')
	char nombre[MAX_NOMBRE]= "erick";
	printf("%s\n", nombre );

	scanf("%s", nombre);

	printf("%s\n", nombre );

	return 0;
}
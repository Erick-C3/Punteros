#include <stdio.h>

#define TAM_MAX 10

#define FILA_MAX 3
#define COLUM_MAX 3

int main(){
	/*
	int vector[TAM_MAX] = {1,2,3,4,5,6,7,8,9,10};

	for(int i = 0 ; i < TAM_MAX ; i++){
		printf("[%i]", vector[i]);
	}
	*/
	char matriz[FILA_MAX][COLUM_MAX]={{'a','b','c'},
									  {'d','z','q'},
									  {'-','.','&'}};//inicializar la matriz con valores "nulos"

	matriz[0][2]='#';

	for(int fila = 0 ; fila < 2 ; fila++){
		for(int col = 0; col < 2 ; col++){
			printf("[%c] ", matriz[fila][col] );
		}
		printf("\n\n");
	}


	return 0;
}
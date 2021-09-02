#include <stdio.h>


#define MAX_TAM 10000

int main(){
	float numerosDecimales[MAX_TAM] = {100.5,2222.5};
	int elementosAgregados = 2;

	numerosDecimales[elementosAgregados] = 3.3333;//"agregue" un elemento al vector (modifique un elemento con valor de 0.0)
	elementosAgregados++;//3

	numerosDecimales[elementosAgregados] = 4444.3333F;//"agregue" un elemento al vector (modifique un elemento con valor de 0.0)
	elementosAgregados++;//4

	for(int i = 0 ; i < elementosAgregados ; i++){
		printf(" %i \n", i );
		printf(" %f\n", numerosDecimales[i]);
	}



	return 0;
}
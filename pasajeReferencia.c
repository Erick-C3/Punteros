#include <stdio.h>

const int DNI_NULO = -1;

/*
	Descripcion: cambia el numero del dni
*/
void cambiarDni(int *dniPersona){//
	printf("Dni anterior: %i\n", *dniPersona);
	printf("Ingrese su dni\n");
	scanf("%i", dniPersona);//dniPersona tiene la direccion de memoria de dni
							// es como hacer esto: &dni
}




int main(){
	
	int dni = DNI_NULO;
	cambiarDni(&dni);//pasar la direccion de memoria de la variable dni, algo asi: 0X23BF52
	printf("Dni ingresado: %i\n", dni );

	return 0;
}

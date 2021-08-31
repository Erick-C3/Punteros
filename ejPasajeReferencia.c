#include <stdio.h>

const int SIN_OPCION = -1;
#define CAMBIAR_NUM 1
#define NO_CAMBIAR_NUM 0

/*
	Descripcion: da la opcion de cambiar el numero de contacto
	Pre:-.
	Post: Si el usuario cambio su info devuelve "CAMBIAR_NUM" y caso contrario "NO_CAMBIAR_NUM"
		  Los parametros por referencia se alteran dependiendo de la opcion del usuario
*/
int opcCambiarNumContacto(int *puntNumContacto, char *puntInicialUsuario){
	int opcionUsuario = SIN_OPCION;

	// * operador de indireccion
	// & operador de direccion
	printf("Numero de contacto actual: %i\n", *puntNumContacto );// mostramos el contenido
	printf("Desea cambiar numero de contacto? 1-Si 0-No\n");
	scanf("%i", &opcionUsuario);// opcionUsuario con el & que nos de su direccion de memoria

	switch(opcionUsuario){
		case CAMBIAR_NUM:
			printf("Cambiando el numero de contacto\n");
			printf("Ingrese numero numero de contacto:\n");
			scanf("%i", puntNumContacto);// guarda el nuevo valor en la direccion de  memoria contenida
			printf("Tambien necesitas cambiar la inicial de usuario\n");
			scanf(" %c", puntInicialUsuario);
			break;
		case NO_CAMBIAR_NUM:
			printf("Numero de contacto no alterado\n");
	}

	return opcionUsuario;
}


int main(){

	int numContacto = 1100000000;
	char inicialUsuario = 'E';

	if( opcCambiarNumContacto(&numContacto, &inicialUsuario) ){//envia la direcc de memoria de numContacto
		printf("El numero de contacto fue alterado por: %i\n", numContacto );
		printf("Nueva inicial del usuario: %c\n", inicialUsuario );
	}else{
		printf("Numero sigue sin alterarse: %i\n", numContacto);
	}

	return 0;
}
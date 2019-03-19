#include <stdio.h>
#include <stdlib.h>

int main(){
	int arre[5]={5,15,30,10,35};
	int *punt;
	punt= arre;
	temp=punt;
	for(int i=0;i<5; i++ ){
		
		printf("El valor del elemento %d es de: %u\n", i, *(arre+i) );//Aritmetica de puntero
		printf("La direccion de memoria del elemento %d es: %d\n", i, &arre[i]);//Notacion indexada
		printf("El valor del elemento %d con puntero es de: %u\n", i, *(punt +i) );
		printf("La direccion de memoria del elemento %d con puntero es de: %u\n", i, &punt[i] );
		
	}
	printf("El tamanio del arreglo es: %d\n", sizeof(arre));
	printf("El tamanio del puntero es: %d\n", sizeof(punt));
return 0;
}
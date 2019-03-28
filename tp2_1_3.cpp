#include <stdio.h>
#include <stdlib.h>
#include<time.h>

#define N 15

int main(){
//variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior) ;// tiene que ser un numero mas de lo que da
	int f,c;//C DE COLUMNAS , F DE FILAS
	int M;
	srand(time(NULL));
	//M=5+ (rand()% (15+1 - 5));//M num aleatorio del [5,15]
	int * mt[N] ;
	//int numfila=0;
	int arre[15];
	for(f = 0; f<N; f++){

		int cont=0;
		int M =  rand()% 11 + 5;
		mt[f]=(int *) malloc (sizeof(int)*M);
		for (c=0; c<M; c++){
			mt[f][c]=rand() % 900 + 100;	// % 900 + 100
			printf("%d  ", mt[f][c]);
			if((mt[f][c]%2)==0){
				cont++;	//rand() % 11 + 5
			}
		}	
				//numfila++;
				//printf("->%d ", numfila);
		printf("\n");
		arre[f]=cont;
	}
	printf("\nEl arreglo con numeros pares de cada fila:");
	for (int k= 0;k<N; k++){
		printf(" %d ", arre[k] );
	}


return 0;	
}

#include <stdio.h>
#include <stdlib.h>
#define N 4
#define M 5


int main(){
	int f,c;
	double mt[N][M];
	mt[0][0]=1;
	//int random=(rand()%9)+1;
	for(f = 0; f<N; f++){
		for (c=0; c<M; c++){
			mt[f][c]=(rand()%9)+1;
		}
	}
	for(f = 0; f<N; f++){
		for (c=0; c<M; c++){
			printf("%.2lf ", mt[f][c]);
		}
		printf("\n");
	}
return 0;	
}
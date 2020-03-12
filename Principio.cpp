#include<stdio.h>
#include<windows.h>

int main(void){
	int N,M;
	float MatrizA[4][4], matrizB[4][4];
	do{
		puts("Ingrese el tamaño de la matriz (N*M) de un tamaño menor o igual de 4*4");
		scanf("%d",&N);
		scanf("%d",&M);
		if(N>4|N<1|M>4|M<1){
			puts("Error, N o M tiene un dijito no permitido");
		}
	}while(N>4|N<1|M>4|M<1);
	system("CLS"); //supongo que apartir de qui deberia ser una funcion//
	for(int c=){
		for (int i=0;i=(N+2);i++){	
			if(i==1|i==(N+2)){
				printf("|");
				if(i==(N+2)){
					printf("\n");
				}
			}
		
		}
	}
	return 0;
}

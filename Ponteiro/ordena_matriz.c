/*
Fa�a um programa que, dado um inteiro n e uma matriz quadrada de ordem n, cujos
elementos s�o todos inteiros positivos, imprime uma tabela onde os elementos s�o
listados em ordem decrescente, acompanhados da indica��o de linha e coluna a que
pertencem. Havendo repeti��es de elementos na matriz, a ordem � irrelevante. Utilize
obrigatoriamente a fun��o da parte (a), mesmo que voc� n�o a tenha feito
*/

#include <stdio.h>
#define MAX 100

void maior(int A[MAX][MAX], int n, int *k, int *Lin, int *Col){

	int x,y, maior=0;

	for (x=0 ; x<n ; x++){
		for(y=0 ; y<n ; y++){
			if (A[x][y] > maior){
				maior=A[x][y];
				*k=maior;
				*Lin=x;
				*Col=y;
			}
		}
	}

}

int main(){

	int matriz[MAX][MAX], x, y, n, k, K, LIN, COL;

	printf("Indique n, da MATRIZ n/n: ");
	scanf("%d", & n);

	for (x=0 ; x<n ; x++){
		for(y=0 ; y<n ; y++){
			printf("Digite MATRIZ %d/%d: ", x,y);
			scanf("%d", & matriz[x][y] );
		}
	}

	printf("Elem\tLinha\tColuna\n");

    for(x=x*x ; x>0 ; x--){
        maior(matriz, n, &K, &LIN, &COL);
		printf("%d\t%d\t%d\n", K, LIN+1, COL+1);
		matriz[LIN][COL]= -1;
    }

}

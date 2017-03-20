#include <stdio.h>
#include <conio.h>

#define MAX_BUFFER 120

int main(){
	
	
	//declarar variáveis
	FILE *arq;
	char *arq_nome = "teste.txt";
	char buffer[MAX_BUFFER];
	int n=1;
	
	//Abrir o Aqruivo
	arq = fopen(arq_nome, "r");
	if (arq == NULL){
		printf ("[!] Problema na Leitura do Arquivo");
		return 1;
	}
	
	while (fgets (buffer, MAX_BUFFER, arq) != NULL)
	{
		
		// puts(buffer);
		printf("%d : ",n);
		printf("%s\n", buffer);
		n=n++;
	}
	
	fclose(arq);
	
	return 0;
	
}

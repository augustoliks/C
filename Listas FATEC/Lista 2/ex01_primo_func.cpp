/*
	1. Retorna 1 se for PRIMO
*/

#include <stdio.h>
#include <conio.h>


int primo(int m){
	
	int ak=0, k=1, op=1;
			
	for (k ; k<=m ; k++){
		if (!(m%k)) {
			printf("Divisivel por: %d\n", k);
			ak+=1;
		}	
	}
		
	if (ak>2){
		return 0;
	}
			
	else{
		return 1;
	}	
	
	
}

int main(){
	
	int m, dec;
	
	do{
		scanf("%d", & m);
			
		if(m<1){ 
			printf("Valores negativos nao permitidos, indique outro valor: "); 
		}

	} while(m<1);
	
	printf( "%d", primo(m) );
	
}

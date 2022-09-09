//mostra quatas letras tem no mone 4x

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>

int main(){
	int b, tam;
	char nome[30];
	
	for(b=1; b <=4; b++){
		printf("imforme um nome... ");
		scanf("%s", &nome);
		
		tam=strlen(nome);
		
		printf("\n esse nome tem %d letras \n",tam);
	}
	
	system("pause");
	return 0;
}

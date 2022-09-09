//nome comforme leras 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>


int main()
{
	int x, tam;
	char nome[20];
	
	printf("digite um nome... ");
	scanf("%s",&nome);
	
	tam = strlen(nome);
	
	for(x=1; x <= tam; x++){
		printf("%s", nome);
		printf("\n");
	}
	system("pause");
}

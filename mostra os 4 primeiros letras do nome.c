//mostrar os 4 primeiros letras do nome

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>

int main()
{
	int b;
	char nome[30];
	
	printf("imforme nome... ");
	scanf("%s", &nome);
	
	for(b=0; b <= 3; b++){
		printf("%c",nome[b]);
		printf("\n");
	}
	
	system("pause");
	return 0;
}

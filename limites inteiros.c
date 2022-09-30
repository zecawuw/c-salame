#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{

	int inf, sup, x, num, soma;
	
	printf("escreva um numero inferior... ");
	scanf("%d",&inf);
	
	printf("escreva um numero superior... ");
	scanf("%d",&sup);
	
	for(x = inf; x < sup; x++)
	{
		
		printf("\n numeros pares sao... %d\n",x);
	}
	
	soma = x + x;
	
	printf("\n a soma dos numeros e... %d", soma);

}

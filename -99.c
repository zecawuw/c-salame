#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int num, soma=0;
	float media=0, cont=0;
	
	printf("\n digite um numero inteiro... ");
	scanf("%d",&num);
	
	while(num != -99)
	{
		soma = num+num;
		
		cont++;
		
		printf("digite um numero inteiro... ");
		scanf("%d",&num);
	}
		
		media = soma/cont;
		
		printf("\n\n a soma dos numeros e: %d \n",soma);
		printf("\n\n a media dos numeros e:%3.2f \n",media);
		printf("\n\n");
		
		return 0;
}

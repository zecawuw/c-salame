#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int idade, contador21=0, contador50=0;
	
	printf("\n digite a idade... \n");
	scanf("%d", &idade);
	
	while(idade!= -99)
	{
		if(idade<21)
		 contador21++;
		 
		if(idade>50)
		 contador50++;
		 
		printf("digite a idade ou para encerra digite -99 \n");
		scanf("%d",&idade);
	}
		
		printf("\n o total de pessoas com menos de 21 anos e: %d\n", contador21);
		
		printf("\n o total de pessoas com mais de 50 anos e: %d\n", contador50);
		
		printf("\n\n");
		
		return 0;
	
	
}


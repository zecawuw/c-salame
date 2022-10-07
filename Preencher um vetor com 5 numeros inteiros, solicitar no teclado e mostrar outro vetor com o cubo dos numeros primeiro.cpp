// Preencher um vetor com 5 numeros inteiros, solicitar no teclado e mostrar outro vetor com o cubo dos numeros primeiro 


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <string.h>

int main (void)

{
	int z;
	float vetcubo [5], vet [2];
	
	for (z=0; z < 5; z++)
	{
		printf ("Digite um numero: \n");
		scanf ("%f", &vet [z]);
		printf ("\n\n");
		vetcubo [z] = pow(vet[z], 3);
	}
	
	for (z = 0; z < 5; z++)
	{
		printf ("% 3.2f", vetcubo [z]);
		printf ("\n\n");
	}
	
	system ("pause");
	return 0;
}

//calcular imc

#include <stdio.h>


int main()
{
	float altura;
	float peso;
	float imc;
	
	printf("digite a sua altura: \n");
	scanf("%f",&altura);
	
	printf("digite o sue peso: \n");
	scanf("%f",&peso);
	
	imc = peso/(altura*altura);
	
	if(imc <= 18,4){
		printf("abaixo do peso \n");
	}else if(imc >= 18.5, imc <= 24.9){
		printf("imc peso normal \n");
    }else if(imc >=25, imc <= 29.9){
    	printf("imc sobre peso \n");
	}else if(imc >= 30, <= 39.9){
		printf("obesidade \n");
	}else{
		printf("obesidade grave \n");
	}
}

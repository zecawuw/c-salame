// preencher um vetor com os numeros 10 e 30, e depois mostrar os elementos impares do vetor

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int z, vet[11], t = 10;
    
    for(z=0;z<11;z++){
        vet[z]=t;
        t++;
    }
    
    for(z=10;z>(-1);z--){
        printf("\n Os numeros do vetor são: %d",vet[z]);
    }
    
    system("pause");
    return 0;
}
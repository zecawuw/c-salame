//preencher um vetor com os numeros de 10 a 20 e depois mostrar o mesmo
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int z, vet[10], t = 10;
    
    for(z=0;z<11;z++){
        vet[z]=t;
        t++;
    }
    printf("\n\n");
    
    for(z=0;z<12;z++){
        printf("\n Os numeros do vetor são: %d",vet[z]);
    }
    
    system("pause");
    return 0;
}

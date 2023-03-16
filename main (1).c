#include <stdio.h>

int main()
{
    int Vet[5],num, i;
    
    for(i=0; i < 5; i++){
        printf("\nDigite um número:");
        scanf("%d",&Vet[i]);
    }
    num = 0;
    for(i=0; i < 5; i++){
        if(Vet[i] > 100)
        num = num + 1;
    }
    
    printf("\n\nNúmeros acima de 100 --> %d",num);

    return 0;
}

#include <stdio.h>
#include <math.h>

int main (void){
    int vetor[10];
    int i;
    int maior = 0, posi = 0;

    for(i=0; i<10; i++){
        printf("\nDigite o %d numero do vetor:",i+1);
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];
   for(i=0; i<10; i++){
            if(maior<vetor[i]){
                maior = vetor[i];
                posi = i;
            }
    }

    printf("Maior numero e %d e esta na posicao %d.", maior, posi+1);
}
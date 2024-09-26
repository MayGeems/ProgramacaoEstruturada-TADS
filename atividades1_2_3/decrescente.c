#include <stdio.h>
#include <math.h>

int main (){
    int vet[10];
    int i, j, aux=0;

    for(i=0; i<10; i++){
        printf("\nDigite o %d numero do vetor:",i+1);
        scanf("%d", &vet[i]);
    }
    
    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            if(vet[i]>vet[j]){
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }

    for(i=0; i<10; i++){
        printf("%d\t", vet[i]);
    }

    return 0;
}
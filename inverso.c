#include <stdio.h>
#include <math.h>

int main (){
    int vet[10];
    int i;

    for(i=0; i<10; i++){
        printf("\nDigite o %d numero do vetor:",i+1);
        scanf("%d", &vet[i]);
    }

    for(i=9; i>=0; i--){
        printf("%d\t", vet[i]);
    }

    return 0;
}
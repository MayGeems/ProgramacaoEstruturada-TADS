#include <stdio.h>
#include <math.h>

int main (void){

    int n, quant=0, i;

    printf("Digite um numero positivo: ");
    scanf("%d", &n);

    if(n>=0){
        for(i = 2; i<=n/2; i++){
            if(n%i==0){
                quant++;
                break;
            }
        }

        if(quant ==0){
            printf("\nEste numero e primo");
        }else{
            printf("\nEste numero nao e primo");
        }
    }else{
        printf("\nO numero inserido nao e positivo");
    }
}
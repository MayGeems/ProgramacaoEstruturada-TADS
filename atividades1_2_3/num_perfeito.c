#include <stdio.h>
#include <math.h>

int main (void){
    int n, aux=0;

    printf("Digite um numero positivo: ");
    scanf("%d", &n);

    for(int i=1; i<n; i++){
        if(n%i==0){
            aux+=i;
        }  
    }

    if(aux==n){
        printf("\nEste e um numero perfeito!");
    }else{
        printf("\nNao e numero perfeito.");
    }
}
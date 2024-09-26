#include <stdio.h>
#include <math.h>

int main (void){
    int n=0;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if(n%2==0){
        printf("\nO numero e par");
    }else{
        printf("\nO numero e impar");
    }
}
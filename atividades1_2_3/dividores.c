#include <stdio.h>
#include <math.h>

int divisor(int nm){
    int i;
    int divs=0;

    for(i=1; i<=nm; i++){
        if(nm%i==0){
            divs++;
        }
    }
    return divs;
}

int main(){
    int n;
    int div;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if(n>0){
        div = divisor(n);
        printf("%d tem %d divisores", n, div);
    }else
    printf("O numero inserido nao e inteiro positivo");

    return 0;
}
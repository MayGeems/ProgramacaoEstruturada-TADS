#include <stdio.h>
#include <math.h>

int main (void){
    int a,b,c;
    int maior, menor, inter;

    printf("Digite 3 valores inteiros: ");
    scanf("%d %d %d", &a,&b,&c);

    if(a>b && b>c){
        maior = a;
        inter = b;
        menor = c;
    }else if(c>b && b>a){
        maior = c;
        inter = b;
        menor = a;
    }else if(c>a && a>b){
        maior = c;
        inter = a;
        menor = b;
    }else if(b>a && a>c){
        maior = b;
        inter = a;
        menor = c;
    }else if(a>b && c>b){
        maior = a;
        inter = c;
        menor = b;
    }else{
        maior = b;
        inter = c;
        menor = a;
    }

    printf("Maior: %d\nIntermediario: %d\nMenor: %d", maior, inter, menor);
}
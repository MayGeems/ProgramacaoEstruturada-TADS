#include <stdio.h>
#include <math.h>

int main (void){
    int a,b,c;

    printf("Informe os lados do triangulo: ");
    scanf("%f %f %f", &a, &b, &c);

    if(a==b && b==c){
        printf("\nTriangulo equilatero");
    }else if(a==b || a==c || b==c){
        printf("\nTriangulo isoceles");
    }else{
        printf("\nTriangulo escaleno");
    }

}
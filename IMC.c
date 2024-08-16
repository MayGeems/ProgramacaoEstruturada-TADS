#include <stdio.h>
#include <math.h>

int main (void){
    float peso, altura, IMC;

    printf("Informe seu peso em Kg: ");
    scanf("%f", &peso);

    printf("Informe sua altura em cm: ");
    scanf("%f", &altura); 

    IMC = peso / (altura/100);

    printf("\nIMC: %.2f", IMC);
}
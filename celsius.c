#include <stdio.h>
#include <math.h>

int main (void){
    float celsius, fh;

    printf("Digite a  temperatura em celsius: ");
    scanf("%f", &celsius);

    fh = celsius * 1.8 + 32;

    printf("\n%.2fºC equivale a %.2fºF", celsius, fh);
}
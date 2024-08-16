#include <stdio.h>
#include <math.h>

int main (void){
    int n;
    
    printf("Digite um numero inteiro que va ate 9999: ");
    scanf("%d", &n);

    int mil = n/1000;
    int cen = (n-(mil*1000))/100;
    int dez = (n-((mil*1000)+(cen*100)))/10;
    int uni = (n-((mil*1000)+(cen*100)+(dez*10)))/1;


    printf("\nO numero tem:\n%d milhar/es\n%d centena/s\n%d dezena/s\ne %d unidade/s", mil, cen, dez, uni);

}
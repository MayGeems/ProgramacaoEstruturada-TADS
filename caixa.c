#include <stdio.h>
#include <math.h>

int main (void){
    
    int notas[6]={0};
    int saque;

    printf("Digite um valor para sacar: ");
    scanf("%d", &saque);

    while(saque>1 && saque!=3){
        if(saque>=100 && saque%2==0){
            notas[0]++;
            saque-=100;
        }
        else if(saque>=50 && saque%2==0){
            notas[1]++;            
            saque-=50;
        }
        else if(saque>=20 && saque%2==0){
            notas[2]++;
            saque-=20;
        }
        else if(saque>=10 && saque%2==0){
            notas[3]++;
            saque-=10;
        }
        else if(saque>=5 && saque%2!=0){
            notas[4]++;
            saque-=5;
        }
        else if(saque>=2 && saque%2==0){
            notas[5]++;;
            saque-=2;
        }
    }

    printf("Serao necessarias: ");
    printf("\n%d notas de 2", notas[5]);
    printf("\n%d notas de 5", notas[4]);
    printf("\n%d notas de 10", notas[3]);
    printf("\n%d notas de 20", notas[2]);
    printf("\n%d notas de 50", notas[1]);
    printf("\n%d notas de 100", notas[0]);
}
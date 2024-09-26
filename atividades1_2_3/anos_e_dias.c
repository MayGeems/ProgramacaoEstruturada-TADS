#include <stdio.h>
#include <math.h>

int ano_mes(int ano, int mes){
    int dias_ano, dias_mes;

    if(ano%4==0 && ano%100!=0 && ano%400==0){
        dias_ano = 366;
    }else{
        dias_ano = 365;
    }

    if(dias_ano==366 && mes == 2){
        dias_mes = 29;
    }else if(mes == 2){
        dias_mes = 28;
    }else if(mes%2!=0 || mes==8){
        dias_mes = 31;
    }else{
        dias_mes = 30;
    }

    return dias_mes;

}

int main(void){
    int ano;
    int mes;

    printf("Escolha um ano: ");
    scanf("%d", &ano);
    printf("Escolha um mes desse ano: ");
    scanf("%d", &mes);

    int dias_mes; 

    dias_mes = ano_mes(ano, mes);

    printf("O mes %d de %d tem %d dias", mes, ano, dias_mes);
}
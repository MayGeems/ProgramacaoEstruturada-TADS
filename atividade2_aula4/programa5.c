#include <stdio.h>
#include <math.h>

char situacao(float p1, float p2, float p3, int faltas, int aulas, float media){
    char resultado;
    if(faltas>aulas*0.25){
        resultado = 'F';
    }else if(media>=6){
        resultado = 'A';
    }else if(media<6){
        resultado = 'R';
    }
    return resultado;
}

int main(){
    float p1, p2, p3, media;
    int faltas, aulas;

    printf("Digite a nota das 3 provas: ");
    scanf("%f %f %f", &p1, &p2, &p3);

    media = (p1+p2+p3)/3;

    printf("\nDigite o numero de faltas: ");
    scanf("%d", &faltas);

    printf("\nDigite o numero de aulas: ");
    scanf("%d", &aulas);

    char resultado = situacao(p1,p2,p3,faltas,aulas, media);

    if(resultado == 'F'){
        printf("\n\nREPROVADO POR FALTAS");
    }else if(resultado == 'A'){
        printf("\n\nAPROVADO");
    }else{
        printf("\n\nREPROVADO");
    }
}

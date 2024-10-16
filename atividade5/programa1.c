#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* valores_entre(int *vetor, int tamanho, int min, int max, int *qtd){

    int x, ind=0;
    int *retorno;
    
    for(x=0; x<tamanho; x++){
        if(vetor[x] > min && vetor[x] <max){
            (*qtd)++;
        }
    }

    if(qtd == 0){
        printf("\nNADA ENCONTRADO");
    }

    retorno = (int *) malloc(*qtd * sizeof(int));
            for(x=0; x<tamanho; x++){
                if(vetor[x] > min && vetor[x]<max){
                    retorno[ind] = vetor[x];
                    ind++;
                }
            }
        
    return retorno;
}

int main(){

    int tamanho, min, max, qtd = 0;
    int *vetor /*variavel vetor vai apontar para o endereco de memoria alocado para o tamanho requisitado*/, *retorno;

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanho);

    printf("\nInforme o numero de minimo e maximmo: ");
    scanf("%d %d", &min, &max);

    vetor = (int *) malloc(tamanho * sizeof(int));
    srand(time(NULL));

    for(int i=0; i<tamanho; i++){
        vetor[i] = rand()%500;
        printf("%d ", vetor[i]);
    }

    retorno = valores_entre(vetor, tamanho, min, max, &qtd);

    printf("\n\nEncontrei %d valores entre %d e %d:\n", qtd, min, max);

    for(int i=0; i<qtd; i++){
        printf("%d ", retorno[i]);
    }

    free(vetor);
    free(retorno);
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ler_aposta(int *aposta, int n){
    for (int i = 0; i < n; i++) {
        while (1) {
            printf("Digite o número %d (entre 0 e 100): ", i + 1);
            scanf("%d", &aposta[i]);
            if (aposta[i] >= 0 && aposta[i] <= 100) {
                break;
            } else {
                printf("Número inválido. Tente novamente.\n");
            }
        }
    }
}

void sorteia_valores(int *sorteio, int n){
    srand(time(NULL));
    for(int i =0; i<n; i++){
        sorteio[i] = rand()%100;
    }
}

int* compara_aposta(int *aposta, int *sorteio, int *qtdacertos, int na, int ns){
    int *acertos = (int *) malloc(na * sizeof(int));

    for(int i =0; i<na; i++){
        for(int j=0; j<ns; j++){
            if(aposta[i]==sorteio[j]){
                acertos[(*qtdacertos)++] = aposta[i];
            }
        }
    }

    return acertos;
}

int main(){
    int n=0;

    do{
        printf("Informe o numero de apostas: ");
        scanf("%d", &n);
    }while(n<1||n>20);

    int *aposta = (int *) malloc(n * sizeof(int));
    int *sorteio = (int *) malloc(n * sizeof(int));

    int qtdacertos=0;
    int na, ns;
    na=n;
    ns=20;

    ler_aposta(aposta,n);
    sorteia_valores(sorteio, 20);
    int *acertos = compara_aposta(aposta, sorteio, &qtdacertos, na, ns);

    printf("\nSuas apostas:\n ");
    for(int i=0; i<n; i++){
        printf("%d ", aposta[i]);
    }

    printf("\nO sorteio deu:\n ");
    for(int i=0; i<n; i++){
        printf("%d ", sorteio[i]);
    }

    printf("\nVoce acertou %d numeros.\n", qtdacertos);
    for(int i=0; i<qtdacertos; i++){
        printf("%d ", acertos[i]);
    }

    free(aposta);
    free(sorteio);
    free(acertos);
}
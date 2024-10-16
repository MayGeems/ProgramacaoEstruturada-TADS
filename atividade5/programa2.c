#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int* uniao(int *v1, int *v2, int n1, int n2){
    int *vetor, j, i;
    int tam=0;
    tam = n1+n2;

    vetor = (int *) malloc(tam * sizeof(int));

    for(i=0; i<n1; i++){
        vetor[i] = v1[i];
    }

    j=i;

    for(i=0; i<n2; i++){
        vetor[j] = v2[i];
        j++;
    }
    return vetor;
}

int main(){
    
    int v1[10], v2[15], *vetor;
    int n1=5, n2=10;
    srand(time(NULL));

    for(int i=0; i<n1; i++){
        v1[i] = rand()%100 + 1;
        printf("%d ", v1[i]);
    }
    printf("\n");
    for(int i=0; i<n2; i++){
        v2[i] = rand()%100 + 1;
        printf("%d ", v2[i]);
    }

    vetor = uniao(v1, v2, n1, n2);

    printf("\n\n");
    int tamanho=n1+n2;

    for(int i=0; i<tamanho; i++){
        printf("%d ", vetor[i]);
    }

    free(vetor);
}
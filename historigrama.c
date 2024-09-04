#include <stdio.h>
#include <math.h>

int main(void){
    int vetor[20]={1,1,3,4,5,1,1,2,3,2,1,2,1,3,4,5,3,2,1,1};
    int n_q[5]={0,0,0,0,0};
    char quant[5][10]={' '};
    int i,j;

    for(i=0; i<20; i++){
        if(vetor[i]==1){
            n_q[0]++;
        }else if(vetor[i]==2){
            n_q[1]++;
        }else if(vetor[i]==3){
            n_q[2]++;
        }else if(vetor[i]==4){
            n_q[3]++;
        }else if(vetor[i]==5){
            n_q[4]++;
        }
    }

    for(i=0; i<5; i++){
        for(j=0;j<10;j++){
            printf("%c ", quant[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<5; i++){
        for(j=0;j<n_q[i];j++){
            quant[i][j]='*';
        }
    }

    printf("Elemento\tQuantidade\tHistograma\n");

    for(i=0; i<5; i++){
        printf("%d\t\t%d\t\t", i+1, n_q[i]);
        for(j=0; j<10; j++){
            printf("%c", quant[i][j]);
        }
        printf("\n");
    }
}
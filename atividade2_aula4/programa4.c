#include <stdio.h>
#include <math.h>

void crossover(int pai1[], int corte1, int pai2[], int corte2, int filho1[]){
    int i, j, tamanho=0;
    
    for(i=1; i<=corte1; i++){
        filho1[i]=pai1[i];
        tamanho++;
    }
    
    for(j=corte2+1; j<=pai2[0]; j++){
        filho1[i]=pai2[j];
        i++;
        tamanho++;
    }
    
    filho1[0] = tamanho;
    
    
    for(i=0; i<9; i++){
        printf("%d ",filho1[i]);
    }
    
}

int main(){
    
    int pai1[] = {11,1,1,1,2,2,2,2,2,2,2,2}, pai2[]={10,3,3,3,3,3,4,4,4,4,4};
    int filho1[10]={0};
    int corte1 = 3;
    int corte2 =5;
    
    crossover(pai1, corte1, pai2, corte2, filho1);
}
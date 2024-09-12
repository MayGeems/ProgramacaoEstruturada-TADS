#include <stdio.h>
#include <math.h>

int fat(int n){
    if(n==0){
        return 1;
    }else{
        return n*fat(n-1);
    }
}

int main(){
    int A[5];
    int B[5];
    int i, j;

    for(i=0; i<5; i++){
        printf("Insira o %d numero: ", i+1);
        scanf("%d", &A[i]);
        B[i] = fat(A[i]);
    } 

    printf("A\t");
    for(j=0;j<5;j++){
        printf("%d\t", A[j]);
    }
    printf("\nB\t");
    for(j=0;j<5;j++){
        printf("%d\t", B[j]);
    }
}
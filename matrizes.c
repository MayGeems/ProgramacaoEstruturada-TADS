#include <stdio.h>
#include <math.h>

int matriz(int vet[2][2], int vet1[2][2], int vet2[2][2][2]){
    int i,j,k;

    for(i=0;i<2;i++){
        for(j=0; j<2; j++){
            for(k=0;k<2;k++){
                if(i<1){
                    vet2[i][j][k] = vet[j][k]; 
                }else{
                    vet2[i][j][k] = vet1[j][k];
                } 
            }
        }
    }

    for(i=0;i<2;i++){
        printf("\n");
        for(j=0; j<2; j++){
            printf("\n");
            for(k=0;k<2;k++){
                printf("%d ", vet2[i][j][k]);
            }
        }
    }

}

int main(){
    int a[2][2] = {1,2,3,4};
    int b[2][2] = {5,6,7,8};
    int c[2][2][2] = {0};

    matriz(a, b, c);
}
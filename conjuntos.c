#include <stdio.h>
#include <math.h>

int diferenca(int x, int y){
    int i,j;
    int dife[5];

    for(i=0; i<=5; i++){
        for(j=0; j<=5; j++){
            if(x[i]==y[j]){
                dife[i]=x[i];
            }
        }
    }

    return dife;
}

int main(void){
    int x[5]={1,3,5,7,9};
    int y[5]={1,2,3,4,5};

    int dife = diferenca(x,y);
    //intersecao(x,y);
    //uniao(x,y);

    int i;
    
    for(i=0; i<=5; i++){
        printf("%d\t", dife[i]);
    }
    
}
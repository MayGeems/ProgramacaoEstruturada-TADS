#include <stdio.h>
#include <math.h>
#define TAMANHO 5

int diferenca(){
    int x[TAMANHO]={1,3,5,7,9};
    int y[TAMANHO]={1,2,3,4,5};
    int ix, iy;
   
   printf("Diferenca: ");
    for (ix=0 ;ix<TAMANHO;ix++)
    {
     for (iy=0;iy<TAMANHO;iy++)
        {
            if (x[ix] == y[iy])
               break;
        }
        if (iy == TAMANHO)
           printf ("%d ", x[ix]);
    }
}

int intersecao(){
    int x[TAMANHO]={1,3,5,7,9};
    int y[TAMANHO]={1,2,3,4,5};
    int ix, iy;
   
   printf("\nIntersecao: ");
    for (ix=0 ;ix<TAMANHO;ix++)
    {
     for (iy=0;iy<TAMANHO;iy++)
        {
            if (x[ix] == y[iy])
               break;
        }
        if (iy != TAMANHO)
           printf ("%d ", x[ix]);
    }
}

int uniao(){
    int x[TAMANHO]={1,3,5,7,9};
    int y[TAMANHO]={1,2,3,4,5};
    int uni[10];
    int ux=0;
    int ix, iy;
   
    printf("\nUniao: ");
    for (ix=0 ;ix<TAMANHO;ix++){
        uni[ux++] = x[ix];
        for (iy=0;iy<TAMANHO;iy++){
            int a = 0;
            for (ix=0 ;ix<ux;ix++){
                if(y[iy]==uni[ix]){
                    a = 1;
                    break;
                }
            }
            if(a!=1){
                uni[ux++] = y[iy];
            }
        }
    }

    for(ix=0;ix<ux;ix++){
        printf("%d ", uni[ix]);
    }

}

int main(void){

    diferenca();
    intersecao();
    uniao();
    
}
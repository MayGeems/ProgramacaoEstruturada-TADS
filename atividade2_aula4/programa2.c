#include <stdio.h>
#include <math.h>
#include <time.h>

void resposta_A(int vet[]){
    int tempo=1, tempo_teste=1;

    for(int i=0; i<=60;i++){
        if(vet[i]==vet[i+1]){
            tempo++;
        }else{
            if(tempo>tempo_teste){
                tempo_teste=tempo;
            }
            tempo=1;
        }
    }

    printf("\nResposta A - %dm/s", tempo_teste);
}

void resposta_B(int vet[]){
    int v1, v2=0, temp;

    for(int i=0; i<=59;i++){
        if(vet[1]>vet[i+1]){
            v1=vet[i+1]-vet[i];
            temp=i;
        }else{
            if(v1>v2){
                v2=v1;
                temp=i;
            }
            v1=0;
        }
    }

    printf("\nResposta B - %d", temp);
}

void resposta_C(int vet[]){
    int v1, v2=0, temp;

    for(int i=0; i<59;i++){
        if(vet[1]<vet[i+1]){
            v1=vet[i+1]-vet[i];
            if(v1>v2){
                v2=v1;
                temp=i;
            }
        }
    }

    printf("\nResposta C - Tempo:%d Aceleracao:%dm/s", temp, v2);
}

int main (void){

    int vet[60]={0},i;

    srand(time(NULL));

    for(i=0; i<60; i++){
        vet[i] = rand() %5 +1;
    }

    for(i=0; i<60; i++){
        printf("%d ", vet[i]);
    }

    resposta_A(vet);
    resposta_B(vet);
    resposta_C(vet);
    //resposta_D(vet);

}
#include <stdio.h>
#include <math.h>

int main (void){
    float chico=1.70, juca=1.10;
    int i;

    for(i=0; chico>=juca; i++){
        chico+=0.02;
        juca+=0.03;
    }

    printf("Sao necessario %d anos para que Juca passe a altura de Chico.", i);
}
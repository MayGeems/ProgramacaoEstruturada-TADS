#include <stdio.h>
#include <math.h>

int inverso(int n){
    int inv=0;
    do{
        inv = (inv*10)+(n%10);
        n = n/10;
    }while(n>0);

    return inv;
}

int main() {
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    int inv = inverso(n);

    printf("%d <-> %d", n, inv);
}
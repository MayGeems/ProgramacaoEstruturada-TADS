#include <stdio.h>
int main()
{
    int valor;
    int vetor[4];
    int x, div=1000;

    scanf ("%d", &valor);
   
   
    for (x=0;x<4;x++)
    {
        vetor[x] = valor / div;
        valor = valor - (vetor[x] * div);
        div=div/10;    
    }
   
   
    for (x=0;x<4;x++)
        printf ("%d ", vetor[x]);
   
}
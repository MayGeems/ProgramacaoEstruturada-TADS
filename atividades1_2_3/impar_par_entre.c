#include <stdio.h>
#include <math.h>

int main (void){
    int a, b;

    printf("Digite dois valores: ");
    scanf("%d %d", &a, &b);
    
    int n=a;

    if(a%2==0){
        for(a;n<=b;n++){
            if(n%2==0){
                printf("%d\t", n);
            }
        }
    }else{
        for(a;n<=b;n++){
            if(n%2!=0){
                printf("%d\t", n);
            }
        }
    }
}
#include <stdio.h>
#include <math.h>

int main(){

    int a=1,b=2,c=3,d=4;
    //float e=5.00, f=6.00, g=7.00, h=8.00;//
    //char v[10];//
    int x=9;

    void *p;
    p = &a;

    do{
        printf("%d - %d", p, *p);
        if(m== &a || m== &b || m== &c || m==&d || m==&x){
            printf(" corresponde\n");
        }
        m=*p++;
    }

}
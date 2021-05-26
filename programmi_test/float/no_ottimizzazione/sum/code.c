#include <stdio.h>
#include <stdlib.h>

float foo (int a){
    float x = 15.5;
    float res = x + a;
    if (res < 20.0)
        return 1.0;
    else 
        return -1.0;
}

void main (){
    int a;
    scanf("%d", &a);
    printf("%d\n", a);
    float res = foo(a);
    printf("%f\n", res);
    return;    
}
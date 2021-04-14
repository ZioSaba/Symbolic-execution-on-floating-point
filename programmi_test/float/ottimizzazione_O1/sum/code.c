#include <stdio.h>
#include <stdlib.h>

float foo (float a){
    float x = 15.0;
    float res = x + a;
    return res;
}

void main (){
    float a = 10.0;
    float res = foo(a);
    printf("%f \n", res);
    return;    
}
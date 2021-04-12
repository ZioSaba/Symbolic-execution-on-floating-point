#include <stdio.h>
#include <stdlib.h>

float foo (float a){
    float x = 150.0;
    float res = x / a;
    return res;
}

void main (){
    float a = 3.14;
    float res = foo(a);
    printf("%f \n", res);
    return;    
}
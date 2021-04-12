#include <stdio.h>
#include <stdlib.h>
// prova
float foo (int a){
    float x = a;
    return x;
}

void main (){
    int a = 10;
    float res = foo(a);
    printf("%f \n", res);
    return;    
}
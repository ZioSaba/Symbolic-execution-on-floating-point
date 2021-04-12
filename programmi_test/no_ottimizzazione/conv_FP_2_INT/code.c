#include <stdio.h>
#include <stdlib.h>
#include <z3.h>

int foo (float a){
    int x = a;
    return x;
}

void main (){
    float a = 10.000;
    int res = foo(a);
    printf("%d \n", res);
    return;    
}
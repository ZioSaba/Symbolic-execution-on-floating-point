#include <stdio.h>
#include <stdlib.h>
#include <z3.h>

int foo (long double a){
    int x = a;
    return x;
}

void main (){
    long double a = 10.514;
    int res = foo(a);
    printf("%d \n", res);
    return;    
}
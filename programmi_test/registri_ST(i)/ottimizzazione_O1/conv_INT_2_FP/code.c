#include <stdio.h>
#include <stdlib.h>

long double foo (int a){
    long double x = a;
    return x;
}

void main (){
    int a = 10;
    long double res = foo(a);
    printf("%Lf \n", res);
    return;    
}
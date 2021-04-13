#include <stdio.h>
#include <stdlib.h>

long double foo (long double a){
    long double x = 150.0;
    long double res = x / a;
    return res;
}

void main (){
    long double a = 3.14;
    long double res = foo(a);
    printf("%Lf \n", res);
    return;    
}
#include <stdio.h>
#include <stdlib.h>

long double foo (long double a){
    long double x = 15.0;
    long double res = a * x;
    return res;
}

void main (){
    long double a = 10.0;
    long double res = foo(a);
    printf("%Lf \n", res);
    return;    
}
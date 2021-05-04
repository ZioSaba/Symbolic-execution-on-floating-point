#include <stdio.h>
#include <stdlib.h>

float foo_float (int a){
    float x = a;
    return x;
}

double foo_double (float a){
    double x = a;
    return x;
}

void main (){
    int a = 10;
    float res = foo_float(a);
    printf("%f \n", res);
    res = foo_double(res);
    printf("%lf \n", res);
    return;    
}
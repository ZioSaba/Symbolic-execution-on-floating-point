#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double foo (double a){
    double res = sqrt(a);
    return res;
}

void main (){
    double a = 16.0;
    printf("%lf\n", foo(a));
    return;    
}
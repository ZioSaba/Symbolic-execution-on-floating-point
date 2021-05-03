#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double assoluto (float x){
    return fabs(x);
}


void main (){
    double a = -15.12546456;
    printf("%lf\n", assoluto(a));
    return;    
}
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

float foo (int a){
    float x = 15.5;
    float res = x + a;
    if (res < 20.0)
        return 1.0;
    else 
        return -1.0;
}

int main (){

    int desc = open("./input/input.dat", O_RDONLY);
    if (desc == -1){
        printf("Errore nell'apertura del file...\n");
        return -1;
    }

    char buf[4];

    int byte_letti = read(desc, buf, 4);
    if (byte_letti < 0){
        printf("Errore nella read...\n");
    }
    
    int a = atoi(buf);
    
    printf("%f\n", foo(a));

    if (close(desc) == -1){
        printf("Errore nella chiusura del file...\n");
        return -1;
    }

    return 0;
}
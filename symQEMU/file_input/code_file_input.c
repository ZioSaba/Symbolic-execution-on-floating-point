#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <arpa/inet.h>

float foo (int a){
    float x = 15.5;
    float res = x + a;
    if (res < 20.0)
        return 1.0;
    else 
        return -1.0;
}

int main (){

    int desc = open("/home/zio-saba/Scrivania/progetto_laurea/symQEMU/file_input/input/input.dat", O_RDONLY);
    if (desc == -1){
        printf("Errore nell'apertura del file...\n");
        return -1;
    }

    int buf;

    int byte_letti = read(desc, &buf, 4);
    if (byte_letti < 0){
        printf("Errore nella read...\n");
    }

    //int a = atoi(buf);
    printf("buf=%d\n", buf);
    printf("%f\n", foo(buf));

    if (close(desc) == -1){
        printf("Errore nella chiusura del file...\n");
        return -1;
    }

    return 0;
}
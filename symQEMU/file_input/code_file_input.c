#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <arpa/inet.h>

float foo_addizione (int a){
    float x = 15.5;
    float res = x + a;
    if (res < 20.0)
        return 1.0;
    else 
        return -1.0;
}

float foo_sottrazione (int a){
    float x = 15.5;
    float res = x - a;
    if (res > 10.0)
        return 1.0;
    else 
        return -1.0;
}

float foo_moltiplicazione (int a){
    float x = 15.5;
    float res = x * a;
    if (res < 20.0)
        return 1.0;
    else 
        return -1.0;
}

float foo_divisione (int a){
    float x = 15.5;
    float res = x / a;
    if (res < 20.0)
        return 1.0;
    else 
        return -1.0;
}

int main (int argc, char* argv[]){

    int desc = open(argv[1], O_RDONLY);
    //int desc = open("/home/zio-saba/Scrivania/progetto_laurea/symQEMU/file_input/risultati/000000", O_RDONLY);
    if (desc == -1){
        //printf("Errore nell'apertura del file...\n");
        return -1;
    }

    int buf;

    int byte_letti = read(desc, &buf, sizeof(int));
    if (byte_letti < 0){
        //printf("Errore nella read...\n");
        return -1;
    }

    //printf("buf=%d\n", buf);
    printf("%f\n", foo_addizione(buf));

    if (close(desc) == -1){
        //printf("Errore nella chiusura del file...\n");
        return -1;
    }

    return 0;
}

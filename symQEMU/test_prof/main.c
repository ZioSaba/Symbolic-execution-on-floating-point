#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int foo(int x)
{
    if (x == 0xDEADBEEF)
        return 1;
    else
        return 0;
}

int main(int argc, char* argv[])
{
    if (argc != 2) return -1;
    int fp = open(argv[1], O_RDONLY);
    int c;
    read(fp, &c, sizeof(int));
    int res = foo(c);
    printf("Result: %d\n", res);
    return 0;
}


/*
Guarda il mio codice: a me stampa valori corretti. 
Se vedi test.dat contiene il valore binario (little endian) 1, che è quello che viene stampato da printf(). Tutto torna. 
Sei tu che probabilmente confondi il numero binario con la stringa che rappresenta quel numero: test.dat contiene il numero e non una stringa. 
Se tu in test.dat metti la stringa, ma usi solo read() lui la vede come un numero e ti stampa il numero. 
Come hai detto tu serve usare atoi() se vuoi mettere la stringa in test.dat e far in modo che lui converta la stringa ad un numero: tuttavia atoi() fa molte cose, meglio evitarlo. 
*/
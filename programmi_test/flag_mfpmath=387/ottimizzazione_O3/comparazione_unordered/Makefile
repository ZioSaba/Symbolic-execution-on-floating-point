CC=gcc
DUMP=objdump

dump: test
	$(DUMP) -d test -M intel  > dump.txt

test: code.c
	$(CC) -o test code.c -O3 -mfpmath=387 -lm

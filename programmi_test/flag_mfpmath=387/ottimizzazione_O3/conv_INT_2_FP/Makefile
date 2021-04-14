CC=gcc
DUMP=objdump

dump_O3: test_O3
	$(DUMP) -d test_O3 -M intel  > dump_O3.txt

test_O3: code.c
	$(CC) -o test_O3 code.c -O3 -mfpmath=387

CC=gcc
DUMP=objdump

dump_O2: test_O2
	$(DUMP) -d test_O2 -M intel  > dump_O2.txt

test_O2: code.c
	$(CC) -o test_O2 code.c -O2 -mfpmath=387

CC=gcc
DUMP=objdump

dump: test
	$(DUMP) -d test -M intel  > dump2.txt

test: code.c
	$(CC) -o test code.c -mfpmath=387 -mlong-double-80

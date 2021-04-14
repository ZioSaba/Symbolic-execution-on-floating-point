CC=gcc
DUMP=objdump

dump_O1: test_O1
	$(DUMP) -d test_O1 -M intel  > dump_O1.txt

test_O1: code.c
	$(CC) -o test_O1 code.c -O1

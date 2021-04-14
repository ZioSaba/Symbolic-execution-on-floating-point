CC=gcc
DUMP=objdump

dump_LD_O1: test_LD_O1
	$(DUMP) -d test_LD_O1 -M intel  > dump_LD_O1.txt

test_LD_O1: code.c
	$(CC) -o test_LD_O1 code.c -O1

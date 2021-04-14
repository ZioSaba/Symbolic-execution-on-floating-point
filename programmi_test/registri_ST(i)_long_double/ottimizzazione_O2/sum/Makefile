CC=gcc
DUMP=objdump

dump_LD_O2: test_LD_O2
	$(DUMP) -d test_LD_O2 -M intel  > dump_LD_O2.txt

test_LD_O2: code.c
	$(CC) -o test_LD_O2 code.c -O2

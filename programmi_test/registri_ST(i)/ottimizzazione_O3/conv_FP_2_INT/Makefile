CC=gcc
DUMP=objdump

dump_LD_O3: test_LD_O3
	$(DUMP) -d test_LD_O3 -M intel  > dump_LD_O3.txt

test_LD_O3: code.c
	$(CC) -o test_LD_O3 code.c -O3

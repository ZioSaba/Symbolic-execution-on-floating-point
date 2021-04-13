CC=gcc
DUMP=objdump

dump_LD: test_LD
	$(DUMP) -d test_LD -M intel  > dump_LD.txt

test_LD: code.c
	$(CC) -o test_LD code.c -O1

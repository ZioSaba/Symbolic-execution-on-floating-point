CC=gcc
DUMP=objdump

dump: test
	$(DUMP) -d -M intel test > dump.txt

test: code.c
	$(CC) -o test code.c

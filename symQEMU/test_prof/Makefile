all: compile
	SYMCC_INPUT_FILE=`pwd`/test.dat \
	SYMCC_OUTPUT_DIR=`pwd`/out \
	/home/zio-saba/Scrivania/symqemu/BUILD/x86_64-linux-user/symqemu-x86_64 ./main `pwd`/test.dat 
	xxd out/*

compile:
	gcc -o main main.c
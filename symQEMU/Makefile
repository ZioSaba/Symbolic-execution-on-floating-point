dir_command=/home/zio-saba/Scrivania/symqemu/BUILD/x86_64-linux-user/symqemu-x86_64
dir_test=/home/zio-saba/Scrivania/progetto_laurea/symQEMU/
dir_res=/home/zio-saba/Scrivania/progetto_laurea/symQEMU/risultati/
flag= -d in_asm,op_opt


run: 
	SYMCC_OUTPUT_DIR=./risultati  /home/zio-saba/Scrivania/symqemu/BUILD/x86_64-linux-user/symqemu-x86_64 -d in_asm,op_opt,out_asm "path_programma"

test: code.c
	gcc $(dir_test)code.c -o $(dir_test)test

clean:
	cd $(dir_res); \
	rm 0000*
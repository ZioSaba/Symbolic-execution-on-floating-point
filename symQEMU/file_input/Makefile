dir_command=/home/zio-saba/Scrivania/symqemu_originale/BUILD/x86_64-linux-user/symqemu-x86_64
dir_test=/home/zio-saba/Scrivania/progetto_laurea/symQEMU/file_input/
dir_res=/home/zio-saba/Scrivania/progetto_laurea/symQEMU/file_input/risultati/
flag= -d in_asm,op_opt

test: code_file_input.c
	gcc $(dir_test)code_file_input.c -o $(dir_test)test_file

clean:
	cd $(dir_res); \
	rm 0000*

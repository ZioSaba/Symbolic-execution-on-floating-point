dir_command=/home/zio-saba/Scrivania/symqemu_originale/BUILD/x86_64-linux-user/symqemu-x86_64
dir_test=/home/zio-saba/Scrivania/progetto_laurea/symQEMU/std_input/
dir_res=/home/zio-saba/Scrivania/progetto_laurea/symQEMU/std_input/risultati/
flag= -d in_asm,op_opt


run: test
	SYMCC_OUTPUT_DIR=$(dir_res) $(dir_command) $(flag) ./test_stdin


test: code_std_input.c
	gcc $(dir_test)code_std_input.c -o $(dir_test)test_stdin


clean:
	cd $(dir_res); \
	rm 0000*

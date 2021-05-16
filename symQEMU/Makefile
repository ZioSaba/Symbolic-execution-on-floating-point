dir_command=/home/zio-saba/Scrivania/symqemu_originale/BUILD/x86_64-linux-user/symqemu-x86_64
dir_test=/home/zio-saba/Scrivania/progetto_laurea/symQEMU/
dir_res=/home/zio-saba/Scrivania/progetto_laurea/symQEMU/risultati/
flag= -d in_asm,op_opt
path_programma="/home/zio-saba/Scrivania/progetto_laurea/programmi_test/float/no_ottimizzazione/sum/test"

#run_ext:
#	SYMCC_OUTPUT_DIR=./risultati  $(dir_command) $(flag) $(path_programma)



#run: test
#	export SYMCC_OUTPUT_DIR=$(dir_res) |	$(dir_command) $(flag) ./test

test: code.c
	gcc $(dir_test)code.c -o $(dir_test)test

clean:
	cd $(dir_res); \
	rm 0000*

dir_command=/home/zio-saba/Scrivania/symcc/build/
dir_test=/home/zio-saba/Scrivania/progetto_laurea/symQEMU/
dir_res=/home/zio-saba/Scrivania/progetto_laurea/symQEMU/risultati/


test: all-before code.c
	cd $(dir_command); \
	./symcc $(dir_test)code.c -o $(dir_test)test

all-before: 
	cd $(dir_test); \
	export SYMCC_OUTPUT_DIR=./risultati

clean:
	cd $(dir_res); \
	rm 0000*
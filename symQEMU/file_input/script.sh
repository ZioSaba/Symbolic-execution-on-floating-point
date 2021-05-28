#!/bin/bash

export SYMCC_OUTPUT_DIR=/home/zio-saba/Scrivania/progetto_laurea/symQEMU/file_input/risultati/

export SYMCC_INPUT_FILE=/home/zio-saba/Scrivania/progetto_laurea/symQEMU/file_input/input/input.dat

/home/zio-saba/Scrivania/symqemu/BUILD/x86_64-linux-user/symqemu-x86_64 -d in_asm,op_opt ./test_file
#!/bin/bash
gcc -Wall -wextra -werror -pedantic -c -fPIC * .c
gcc -shared -o liball.so * .o
export LD_LIBERTY_PATH=, :$LD_LIBRARY_PATH

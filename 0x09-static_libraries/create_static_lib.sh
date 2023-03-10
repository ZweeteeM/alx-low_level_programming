#!/bin/bash
gcc -Wall -pedantic -Werror _Wextra -c *.c
ar _rc liball.a *.o
ranlib liball.a

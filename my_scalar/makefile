my_scalar.exe: my_scalar.o my_scalar_functions.o
	gcc -Wall -ansi -pedantic -o my_scalar my_scalar.o my_scalar_functions.o
my_scalar.o: my_scalar.c
	gcc -Wall -ansi -pedantic -c my_scalar.c -o my_scalar.o
my_scalar_functions.o: my_scalar_functions.c
	gcc -Wall -ansi -pedantic -c my_scalar_functions.c -o my_scalar_functions.o

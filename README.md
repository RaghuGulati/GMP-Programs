# GMP(GNU Multiple Precision Arithmatic Library)

It is a protable library written in C for arbitrary precision arithmatic on integers,
rational numbers, and floating-point numbers. It aims to provide the fastest possible 
arithmetic for all applications that need high precesion than is directly supported by
basic C types.

# Installing

firstly clone the following github repository:


	git clone https://github.com/aixoss/gmp


Then go to the gmp directory and execute the following:

	- ./configure
	- make
	- make check
	- make install

After executing all the commands you are ready to write program.

# Compiling and Executing the Program
Write any C/C++ program using gmp or take the sample program prg1.cpp from this repository.

for compiling the program:

		g++ -o prg1 prg1.cpp -lgmpxx -lgmp //for c++
		
		gcc -o prg1c prg1.c -lgmp 	   //for c

for executing the code:

		./prg1	//c++ executable file

		./prg1c // c executable file



object = fun.o main.o

install : pass_simple

pass_simple : $(object)
	gfortran -o $@ $^

%.o : %.c
	gcc -c $^

%.o : %.f90
	gfortran -c $^

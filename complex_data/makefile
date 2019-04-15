object = complex.o main.o
name = pass_complex

install : $(name)

$(name) : $(object)
	gfortran -o $@ $^

%.o : %.c
	gcc -c $^

%.o : %.f90
	gfortran -c $^

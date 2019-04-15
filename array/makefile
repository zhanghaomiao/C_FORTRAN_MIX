object = pass_array.o main.o
name = pass_array

install : $(name)

$(name) : $(object)
	gfortran -o $@ $^

%.o : %.c
	gcc -c $^

%.o : %.f90
	gfortran -c $^

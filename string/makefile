object = string.o main.o
name = pass_string

install : $(name)

$(name) : $(object)
	gfortran -o $@ $^

%.o : %.c
	gcc -c $^

%.o : %.f90
	gfortran -c $^

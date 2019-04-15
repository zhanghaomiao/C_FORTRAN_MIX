object = struct.o main.o
name = pass_structure

install : $(name)

$(name) : $(object)
	gfortran -o $@ $^

%.o : %.c
	gcc -c $^

%.o : %.f90
	gfortran -c $^

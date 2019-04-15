object = pass_array.o main.o
name = pass_array

install : $(name)

$(name) : $(object)
	gfortran -o $@ $^ -lstdc++

%.o : %.cpp
	g++ -c $^

%.o : %.f90
	gfortran -c $^

clean:
	rm  *.o


all: main.o student.o date.o address.o database.o
	g++ main.o student.o date.o address.o database.o -o databaseProgram
	#PROGRAM BUILD COMPLETE
run:
	./databaseProgram
main.o: main.cpp student.h date.h address.h database.h database.h
	g++ -c main.cpp
	#CHECKING FOR DEPENDENCIES
student.o: student.cpp student.h date.cpp date.h address.cpp address.h database.cpp database.h
	g++ -c student.cpp
	#CREATING STUDENT CLASS FILES
date.o: date.cpp date.h
	g++ -c date.cpp
	#CREATING DATE CLASS FILES
address.o: address.cpp address.h
	g++ -c address.cpp
	#CREATING ADDRESS CLASS FILES
database.o: database.cpp database.h
	g++ -c database.cpp




vector:
	g++ vector.cpp
	./a.out


clean:
	rm -rf *.out
	rm -rf *.o
	rm -rf databaseProgram*
	rm -rf getData*
	#CLEANED ALL PREVIOUS FILES

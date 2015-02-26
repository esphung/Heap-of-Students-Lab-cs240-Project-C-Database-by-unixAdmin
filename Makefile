all: main.o student.o date.o
	g++ main.o student.o date.o -o databaseProgram
	#PROGRAM BUILD COMPLETE

run:
	./databaseProgram


main.o: main.cpp student.h date.h
	g++ -c main.cpp
	#MAIN DEPENDENCIES BUILT

student.o: student.cpp student.h date.cpp date.h
	g++ -c student.cpp
	#STUDENT DEPENDENCIES

date.o: date.cpp date.h
	g++ -c date.cpp
	#CREATED DATE DEPENDENCIES


clean:
	rm -rf *.out
	rm -rf *.o
	rm -rf databaseProgram*
	rm -rf getData*
	#CLEANED ALL PREVIOUS FILES


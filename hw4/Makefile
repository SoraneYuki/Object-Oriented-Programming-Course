all:	Student.o Score.cpp
	c++ Score.cpp Student.o -o Score

Student.o: Student.cpp Student.h
	c++ -c Student.cpp Student.h

clean:
	rm -rf *.*~ *.out *.o *~ Score *.gch
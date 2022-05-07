all:	Student.o Score.cpp InternStudent.o
	c++ Score.cpp Student.o InternStudent.o

Student.o: Student.cpp Student.h
	c++ -c Student.cpp Student.h

InternStudent.o: InternStudent.cpp InternStudent.h
	c++ -c InternStudent.cpp InternStudent.h

clean:
	rm -rf *.*~ *.out *.o *~ Score *.gch
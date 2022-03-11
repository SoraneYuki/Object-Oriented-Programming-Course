all: 	main.cpp maxScore.o
	c++ main.cpp maxScore.o

maxScore.o: maxScore.h maxScore.cpp
	c++ -c maxScore.cpp

clean:
	rm -rf *.o *.*~ a.out *~
lab3B: clock.o lab3B.o
	g++ -o lab3B clock.o lab3B.o

clock.o: clock.cpp clock.h
	g++ -c clock.cpp clock.h

lab3B.o: lab3B.cpp clock.h
	g++ -c clock.h lab3B.cpp


lab3A: lab3A.cpp
	g++ -o lab3A lab3A.cpp

clean:
	rm lab3B lab3A *.o

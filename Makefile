.PHONY: basic_1.o basic_1 bubblesort.o bubblesort insertion insertion.o basic_3 basic_3.o oop oop.o sem sem.o

All:
	g++ -o basic_1 basic_1.cc

basic_1: basic_1.o
	g++ -o basic_1 basic_1.o
basic_1.o:
	g++ -c basic_1.cc

oop: oop.o
	g++ -o oop oop.o
oop.o:
	g++ -c oop.cc

bubblesort: bubblesort.o
	g++ -o bubblesort bubblesort.o
bubblesort.o:
	g++ -c bubblesort.cc

insertion: insertion.o
	g++ -o insertion insertion.o
insertion.o:
	g++ -c insertion.cc

basic_3: basic_3.o
	g++ -o basic_3 basic_3.o
basic_3.o:
	g++ -c basic_3.cc

sem: sem.o
	g++ -o sem sem.o
sem.o:
	g++ -c sem.cc

clean:
	rm -rf *o *exe basic_1 bubblesort insertion
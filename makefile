all: StrList

StrList: StrList.o main.o
	gcc -Wall -g -o StrList StrList.o main.o

StrList.o: StrList.c StrList.h
	gcc -Wall -g -c StrList.c -o StrList.o

<<<<<<< HEAD
main.o: Main.c StrList.h
	gcc -Wall -g -c Main.c -o main.o
=======
main.o: main.c StrList.h
	gcc -Wall -g -c main.c -o main.o
>>>>>>> cbdb55e52d7e0f44cd6b74b991b15936f4e67b0b

clean:
	rm -f *.o StrList

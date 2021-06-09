all : main


main.o : main.c
	gcc -c main.c

date.o : date.c date.h
	gcc -c date.c

liste.o : liste.c liste.h date.h
	gcc -c liste.c

main : main.o date.o liste.o
	gcc -o main main.o date.o liste.o

clean :
	rm -f -rf *.o ./main
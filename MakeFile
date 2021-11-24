CC=gcc
AR=ar
FLAGS = -Wall -g

all: libmymat.a connections

connections: main.o libmymat.a
	$(CC) $(FLAGS) -o connections main.o libmymat.a

libmymat.a: my_mat.o l
	$(AR) -rcs libmymat.a my_mat.o

main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c
	
my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c

.PHONY: clean all

clean:
	rm -f *.o *.a *.so connections
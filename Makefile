all: no.o lista.o caixeiro.o
	gcc caixeiro.o lista.o no.o -o p_e_c -std=c99 -Wall

lista.o:
	gcc -c lista.c -o lista.o

no.o:
	gcc -c no.c -o no.o

caixeiro.o:
	gcc -c caixeiro.c -o caixeiro.o

clean:
	rm *.o p_e_c

run:
	./p_e_c

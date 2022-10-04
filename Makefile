all: no.o lista.o caixeiro.o
	gcc no.o lista.o caixeiro.o -o caixeiro -std=c99 -Wall

no.o:
	gcc -c no.c -o no.o

lista.o:
	gcc -c lista.c -o lista.o
	 
caixeiro.o:
	gcc -c caixeiro.c -o caixeiro.o
	 
clean:
	rm *.o caixeiro

run:
	./rpn

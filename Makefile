Fibonacci: Fibonacci.o
	gcc -o Fibonacci Fibonacci.o

Fibonacci.o: Fibonacci.c
	gcc -c -g -Werror Fibonacci.c

clean:
	rm -f *.o Fibonacci

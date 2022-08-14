#include <stdio.h>
#include <stdlib.h>

int fibonacci(int num);

int main(int argc, char* argv[])
{
	if(argc != 2)
	{
		perror("ERROR: ./Fibonacci [sequence number]");
		exit(1);
	}
	int sequence = atoi(argv[1]);
	puts("Welcome to the Fibonacci Sequence!");

	for(int i = 0; i <= sequence; i++)
	{
		printf("%d\t", i);
	}
	printf("\n");

	for(int num = 0; num <= sequence; num++)
	{
		int fib = fibonacci(num);
		printf("%d\t", fib);
	}
	printf("\n");
	return 0;
}

int fibonacci(int n)
{
	if(n == 0)
	{
		return 0;
	}
	else if(n == 1)
	{
		return 1;
	}
	else
	{
		return fibonacci(n - 2) + fibonacci(n - 1);
	}
}

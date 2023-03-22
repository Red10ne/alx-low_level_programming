#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	long int a = 1, b = 2, c; 
	int i;

	for (i = 0; i < 50; i++)
	{
		printf("%ld, ", a);
		c = a + b;
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}

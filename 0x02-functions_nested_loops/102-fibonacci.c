#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	int a = 1, b = 2, i, c;

	for (i = 0; i < 50; i++)
	{
		printf("%d, ", a);
		c = a + b;
		a = b;
		b = c;
	}
	return (0);
}

#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: number of times the character \ should be printed
 * Return: 0
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			int j;

			for (j = 0; j < i; j++)
			{
				putchar(' ');
			}
			putchar('\\');
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}

#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 *@n:number of times the character _ should be printed
 *Return: 0
 */

void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			putchar('_');
		}
		putchar('\n');
	}
	else
	{
		putchar('\n');
	}
}

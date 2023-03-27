#include "main.h"
#include <stdio.h>

/**
 * print_rev -  function that prints a string, in reverse
 *@s: the string to print
 * Return: 0
 */

void print_rev(char *s)
{
	int len = 0;

	while (len >= 0)
	{
		if (s[len] == '\0')
			break;
		len++;
	}

	for (len -= 1; len >= 0; len--)
	{
		putchar(s[len]);
	}
	putchar('\n');
}

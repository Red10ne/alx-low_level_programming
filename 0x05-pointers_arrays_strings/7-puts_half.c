#include "main.h"

/**
 * puts_half - function that prints half of a string
 * @str: input string
 * Return: 0
 */

void puts_half(char *str)
{
	int len = 0, i;

	while (len >= 0)
	{
		if (str[len] == '\0')
			break;
		len++;
	}

	if (len % 2 == 1)
		i = len / 2;
	else
		i = (len - 1) / 2;

	for (i++; i < len; i++)
		putchar(str[i]);
	putchar('\n');
}

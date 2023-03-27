#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 * @str:input string
 * Return: 0
 */

void puts2(char *str)
{
	int len = 0;

	while (len >= 0)
	{
		if (str[len] == '\0')
		{
			putchar('\n');
			break;
		}
		if (len % 2 == 0)

			putchar(str[len]);
		len++;
	}
}

#include "main.h"

/**
 * int _islower(int c) - Check if char is lower case.
 *
 * Returns: 1 id c is lowercase.
 * Returns: 0 otherwise.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

#include "main.h"

/**
 * _atoi - function that convert a string to an integer.
 * @s: input string
 * Return: 0 if no numbers in str and 1 if num in str
 */

int _atoi(char *s)
{
	int sign = 1;
	int num = 0;

	while (*s)
	{
		if (*s == '-')
		{
			sign = -sign;
		}
		else if (*s >= '0' && *s <= '9')
		{
			num = num * 10 + (*s - '0');
		}
		else if (num > 0)
		{
			break;
		}
		s++;
	}
	return (sign * num);
}

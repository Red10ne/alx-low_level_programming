#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * @n: pointer of unsigned long int
 * @index: index of the bit
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int r;

	if (index > 63)
	{
		return (-1);
	}
	r = 1 << index;

	if (*n & r)
	{
		*n ^= r;
	}
	return (1);
}

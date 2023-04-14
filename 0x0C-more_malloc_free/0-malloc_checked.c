#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates mem using "malloc".
 * @b: amount of bytes.
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void* *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}

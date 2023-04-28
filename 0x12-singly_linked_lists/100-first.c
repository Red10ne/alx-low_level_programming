#include <stdio.h>

/**
 * rmain - function executed before main
 * Return: no return
 */

void __attribute__ ((constructor)) rmain()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}

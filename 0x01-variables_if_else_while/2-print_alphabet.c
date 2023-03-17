#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase only with "putchar" function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (char c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar ('\n');
	return (0);
}

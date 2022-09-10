#include <stdio.h>

/**
 * main - Prints the alphabet in lower case in reverse.
 * Return: 0
 */

int main(void)
{
	char l;

	for (l = 'z' ; l >= 'a' ; l--)
	{
		putchar(l);
	}
	putchar(10);
	return (0);
}

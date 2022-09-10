#include <stdio.h>

/**
 * * main - Prints the all single numbers of base 10.
 * * Return: 0
 * */

int main(void)
{
	char a;

	for (a = '0' ; a <= '9' ; a++)
	{
		putchar(a);
	}
	putchar(10);
	return (0);
}

#include <stdio.h>
#include "main.h"

/**
 * main - print alphabets in lowercase
 * Return: 0 always
 */

void print_alphabet(void)
{
	char ch;
	ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}

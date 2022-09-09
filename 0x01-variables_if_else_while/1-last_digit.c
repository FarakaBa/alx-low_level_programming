#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - enter the number
 * Return: 0
 */

int main(void)
{
	int n;
	int a;
	a = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (a > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, a);
	}
	else if (a == 0)
	{
		printf("Last digit of %i is %i and is o\n", n, a);
	}
	else
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, a);
	}

	return (0);
}

#include<stdio.h>

/**
 * main - print a given message
 * and the size of different types 
 * compiled by c
 * Return: 0
 */

int main(void)
{
	puts("Size of char: %d byte(s)", sizeof(char));
	puts("Size of int: %d byte(s)", sizeof(int));   
	puts("Size of long int: %d byte(s)", sizeof(long int));
	puts("Size of long long int: %d byte(s)", sizeof(long long int));
	puts("Size of float: %d byte(s)", sizeof(float));
	return (0);
}	

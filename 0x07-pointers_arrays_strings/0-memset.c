nclude "main.h"

/**
 * memset - Fill th first n bytes of the memory area point
 * constant byte b.
 * @s: Pointer to the memory area s.
 * @b: Constant byte.
 * @n: Numbers of the bytes.
 * Return: A pointer to hte memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	for (; n; n--)
	{
		s[n - 1] = b;
	}
	return (s);
}

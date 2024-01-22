#include "main.h"

/**
 * _memset - prints buffer in hexa
 * @n: the address of memory to print
 * @b: the size of the memory to print
 * @s: my 1st location in room
 *
 * @i: my counter
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i

	s = malloc(b * sizeof(int));
	for(i = 0; i <= b; i++)
	{
		s[i] = n;
	}
	return (s);
}

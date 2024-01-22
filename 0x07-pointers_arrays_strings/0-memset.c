#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * @ii: My counter
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int ii;

for (ii = 0; ii < n; ii++)
{
s[ii] = b;
}

return (s);
}

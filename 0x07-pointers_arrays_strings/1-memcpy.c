#include "main.h"
#include <stdio.h>
/**
 * _memcpy - prints buffer in hexa
 * @des: the address of memory to print
 * @n: the size of the memory to print
 * @src: this is source
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}

return (dest);
}

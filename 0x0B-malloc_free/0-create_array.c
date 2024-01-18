#include "main.h"

/**
 * create_array - ccreate string of array .
 *
 * Return: Always 0.
 */
char *create_array(unsigned int size, char c)
{
	int u;
	char* s;

	s = malloc(size);
	if(s == NULL)
	{
		return (NULL);

	}
	u = 0;
	while(u < size)
	{
		s[u] = c;
		u++;
	}
	s[u] = '\0';
	return (s)
}

#include "main.h"

/**
 * malloc_checked - check the code
 *
 * @ss: location of b
 * Return: Sacsess ss.
 */
void *malloc_checked(unsigned int b)
{
unsigned int* ss;

ss = malloc(sizeof(unsigned int));
if (ss == NULL)   
{
return (98);
}
ss =b;
return (ss);
}

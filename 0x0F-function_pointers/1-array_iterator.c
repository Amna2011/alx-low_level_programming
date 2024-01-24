#include "function_pointers.h"
/**
 * array_iterator - prints an integer
 * @array: my array
 * @size: my size
 * @action: my action function
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}

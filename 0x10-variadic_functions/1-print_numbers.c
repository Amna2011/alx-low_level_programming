#include "variadic_functions.h"
/**
 * print_numbers - prints numbers given as parameters
 *
 * @separator: string to be printed between numbers
 *
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);
	for (i = 0; i < n - 1; i++)
	{
		printf("%d%s", va_arg(ptr, int), separator);
	}
	printf("%d\n", va_arg(ptr, int));
	va_end(ptr);
}
#include "variadic_functions.h"

/**
 * print_strings - check the code
 * @separator: my separator string
 * @n: number of arges
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int f;
va_list list;
va_start(list, n);
for (f = 0; f < n; f++)
{
if (!separator)
{
printf("%s", va_arg(list, char*));
}
else if (separator && f == 0)
{
printf("%s", va_arg(list, char*));
}
else
{
printf("%s%s", separator, va_arg(list, char*));
}
va_end(list);
}
printf("\n");
}

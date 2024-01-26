#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything
 *
 * @format: list of types of arguments passed to the function
 *
 */
void print_all(const char * const format, ...)
{
int f = 0;
char *str, *sepp = "";
va_list list;
va_start(list, format);
if (format)
{
while (format[f])
{
switch (format[f])
{
case 'c':
printf("%s%c", sepp, va_arg(list, int));
break;
case 'i':
printf("%s%d", sepp, va_arg(list, int));
break;

case 'f':
printf("%s%f", sepp, va_arg(list, double));
break;
case 's':
str = va_arg(list, char *);
if (!str)
str = "(nil)";
printf("%s%s", sepp, str);
break;
default:
f++;
continue;

}
sepp = ", ";
f++;
}
}
printf("\n");
va_end(list);
}

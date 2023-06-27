#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - function that prints anything
 * @format: is a list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i;
	char *str, *separator = "";
	va_list arr;

	i = 0;
	va_start(arr, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(arr, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(arr, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(arr, double));
					break;
				case 's':
					str = va_arg(arr, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", separator, str);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(arr);
}


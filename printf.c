#include <stdarg.h>
#include <string.h>
#include <stdio.h>
/**
 * _printf - print formatted output
 * @format: the format
 *
 * Return: Void
 */
int _printf(const char *format, ...)
{
	va_list ap;

	va_start(ap, format);
	return (vprintf(format, ap));
}

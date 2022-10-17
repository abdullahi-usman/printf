#include <stdarg.h>
#include <string.h>

/**
 * _printf - print formatted output
 * @format: the format
 *
 * Return: Void
 */
int _printf(const char *format, ...)
{
	int i, size = (int)strlen(format);
	va_list ap;
	va_start(ap, format);

	va_end(ap);

	return (size);
}

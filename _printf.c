#include "main.h"
/**
 * _printf - Custom printf implementation
 * @format: string to be formatted
 * Return: string representation
 */
int _printf(const char *format, ...);
int _printf(const char *format, ...)
{
	va_list args;
	unsigned int i;
	int count = 0;

	va_start(args, format);
	if (!format || (format[0] == '%' && !format[1]))
	{
		return (-1);
	}
	if ((!format[2] && format[0] == '%' && format[1] == ' '))
	{
		return (-1);
	}
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
			{
				va_end(args);
				return (-1);
			}
			if (format[i] == '%')
			{
				_putchar('%');
				count++;
			}
			else
			{
				count += handle_specifier(format[i], args);
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}
	va_end(args);
	return (count);
}

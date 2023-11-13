#include "main.h"
/**
 * _strings - function to write a string to stdout.
 * @args: argument list.
 * Return: length of string.
 */
int _strings(va_list args)
{
	char *str = va_arg(args, char *);
	int length;
	int j;

	if (!str)
	{
		str = "(null)";
		length = _strlen(str);
		for (j = 0; j < length; j++)
		{
			_putchar(str[j]);
		}
		return (length);
	}
	else
	{
		length = _strlen(str);
		for (j = 0; j < length; j++)
		{
			_putchar(str[j]);
		}
	}
	return (length);
}

/**
 * _chars - function to write a character to stdout.
 * @args: argument list.
 * Return: 1 always.
 */
int _chars(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
	return (1);
}

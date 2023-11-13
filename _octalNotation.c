#include "main.h"
/**
 * _octal - Specifier for octal notation.
 * @args: Argument list.
 * Return: Characters count.
 */
int _octal(va_list args)
{
	unsigned int numb = va_arg(args, unsigned int);
	char octal_str[BUFFER_SIZE];
	int index = 0;
	int i;
	int count = 0;

	do {
		octal_str[index++] = (numb % 8) + '0';
		numb /= 8;
	} while (numb > 0);
	if (index == 0)
	{
		octal_str[index++] = '0';
	}
	for (i = index - 1; i >= 0; i--)
	{
		_putchar(octal_str[i]);
		count++;
	}
	return (count);
}

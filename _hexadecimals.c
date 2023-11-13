#include "main.h"
/**
 * uppercase_hexadecimal - Specifier for uppercase hexadecimal.
 * @args: Argument list.
 * Return: Characters count.
 */
int uppercase_hexadecimal(va_list args)
{
	unsigned int numb = va_arg(args, unsigned int);
	char hex_str[BUFFER_SIZE], temp;
	int length = 0, i, j, count = 0;

	if (numb == 0)
	{
		hex_str[0] = '0';
		length = 1;
	}
	else
	{
		while (numb > 0)
		{
			hex_str[length] = "0123456789ABCDEF"[numb % 16];
			numb /= 16;
			length++;
		}
	}
	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		temp = hex_str[i];
		hex_str[i] = hex_str[j];
		hex_str[j] = temp;
	}
	for (i = 0; i < length; i++)
	{
		_putchar(hex_str[i]);
		count++;
	}
	return (count);
}

/**
 * lowercase_hexadecimal - Specifier for lowercase hexadecimal characters
 * @args: Argument list.
 * Return: Characters count.
 */
int lowercase_hexadecimal(va_list args)
{
	unsigned int numb = va_arg(args, unsigned int);
	char hex_str[BUFFER_SIZE], temp;
	int length = 0, i, j, count = 0;

	if (numb == 0)
	{
		hex_str[0] = '0';
		length = 1;
	}
	else
	{
		while (numb > 0)
		{
			hex_str[length] = "0123456789abcdef"[numb % 16];
			numb /= 16;
			length++;
		}
	}
	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		temp = hex_str[i];
		hex_str[i] = hex_str[j];
		hex_str[j] = temp;
	}
	for (i = 0; i < length; i++)
	{
		_putchar(hex_str[i]);
		count++;
	}
	return (count);
}

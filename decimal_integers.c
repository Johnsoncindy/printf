#include "main.h"
/**
 * _integers - Handle the %i.
 * @args: Argument list.
 * @is_long: Handle the long value
 * Return: characters count.
 */
int _integers(va_list args, int is_long);
int _integers(va_list args, int is_long)
{
	int numb;
	int i, j, length = 0, not_positive = 0, count = 0;
	char str_int[BUFFER_SIZE], temp;

	if (is_long)
	{
		long num = va_arg(args, long);

		numb = (int)num;
	}
	else
	{
		numb = va_arg(args, int);
	}

	if (numb < 0)
	{
		not_positive = 1;
		numb = -numb;
	}
	if (numb == 0)
	{
		str_int[0] = '0';
		length = 1;
	}
	else
	{
		while (numb > 0)
		{
			str_int[length] = '0' + (numb % 10);
			numb /= 10;
			length++;
		}
		if (not_positive)
		{
			str_int[length] = '-';
			length++;
		}
		for (i = 0, j = length - 1; i < j; i++, j--)
		{
			temp = str_int[i];
			str_int[i] = str_int[j];
			str_int[j] = temp;
		}
	}
	for (i = 0; i < length; i++)
	{
		_putchar(str_int[i]);
		count++;
	}
	return (count);
}

/**
 * _decimalInt - Handle the %i specifier.
 * @args: Argument list.
 * @is_long: Handle the long value.
 * Return: Count of characters written.
 */
int _decimalInt(va_list args, int is_long)
{
	if (is_long)
	{
		return (_integers(args, 1));
	}
	return (_integers(args, 0));
}

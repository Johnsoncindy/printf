#include "main.h"
/**
 * unsigned_integers - Specifier for unsigned decimals.
 * @args: Argument list.
 * Return: Characters count.
 */
int unsigned_integers(va_list args)
{
	unsigned int numb = va_arg(args, unsigned int);
	char buff[BUFFER_SIZE], temp;
	int length = 0, i, j, count = 0;

	if (numb == 0)
	{
		buff[0] = '0';
		length = 1;
	}
	else
	{
		while (numb > 0)
		{
			buff[length] = '0' + (numb % 10);
			numb /= 10;
			length++;
		}
	}
	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		temp = buff[i];
		buff[i] = buff[j];
		buff[j] = temp;
	}
	for (i = 0; i < length; i++)
	{
		_putchar(buff[i]);
		count++;
	}
	return (count);
}

#include "main.h"
/**
 * _address - Specifier for printing address of memories.
 * @args: Argument list.
 * Return: Characters count
 */
int _address(va_list args)
{
	uintptr_t address = va_arg(args, uintptr_t);
	char addr_str[BUFFER_SIZE], hex_digit;
	int length = 0, numb, i;
	int count = 0;

	if (address == 0)
	{
		_putchar('(');
		_putchar('n');
		_putchar('i');
		_putchar('l');
		_putchar(')');
		length += 5;
	}
	else
	{
		_putchar('0');
		_putchar('x');

		while (address != 0)
		{
			numb = address % 16;
			hex_digit = (numb < 10) ? ('0' + numb) : ('a' + numb - 10);
			addr_str[length] = hex_digit;
			address /= 16;
			length++;
		}
		for (i = length - 1; i >= 0; i--)
		{
			_putchar(addr_str[i]);
		}
		length += 2;
	}

	count += length;
	return (count);
}

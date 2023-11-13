#include "main.h"
/**
 * unprintable_chars - Specifier for unprintable characters.
 * @args: Argument list.
 * Return: Characters count.
 */
int unprintable_chars(va_list args)
{
	char *input = va_arg(args, char *);
	char c;
	int count = 0, i;

	for (i = 0; input[i] != '\0'; i++)
	{
		c = input[i];
		if (c < 32 || c >= 127)
		{
			_putchar('\\');
			_putchar('x');
			_putchar((c / 16) < 10 ? (c / 16) + '0' : (c / 16) - 10 + 'A');
			_putchar((c % 16) < 10 ? (c % 16) + '0' : (c % 16) - 10 + 'A');
			count += 4;
		}
		else
		{
			_putchar(c);
			count++;
		}
	}
	return (count);
}

#include "main.h"
/**
 * _binaries - Specifier for binaries.
 * @args: Argument list.
 * Return: Characters count.
 */
int _binaries(va_list args)
{
	unsigned int numb = va_arg(args, unsigned int);
	int index = 0;
	char binaryNumbs[BUFFER_SIZE];
	int count = 0, j;

	while (numb > 0)
	{
		binaryNumbs[index++] = (numb % 2) + '0';
		numb /= 2;
	}
	if (index == 0)
	{
		binaryNumbs[index++] = '0';
	}
	for (j = index - 1; j >= 0; j--)
	{
		_putchar(binaryNumbs[j]);
		count++;
	}
	return (count);
}

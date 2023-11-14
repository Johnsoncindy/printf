#include "main.h"
/**
 * handle_specifier - format each specifier character.
 * @format_character: specifier character('c', 's', 'd', etc.).
 * @args: Argument list.
 * Return: 1 always.
 */
int handle_specifier(const char format_character, va_list args)
{
	switch (format_character)
	{
		case 'c':
			return (_chars(args));
		case 's':
			return (_strings(args));
		case 'd':
			return (_decimalInt(args));
		case 'i':
			return (_integers(args));
		case 'b':
			return (_binaries(args));
		case 'o':
			return (_octal(args));
		case 'p':
			return (_address(args));
		case 'u':
			return (unsigned_integers(args));
		case 'X':
			return (uppercase_hexadecimal(args));
		case 'x':
			return (lowercase_hexadecimal(args));
		case 'S':
			return (unprintable_chars(args));
		default:
			_putchar('%');
			_putchar(format_character);
			return (2);
	}
}

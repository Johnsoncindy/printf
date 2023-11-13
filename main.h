#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#define BUFFER_SIZE 1024

/**
 * struct PrintfSpecifier - Define a struct to represent format specifiers
 * @type: Format specifier type ('d', 'f', 's', etc.)
 * @data: Pointer to the corresponding data
 */
typedef struct PrintfSpecifier
{
	char type;
	int (*data)(va_list args);
} PrintfSpecifier;

int _printf(const char *format, ...);
int _putchar(char c);
int _strlen(const char *str);
int handle_specifier(const char format_character, va_list args);
int _strings(va_list args);
int _chars(va_list args);
int _decimalInt(va_list args);
int _integers(va_list args);
int uppercase_hexadecimal(va_list args);
int lowercase_hexadecimal(va_list args);
int _binaries(va_list args);
int unsigned_integers(va_list args);
int _octal(va_list args);
int unprintable_chars(va_list args);
int _address(va_list args);

#endif

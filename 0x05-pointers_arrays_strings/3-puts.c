#include "main.h"

/**
*_puts - prints a string to sdout, followed by a new line
*
*@str: the string to print
*
*Return: void
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}

	_putchar('\n')
}

#include "main.h"

/**
*print_rev - prints a string in reverse
*
*@s: string to print
*
*Return: 0
*/

void print_rev(char *s)
{
	int len = strlen(*s);
	const char p = str + len - 1

	while (p >= str)
	{
		_putchar(*p);
		p--;
	}
	_putchar('\n');
}

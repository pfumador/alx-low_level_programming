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
	int len = 0, i;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	for (i = len - 1; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}

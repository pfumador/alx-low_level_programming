#include "main.h"
/**
*times_table - prints the 9 times table
*starting with zero, 0.
*
*Return: Always 0 (Success)
*/
void times_table(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
		_putchar('x');
		_putchar('9');
		_putchar('=');
		_putchar(' ');
		_putchar((i * 9) + '0');
		_putchar('\n');
	}
}

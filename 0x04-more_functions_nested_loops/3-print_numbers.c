#include "main.h"

/**
*print_numbers - prints the numbers 0 t0 9
*
*Return: void
*/

void print_numbers(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		_putchar(number);
	}

	_putchar('\n');
}

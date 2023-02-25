#include "main.h"

/**
*print_numbers - function that prints the numbers
*followed by a new line
*
*Return: Always 0 (Success)
*/

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar("%d", i);

	_putchar("\n");
}

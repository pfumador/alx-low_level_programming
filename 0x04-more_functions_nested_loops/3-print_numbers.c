#include "main.h"

/**
*print_numbers - function that prints the numbers
*followed by a new line
*
*@n: numbers to print
*
*Return: Always 0 (Success)
*/

void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		_putchar("%d", n);

	_putchar("\n");
}

#include "main.h"

/**
*print_diagonal - draws a diagonal line in the terminal
*
*@n: number of \ characters to be printed
*
*Return: void
*/

void print_diagonal(int n)
{
	int diag_line;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (diag_line = 1; diag_line <= n; diag_line++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

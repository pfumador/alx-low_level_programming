#include "main.h"
/**
*print_sign - prints the sign of a number
*
*@n: the int to check
*
*Return: 1 if n is positive
*
*0 if n is zero
*
*-1 if n is negative
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}

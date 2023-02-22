#include "main.h"
/**
*print_last_digit - function that prints the last digit of a number
*
*@n: the int to check
*
*Return: the value of the last digit
*/
int print_last_digit(int n)
{
	/* let j represent the last_digit */
	int j;

	if (n < 0)
	{
		n = -n;
	}

	j = n % 10;
	
	if (j < 0)
	{
		j = -j;
	}
	_putchar(j + '0');

	return (j);
}

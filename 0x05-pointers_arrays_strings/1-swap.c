#include "main.h"

/**
*swap_int - function that swaps the value of two integers
*
*@x: first number
*@y: second number
*
*Return: Always 0
*/

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;

}

#include "main.h"

/**
*more_numbers - prints the numbers 0 t0 9
*
*Return: void
*/

void more_numbers(void)
{
	/* i = number of times to print 0 to 14 */
	 /* j = numbers from 0 to 14 */
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
			}
		}
		_putchar('\n');
	}
}

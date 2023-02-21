#include <stdio.h>

/**
*main - print all single digits numbers of base 10
*starting from '0'
*
*Return: Always 0 (Success)
*/

int main(void)
{
	int i;

	/*Prints all single digits numbers of base 10 */
	for (i = 0; i < 10; i++)
	{
	putchar(i + '0');
	}
	/*Prints a new line */
	putchar('\n');

	return (0);

}

#include "main.h"
/**
*print_alphabet_x10 - prints 10 times the alphabet in lowercase
*
*Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
	char aplhabet;
	int i;

	for (i = 1; i <= 9; i++)

	{
		for (alphabet = 'a'; alphabet <= 'z'; i++)

		{
			_putchar(alphabet);

		}
		_putchar('\n');
	}
}

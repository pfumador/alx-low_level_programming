#include <stdio.h>

/**
*main - prints the alphabets in lowercase followed by a new line
*
*Return: Always 0 (Success)
*/
int main(void)
{
	char letter;

	/*Print lowercase alphabet except q and e */
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
		letter++;

	}

	/*Print new line */
	putchar('\n');

	return (0);

}

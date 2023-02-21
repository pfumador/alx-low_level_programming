#include <stdio.h>

/**
*main - prints the alphabets in lowercase followed by a new line
*
*Return: Always 0 (Success)
*/
int main(void)
{
	char ch;

	while (ch <= 'z')

	/*Print lowercase alphabet except q and e */
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;

	}

	/*Print new line */
	putchar('\n');

	return (0);

}

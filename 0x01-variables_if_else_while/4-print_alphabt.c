#include <stdio.h>

/**
*main - prints the alphabets in lowercase followed by a new line
*
*Return: Always 0 (Success)
*/
int main(void)
{
	char ch;

	/*Print lowercase alphabet except q and e */
	for (ch = 'a'; ch <= 'z'; ch++)
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

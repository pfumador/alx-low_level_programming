#include "main.h"

/**
*isupper - checks for uppercase character
*
*Return: 1 if c is upper otherwise 0
*
*/

int _isupper(int c)
{
	char ch = 'A';
	
	if (c >= 'A' && c <= 'Z')
	{
		return 1;
	}
	return 0;
}

#include "main.h"
/**
*_isalpha - function that checks for an alphabetic character
*
*@c: is a char,lowercase or uppercase
*
*Return: 1, otherwise 0 if char is not alphabetic character
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

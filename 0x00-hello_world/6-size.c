#include <stdio.h>
/**
*main - entry point
*
*Description: 'a program that prints size of compilation computers'
*
*Return: Always 0 (Success)
*/

int main(void)
{
	printf(\n"Size of a char: %ld bytes(s)", sizeof(char)\n);
	printf(\n"Size of an int: %ld bytes(s)", sizeof(int)\n);
	printf(\n"Size of a long int: %ld bytes(s)", sizeof(long int)\n);
	printf(\n"Size of a long long int: %ld bytes(s)", sizeof(long long int)\n);
	printf(\n"Size of a float: %ld bytes(s)", sizeof(float)\n);
	return (0);
}

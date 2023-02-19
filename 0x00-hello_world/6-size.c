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
	printf("Size of a char: %lu bytes(s)", sizeof(char));
	printf("Size of an int: %lu bytes(s)", sizeof(int));
	printf("Size of a long int: %lu bytes(s)", sizeof(long int));
	printf("Size of a long long int: %lu bytes(s)", sizeof(long long int));
	printf("Size of a float: %lu bytes(s)", sizeof(float));
	return (0);
}

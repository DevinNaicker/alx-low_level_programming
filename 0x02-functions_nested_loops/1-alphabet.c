#include "main.h"

/**
 * main - function that prints the lower case alphabet and a new line
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}

	_putchar('\n');

	return (0);
}

#include "main.h"

/**
 * main - print_alphabet function - prints the lowercase alphabet followed by a new line
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
}

#include "main.h"

/**
 * main - function that prints the lower case alphabet and a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	print_alphabet();
	return (0);
}

/* print_alphabet - function that prints lowercase alphabet and adds a new line */

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

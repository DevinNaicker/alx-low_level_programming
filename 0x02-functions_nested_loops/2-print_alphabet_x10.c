#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10x followed by a new line
 */

void print_alphabet_x10(void)
{
	int n = 0;

	if (n < 10)
	{
		char a = 'a';

		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
	}
	n++;
}

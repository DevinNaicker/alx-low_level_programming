#include "main.h"

/**
 * main - check if character is alphabetic and print output
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c;

	c = _isalpha('H');
	_putchar(c + '0');
	c = _isalpha('o');
	_putchar(c + '0');
	c = _isalpha(';');
	_putchar(c + '0');
	_putchar('\n');
	return (0);
}

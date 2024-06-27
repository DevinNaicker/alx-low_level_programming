#include "main.h"

/**
 * main - checks for lowercase and returns 1 otherwise 0
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c;

	c = _islower('H');
	_putchar(c + '0');
	c = _islower('h');
	_putchar(c + '0');
	_putchar('\n');
	return (0);
}


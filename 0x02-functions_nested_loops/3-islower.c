#include "main.h"

/**
 * _islower - checks if a letter is lowercas
 * @c: the letter to be checked
 *
 * Return: 1 if lowercase. 0 otherwisee
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}

	_putchar('\n');
}

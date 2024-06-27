#include "main.h"

/**
 * _islowe - checks c for lowercase char and returns 1 if true, 0 if not true
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

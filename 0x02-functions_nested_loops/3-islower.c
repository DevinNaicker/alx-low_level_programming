#include "main.h"

/**
 * _islower function - checks c for lowercase character and returns 1 if true, else returns 0
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

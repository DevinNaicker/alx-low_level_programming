#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: the letter to be checked
 *
 * Return: 1 if alphabetic. 0 otherwise
 */

int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}

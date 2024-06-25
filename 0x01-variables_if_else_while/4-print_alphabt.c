#include<stdio.h>

/**
 * main - print aphabet in lower case except for q and e
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a != 'e' || a != 'q')
			putchar(a);
		a++;
	}

	putchar('\n');

	return (0);
}

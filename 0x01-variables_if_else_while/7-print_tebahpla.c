#include<stdio.h>

/**
 * main - print lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char z = 'z';

	while (z >= 'a')
	{
		putchar(z);
		z--;
	}
	putchar('\n');

	return (0);
}

#include<stdio.h>

/**
 * main - print numbers 1-9 using putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char n = 0;

	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}
	putchar('\n');

	return (0);
}

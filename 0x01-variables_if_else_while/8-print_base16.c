#include<stdio.h>

/**
 * main - print hexedecimal
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 0;
	char a = 'a';

	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}

	while (a <= 'f')
	{
		putchar(a);
		a++;
	}

	putchar('\n');

	return (0);
}

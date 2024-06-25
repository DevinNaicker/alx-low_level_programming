#include<stdio.h>

/**
 * main - Prints the alphabet in lower and higher case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a = 'a';
	char A = 'A';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}

	while (A <= 'Z')
	{
		putchar(A);
		A++;
	}

	putchar('/n');

	return (0);
}

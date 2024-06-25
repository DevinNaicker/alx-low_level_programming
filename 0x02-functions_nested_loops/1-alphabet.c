#include<stdio.h>
#include"main.h>

/**
 * main - print alphabet in lower case
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');

	return (0);
}


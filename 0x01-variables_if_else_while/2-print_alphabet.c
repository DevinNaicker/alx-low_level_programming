#include<stdio.h>

/**
 * main - code prints the alphabet in lower and higher case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a = 'a';
	while (a != "z")
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	
	return (0);
}

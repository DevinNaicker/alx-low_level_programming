#include<stdio.h>

/**
 * main - numbers in ascending order with comma and space
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(n + '0');
		if (n < 9)
		{
			putchar(',');
			if (n < 9)
			{
				putchar(' ');
			}
		}
		n++;
	}
	return (0);
}

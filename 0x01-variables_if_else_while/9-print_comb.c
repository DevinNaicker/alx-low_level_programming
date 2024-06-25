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
		putchar(n);
		if (n < 10)
		{
			putchar(',');
			if (n < 10)
			{
				putchar(' ');
			}
		}
		n++;
	}
	Return (0);
}

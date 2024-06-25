#include<studio.h>

/**
 * main - code prints the alphabet in lower and higher case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a = "a"
	char A = "A"
	while (a != "z")
	{
		putchar("%c", a);
		a++;
	}
	while (A != "Z")
	{
		putchar("%c", A);
		a++;
	}
	return (0);
}

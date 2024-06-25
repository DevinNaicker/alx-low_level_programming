#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/**
 * head - determine if the last digit is greater or less than 5
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
/* interger for last digit named "l" */
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
/* code to determine last digit */
	l = n % 10;
	if (l > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	}
	else if (l == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, l);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	}
	return (0);
}

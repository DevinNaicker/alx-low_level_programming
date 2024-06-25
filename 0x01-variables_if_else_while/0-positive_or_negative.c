#include <stdlib.h>
#include <time.h>
/* Positive or negative */

#include<stdio.h>

/* determining if the number is positive, negative or 0 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n>0)
	{
		printf("%lu is positive\n", n);
	}

	else if (n<0)
	{
		printf("%lu is negative\n", n);
	}

	else (n==0)
	{
		print("%lu is zero\n", n);
	

	return (0);
}

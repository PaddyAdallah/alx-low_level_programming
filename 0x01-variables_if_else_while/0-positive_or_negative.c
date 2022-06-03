#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	/*Declare an integer n and check if it is positive, negative, or zero */
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n == 0)
	{
		printf("%d is zero\n", n);
	} else
		printf("%d is negative\n", n);
	return (0);
}

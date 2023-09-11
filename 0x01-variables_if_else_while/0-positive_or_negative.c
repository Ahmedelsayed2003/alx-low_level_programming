#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * description : check if number n is positive or negative
 *
 *return : always 0 <success>
*/

int main(void)
{
	int n;

	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%i is positive\n" .n);
	else if (n == 0)
		printf("%i is zero\n" .n);
	else
		printf("%I is negative\n" .n);
	return (0);
}

#include<stdio.h>

/**
 * main - entry point
 *
 * description: print numbers from zero to nine using putchar
 *		while using n variables.
 *
 * return: 0 (success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		/*convert digit to ascii representation*/
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');

	return (0);
}

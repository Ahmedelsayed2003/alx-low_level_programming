#include<stdio.h>

/**
 * main - entry point
 *
 * description: print  a-z in  inverse
 *
 * return: 0 (success)
*/

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{

		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}

#include <stdio.h>

/**
 * main - entry point 
 *
 * description: print the alphabet in low case and high case
 *
 *
 * return: 0 (success)
*/

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/*print a -a*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	/*print  A -Z*/
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}

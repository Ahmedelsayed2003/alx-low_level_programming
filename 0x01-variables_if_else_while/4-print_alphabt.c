#include<stdio.h>

/**
 * main - entry point
 *
 * description: print all alphabet letters except  q and e
 *
 * return: 0 (success)
*/

int main(void)
{
	char = 'a';
	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			ch++;
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);

}

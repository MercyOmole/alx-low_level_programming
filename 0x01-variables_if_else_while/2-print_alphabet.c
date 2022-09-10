#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all alphabet letters
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= '2')
	{
		putchar(ch);
		++ch;
	}
	putchar('\n');

	return (0);
}

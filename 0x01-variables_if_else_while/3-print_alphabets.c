#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: print in alphabets in lowercase then in uppercase
 *
 * return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/*printa a -z*/
	while (ch <= 'z')
	{
		putchar(ch);
		++ch;
	}

	/*print A - Z*/
	while (CH <= 'Z')
	{
		putchar(CH);
		++CH;
	}

	putchar('\n');
	return (0);
}

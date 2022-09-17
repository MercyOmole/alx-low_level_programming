#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 - 14
 * using _putchar only three times
 *
 * Return: Always 0
 */

void more_numbers(void)
{
	int n1, n2;

	for (n1 = 0; n1 < 10; n1++)
	{
		for (n2 = 0; n2 <= 14; n2++)
		{
			if (n2 > 9)
			{
				putchar((n2 / 100) + '0');
			}
			putchar((n2 % 10) + '0');
		}
		putchar(10);
	}
}

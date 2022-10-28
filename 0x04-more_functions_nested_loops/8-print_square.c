#include <stdio.h>
#include "main.h"

/**
 * print_square - print a square
 * @size: parameteiiiiir
 * Return: returns nothing
 */

void print_square(int size)
{
	int row, column;

	if (size > 0)
	{
		for (row = 1; row <= size; ++row)
		{
			for (column = 1; column <= size; ++column)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

#include <stdio.h>
#include "main.h"

/**
 * print_square - print a square
 * @size: parameter
 * Return: returns nothing
 */

void print_square(int size)
{
	int row, column;
	for (row = 1; row <= size; ++row)
	{
		for (column = 1; column <= size; ++column)
			_putchar('8');
		_putchar('\n');
	}
}

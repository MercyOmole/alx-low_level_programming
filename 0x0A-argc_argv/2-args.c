#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments passed into the program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always (0) success
 */

int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		print("%s\n", argv[n]);
	}
	return (0)
}

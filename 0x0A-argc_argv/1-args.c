#include <stdio.h>

/**
 * main - prints the number of arguments passed into the program
 * @args: This is the argument count
 * @argv: This is the argument bvector
 * Return: This return to 0
 */
int main(int args, char *argv[])
{
	printf("%d\n", args - 1);
	(void)argv;
	return (0);
}

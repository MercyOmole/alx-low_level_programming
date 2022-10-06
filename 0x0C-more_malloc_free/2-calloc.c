#include "mmain.h"

/**
 * *_memset - fills memory with a constant byte.
 * @s: pointer to put the constant
 * @b: constant
 * @n: max bytes to use
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;
	
	while (n--)
		*s++ = b;
	
	return (ptr);
}

/**
 * *_calloc - allocates memory of an array using malloc.
 * @nmemb: number of elements in array.
 * @size: size of elements of array.
 *
 * Return: NULL is size or nmemb == 0.
 * NULL if malloc fails.
 * Pointer to memory allocated if successful.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	
	if (nmemb == 0 || size == 0)
		return (NULL);
	
	p = malloc(nmemb * size);
	
	if (p == 0)
	{
		return (NULL);
	}
	_memset(p, 0, nmemb * size);
	
	return (p);
}

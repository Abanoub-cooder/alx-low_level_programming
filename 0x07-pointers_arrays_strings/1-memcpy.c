#include "main.h"
/**
 * _memcpy  - a function that copies memory area
 * @dest: memory where is sorted
 * @src: memory where is copied
 * @n: number of bytes
 *
 * Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int v = 0;
	int h = n;

	for (; v < h ; v++)
	{
		dest[v] = src[v];
		n--;
	}
	return (dest);
}

#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0' ; haystack++)
	{
		char *h = haystack;
		char *x = needle;

		while (*h == *x && *x != '\0')
		{
			h++;
			x++;
		}
		if (*x == '\0')
			return (haystack);
	}
	return (0);
}

#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int m1 = 0;
	int m2 = 0;
	int x;

	for (x = 0 ; x < size ; x++)
	{
		m1 = m1 + a[x * size + x];
	}
	for (x = size - 1 ; x >= 0 ; x--)
	{
		m2 += a[x * size + (size - x - 1)];
	}
	printf("%d,%d\n", m1, m2);
}

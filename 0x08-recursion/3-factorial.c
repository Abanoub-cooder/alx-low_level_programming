#include "main.h"
/**
 * factorial - returnes the factorial of a number
 * @n: number to return thr factoril from
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

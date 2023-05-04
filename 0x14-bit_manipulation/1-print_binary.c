#include "main.h"
/**
 * print_binary - it's show and prints the binary equivalent of a decimal n
 * @n: it's help to print in binary
 */
void print_binary(unsigned long int n)
{
	int v, cont = 0;
	unsigned long int cur;
	/*we will use for here */
	for (v = 63; v >= 0; v--)
	{
		cur = n >> v;

		if (cur & 1)
		{
			_putchar('1');
			cont++;
		}
		else if (cont)
			_putchar('0');
	}
	if (!cont)
		_putchar('0');
	/*without return*/
}

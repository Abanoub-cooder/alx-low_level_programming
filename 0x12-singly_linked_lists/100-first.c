#include <stdio.h>
/**
 * timefun - that prints a few sentence before the main
 * function is executed
 */
void timefun(void) __attribute__ ((constructor));

/**
 * timefun - it's impemintation of my first fun before the main
 */
void timefun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

#include "main.h"
/**
 * swap_int - swap the values of two integers
 * @a: int to swap
 * @b: int to be swap
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}


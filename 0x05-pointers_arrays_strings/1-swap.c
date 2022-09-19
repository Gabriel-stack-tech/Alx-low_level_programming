#include "main.h"

/**
 * swap_int from one integer to another
 * Return:always 0.
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

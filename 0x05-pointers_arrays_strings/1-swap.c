#include "main.h"

/**
 * swap_in - swaps two integers
 * @a: integer to swap
 * @b: integer to swap
 * Return: 0 as success
*/
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}


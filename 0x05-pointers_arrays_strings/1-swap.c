#include "main.h"

/**
 * swap_in - swaps two integers
 * @n: integer
 * Return: 0 as success
*/
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}


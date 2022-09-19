#include "main.h"
#include<stdio.h>

/**
 * main - reset to 98
 *
 * Return: 0 as success
*/
void reset_to_98(int *n)
{
	int n = 98;
	int* ptr = &n;

	printf("%p\n", ptr);

	return 0;
}

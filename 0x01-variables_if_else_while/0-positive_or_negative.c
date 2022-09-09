#include <stdio.h>

#include <stdlib.h>

#include <time.h>
/**
 * main - main block
 * Description: Get a random number and print the number
 * positive,nagetive or zero
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0) {
		printf("is positive%d\n", n);
	}
	else if (n==0) {
		printf("is zero%d\n", n);
	}
	else {
		printf("is negative%d\n", n);
	return (0);
}

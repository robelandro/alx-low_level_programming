#include<stdlib.h>
#include<time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, guss;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	guss = n % 10;

	if (guss > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, guss);
	else if (guss == 0)
		printf("Last digit of %i is %i and is 0\n", n, guss);
	else if (guss < 6)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, guss);

	return (0);
}

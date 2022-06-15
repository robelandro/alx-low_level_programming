#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - random password generator for 101-crackme
 *
 * Return: always 0
 */
int main(void)
{
char a[100];
	int p, n, i;

	n = 0;
	i = 0;
	srand(time(NULL));
	while (n < 2645)
	{
		p = rand() % 122;
		if (p > 32)
		{
			a[i++] = p;
			n += p;
		}
	}
	a[i++] = (2772 - n);
	a[i] = '\0';
	printf("%s", a);

	return (0);
}

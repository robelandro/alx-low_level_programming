#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an amount.
 * of money.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int i, n, s, ch = 0;
	int c[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	s = atoi(argv[1]);
	if (s < 1)
		printf("0\n");
	else
	{
		for (i = 0; i < 5 && s; i++)
		{
			n = s / c[i];
			ch += n;
			s -= n * c[i];
		}
		printf("%d\n", ch);
	}
	return (0);
}

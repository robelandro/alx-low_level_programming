#include "main.h"

/**
 * _strncat - concatenates two strings
 * @first:char first
 * @second: char second
 * @n:length int
 * Return:char
 */
char *_strncat(char *first, char *second, int n)
{
	int i, j;

	for (i = 0; first[i] != '\0'; i++)
	{
		continue;
	}
	for (j = 0; second[j] != '\0' && j < n; j++)
	{
		first[i + j] = second[j];
	}
	first[i + j] = '\0';
	return (first);
}

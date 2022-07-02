#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings.
 *
 * @s1 : first string
 * @s2 : second string
 * @n : number of byte
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	int i, k, sa1, sa2;

	for (i = 0; s1[i] != '\0'; i++)
	;
	for (k = 0; s2[k] != '\0'; k++)
	;
	if (n >= k)
		n = k;
	result = malloc(n + i);
	for (sa1 = 0; sa1 < i; sa1++)
		result[sa1] = s1[sa1];
	if (result == NULL)
		return (NULL);
	for (sa2 = 0; sa2 < n; sa2++)
		result[sa1] = s2[sa2];
		sa1++;
	return (result);
}

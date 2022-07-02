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
	unsigned int sa1, sa2, i, k;
	
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (sa1 = 0; s1[sa1] != '\0'; sa1++)
	;
	for (sa2 = 0; s2[sa2] != '\0'; sa2++)
	;
	if (n >= sa2)
		n = sa2;
	result = malloc(sizeof(char) * (sa1 + n + 1));
	if (result == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		result[i] = s1[i];
	for (k = sa1; k < sa1 + n; k++)
		result[k] = s2[k - sa1];
	result[k] = '\0';
	return (result);
}

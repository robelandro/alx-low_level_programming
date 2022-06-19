#include "main.h"

/**
 * _strcat - concat 2 string
 * @first:char
 * @second:char
 * Return:char
 */
char *_strcat(char *first, char *second)
{
	char *s = first;

	while (*first != '\0')
	{
		first++;
	}

	while (*second != '\0')
	{
		*first = *second;
		first++;
		second++;
	}
	*first = '\0';
	return (s);
}

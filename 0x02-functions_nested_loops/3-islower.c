#include "main.h"

/**
 * _islower - check lower case.
 * @c:  charhacter
 * Return: 1 if c is lowercase otherwise 0.
 */
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

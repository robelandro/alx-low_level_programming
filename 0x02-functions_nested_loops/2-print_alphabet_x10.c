#include "main.h"

/**
 * print_alphabet_x10 - check the code for Holberton School students.
 * Description: Prints the alphabet with _putchar
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i < 10)
	{
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
		_putchar('\n');
	}

}

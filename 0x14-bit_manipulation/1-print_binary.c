#include "main.h"

/**
 * print_binary - print a binary number
 * @n: the number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}
	if (n % 2 == 0)
	{
		print_binary(n / 2);
		_putchar('0');
	}
	else
	{
		print_binary(n / 2);
		_putchar('1');
	}
}

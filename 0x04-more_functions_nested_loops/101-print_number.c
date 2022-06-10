#include "main.h"
/**
 * print_number -print number putchar
 * @n:integer
 * Return: void
 */
void print_number(int n)
{
	unsigned int pn = n;

	if (n < 0)
	{
		_putchar('-');
		pn = -pn;
	}
	if ((pn / 10) > 0)
		print_number(pn / 10);

	_putchar(pn % 10 + '0');
}

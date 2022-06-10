#include "main.h"

/**
 * print_triangle - display a triangele
 * @size:integer
 * Return: void
 */

void print_triangle(int size)
{
	int i, k, o;

		if (size > 0)
		{

			for (i = 1; i <= size; i++)
			{
				for (k = 0; k <= (size - i - 1); k++)
				{
				_putchar(' ');
				}
			for (o = 0; o <= i - 1; o++)
			{
			_putchar('#');
			}
		_putchar('\n');
			}
	}
	else
	{
		_putchar('\n');
	}
}

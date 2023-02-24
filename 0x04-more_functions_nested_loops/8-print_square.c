#include "main.h"
/**
 * print_square - prints a square of dimension arg*arg
 *
 * @size: arg
 *
 * Return: nada
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; j++)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

#include "main.h"

/**
 * times_table - 9x9
 *
 * Return: nada
 *
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; i++)
		{
			_putchar((j * i) + '0');
			_putchar(',');
			_putchar(' ');
		}

		_putchar('\n');
	}
}

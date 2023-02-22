#include "main.h"

/**
 * print_sign - checks whether the arg is -, 0 or +
 *
 * @n: arg
 *
 * Return: 1 for positive 0 for zero and - for negative
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

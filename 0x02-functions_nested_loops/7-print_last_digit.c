#include "main.h"

/**
 * print_last_digit - RTFN
 *
 * @n: arg
 *
 * Return: last digit
 *
 */
int print_last_digit(int n)
{
	int c = n % 10;

	if (c < 0)
		c = c * -1;

	_putchar('0' + c);
	return (c);
}

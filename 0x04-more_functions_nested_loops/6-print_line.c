/**
 * print_line - prints a line of length arg using '_'
 *
 * @n: length
 *
 * Return: not
 *
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}

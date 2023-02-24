#inlude "main.h"
/**
 * print_triangle - prints triangle of size arg using"#"
 * @size: arg
 * Return: nada
 */
void print_triangle(int size)
{
	int i, j, k;

	for (i = 1; i <= size; i++)
	{
		for (j = size - i; j > 0; j--)
			_putchar(' ');
		for (k = i; k > 0; k++)
			_putchar('#');
		_putchar('\n');
	}
}

/**
 * _isupper - checks if arg is uppercase or not
 * @c: arg
 *
 * Return: 1 for uppercase 0 otherwise
 *
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	return (0);
}

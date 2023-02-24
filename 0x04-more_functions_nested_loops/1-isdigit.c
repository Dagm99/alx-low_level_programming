/**
 * _isdigit - checks if arg is a digit 0-9
 *
 * @c: arg
 *
 * Return: 1 for yes 0 otherwise
 *
 */
int _isdigit(int c)
{
	if (c < 58 && c > 47)
		return (1);

	return (0);
}

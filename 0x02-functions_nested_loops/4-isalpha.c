/**
 * _isalpha - checks if arg is an alphabetical char
 *
 * @c: arg
 *
 * Return: 1 for yes 0 for no
 *
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

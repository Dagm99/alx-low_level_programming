/**
 * _islower - checks if arg is lower case or not
 *
 * @c:  arg
 *
 * Return: 1 if lowercase 0 otherwise
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

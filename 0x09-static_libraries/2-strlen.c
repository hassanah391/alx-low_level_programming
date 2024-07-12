/**
 * _strlen -  returns the length of a string.
 * @s: A pointer that point to a string.
 *
 *
 * Return: Returns an int (the length of a string)
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

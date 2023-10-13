/**
 * _strchr - locates a character in a string
 *
 * @s: a string
 *
 * @c: the first occurrence of the character is string s
 *
 * Description: Write a function that locates a character in a string
 *
 * Return: a pointer to the first occurrence of the character c
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (c == s[i])
		{
			return (s + i);
		}
	}
	if (c == '\0')
	{
		return (s + i);
	}
	return ('\0');
}
/**
 * _isdigit - checks for a digit
 *
 * @c: the number to be checked
 *
 * Description: Write a function that checks for a digit (0 through 9)
 *
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 * _puts - prints a string
 *
 * @str: string to be print
 *
 * Description: Write a function that prints a string
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
/**
 * _strcpy - copies the string
 *
 * @dest: a string in which to store the value
 *
 * @src: a string to be copy
 *
 * Description: Write a function that copies the string
 *
 * Return: value
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * _strcat - concatenates two strings
 *
 * @dest: a string in which to store the value
 *
 * @src: a string to be append
 *
 * Description: Write a function that concatenates two strings
 *
 * Return: result
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}

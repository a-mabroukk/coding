/**
 * _strcmp - compares two strings
 *
 * @s1: first string to be compare
 *
 * @s2: second string to be compare
 *
 * Description: Write a function that compares two strings
 *
 * Return: result
 */

int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/**
 * _strlen - a function that returns the length of a string
 *
 * @s: a string whose lenght is to be printed
 *
 * Description: Write a function that returns the length of a string
 *
 * Return: Length
 */

int _strlen(char *s)
{
	int L;

	for (L = 0; *s != '\0'; s++)
		++L;

	return (L);
}
/**
 * _memset - fills memory with a constant byte
 *
 * @s: a pointer
 *
 * @n: the first bytes of the memory area pointed to by s
 *
 * @b: the constant byte
 *
 * Description: Write a function that fills memory with a constant byte
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	 unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

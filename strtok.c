#include "main.h"

/**
*_str_spilt - splits a string and returns an array of each word of the string
*@str: a pointer to the string to be tokenized
*@deli: a string containing all delimiters
*Return: value
*/
char **_str_spilt(char *str, const char *deli)
{
char *str_cp = NULL;
char **str_arr;
char *p = NULL;
int c = 0, counter = 0;
if (str == NULL || deli == NULL)
{
return (NULL);
}
str_cp = strdup(str);
p = strtok(str_cp, " ");
while (p != NULL)
{
if (p == NULL)
{
p = strtok(NULL, " ");
}
counter++;
p = strtok(NULL, " ");
}
str_arr = (char **)malloc(sizeof(char *) * (counter + 1));
if (str_arr == NULL)
{
free(str_cp);
return (NULL);
}
p = strtok(str, deli);
for (c = 0; p != NULL; c++)
{
str_arr[c] = (char *)malloc(strlen(p) + 1);
strcpy(str_arr[c], p);
p = strtok(NULL, " ");
}
str_arr[c] = NULL;
free(str_cp);
return (str_arr);
}

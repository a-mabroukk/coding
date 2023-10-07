#include "main.h"

/**
*main - prints all the arguments
*@av: is a NULL terminated array of strings
*@ac: is the number of items in av
*Return: value
*/
int main(int ac, char **av)
{
int arg;
(void)ac;

for (arg = 1; av[arg] != NULL; arg++)
{
printf("%s\n", av[arg]);
}
return (0);
}

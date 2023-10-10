#include "main.h"

/**
*main - print the environment using the global variable
*Return: 0
*/
extern char **environ;

int main(void)
{
int i;
for (i = 0; environ[i] != NULL; i++)
{
printf("%s\n", environ[i]);
}
return (0);
}

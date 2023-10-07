#include "main.h"

/**
*main - prints "$ ", wait for the user to enter a command,
*prints it on the next line
*Return: value
*/
int main(void)
{
char *prompt = "$ ";
char *buffer;
size_t n = 0;

while (1)
{
printf("%s", prompt);
getline(&buffer, &n, stdin);
if (buffer == NULL)
{
perror("getline()");
exit(1);
}
printf("%s", buffer);
}
free(buffer);
}

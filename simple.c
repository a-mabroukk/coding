#include "main.h"

/**
*main - Write a UNIX command line interpreter
*@argc: number of command line arguments
*@argv: an array of character pointers listing all arguments
*Return: 0
*/
int main(int argc, char *argv[])
{
char *prompt = "$ ";
char *buffer, *str;
const char *deli = NULL;
char *str_cp = NULL;
char **str_arr;
char *p = NULL;
int c = 0, counter = 0;
size_t n = 0;
pid_t child_pid; 
int status;

while (1)
{
_puts(prompt);
getline(&buffer, &n, stdin);
if (buffer == NULL)
{
perror("getline()");
exit(1);
}
_puts(buffer);
if (str == NULL || deli == NULL)
{
return (-1);
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
}
p = strtok(str, deli);
for (c = 0; p != NULL; c++)
{
str_arr[c] = (char *)malloc(_strlen(p) + 1);
_strcpy(str_arr[c], p);
p = strtok(NULL, " ");
}
str_arr[c] = NULL;
free(str_cp);
child_pid = fork();
if (child_pid == -1)
{
perror("Error:");
free(buffer);
free(str_arr);
return (1);
}
if (child_pid == 0)
{
execve(str_arr[0], str_arr, NULL);
}
wait(&status);
free(str_arr);
}
free(buffer);
}

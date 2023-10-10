#include "main.h"

/**
*main - prints the address of env (the third parameter of the main function)
*Return: 0
*/
extern char **environ;
int main(int ac, char **av, char **env)
{
printf("the address of env :%p\n", env);
printf("the address of environ :%p\n", environ);
return (0);
}

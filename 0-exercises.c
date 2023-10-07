#include "main.h"

/**
*_print_process - prints the PID of the parent process
*@v: a varaible that store the value of function
*Return: value
*/
int _print_process(int v)
{
int p;
v = getpid();
if (v == 0)
{
printf("%d\n", v);
}
else if ((p = getppid()) > 0)
{
printf("%d\n", p);
}
return (0);
}

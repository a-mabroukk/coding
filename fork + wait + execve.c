#include "main.h"

/**
*main - executes the command in 5 different child processes
*
*Return: Always 0
*/
int main(void)
{
pid_t my_pid;
pid_t child_pid;
int i, int status;
char *arg[] = {"ls", "-l", "/tmp", NULL};
for (i <= 4 && (child_pid != -1); i++)
{
child_pid = fork();
if (child_pid == -1)
{
perror("Error:");
return (1);
}
wait(&status);
printf("Oh, it's all better now\n");
}
if (child_pid == 0)
{
my_pid = getpid();
printf("(%u) Nooooooooo!\n", getpid(), getppid());
}
else
{
printf("(%u) %u, I am your father\n", my_pid, child_pid);
}
printf("Before execve\n");
if (execve(argv[0], argv, NULL) == -1)
{
perror("Error:");
}
printf("After execve\n");
return (0);
}

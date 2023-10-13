#include "main.h"

/**
 * main - Handle command lines with arguments
 *
 * @argc: number of command line arguments
 * @argv: an array of character pointers listing all arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
    int i;
    
    write(1, argv[0], strlen(argv[0]));
    write(1, "\n", 1);

    if (argc == 1)
    {
        return (-1);
    }
    
    if (argc >= 2)
    {
        char argCountStr[32]; // for converting argc to string
        int argCountLen = snprintf(argCountStr, 32, "%d", argc);
        
        write(1, argCountStr, argCountLen);
        write(1, "\n", 1);
        
        for (i = 0; i < argc; i++)
        {
            write(1, argv[i], strlen(argv[i]));
            write(1, "\n", 1);
        }
    }

    return (0);
}

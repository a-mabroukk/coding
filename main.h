#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/wait.h>
int _putchar(char c);
int _print_process(int v);
char **_str_spilt(char *str, const char *deli);
char *_strcpy(char *dest, char *src);
void _puts(char *str);
int _strlen(char *s);
#endif

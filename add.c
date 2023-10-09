#include "main.h"

/**
*_str_spilt - splits a string and returns an array of each word of the string
*@str: a pointer to the string to be tokenized
*@deli: a string containing all delimiters
*Return: value
*/
char **_str_split(char *str, const char *deli) {
    if (str == NULL || deli == NULL) {
        return NULL;
    }
    
    // Count the number of tokens
    char *str_cp = strdup(str);
    char *token = strtok(str_cp, deli);
    int token_count = 0;
    while (token != NULL) {
        token_count++;
        token = strtok(NULL, deli);
    }
    
    // Allocate memory for the array of pointers
    char **str_arr = (char **)malloc((token_count + 1) * sizeof(char *));
    if (str_arr == NULL) {
        free(str_cp);
        return NULL;
    }
    
    // Tokenize and copy tokens to the array
    char *p = strtok(str, deli);
    int c = 0;
    while (p != NULL) {
        str_arr[c] = (char *)malloc(strlen(p) + 1);
        strcpy(str_arr[c], p);
        c++;
        p = strtok(NULL, deli);
    }
    str_arr[c] = NULL; // Null-terminate the array
    
    // Free the duplicated string
    free(str_cp);
    
    return str_arr;
}

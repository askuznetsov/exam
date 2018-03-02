/*  Assignment name  : ft_strdup
    Expected files   : ft_strdup.c
    Allowed functions: malloc
--------------------------------------------------------------------------------

Reproduce the behavior of the function strdup (man strdup).

Your function must be declared as follows:

char    *ft_strdup(char *src);
-------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>

char    *ft_strdup(char *src)
{
    int     count;
    int     length;
    char    *str;

    if (!src)
        return (NULL);
    count = 0;
    length = 0;
    while (src[length])
        length++;
    str = (char *)malloc(sizeof(char) * length + 1);
    while (src[count])
    {
        str[count] = src[count];
        count++;
    }
    str[count] = '\0';
    return (str);
}

int     main(void)
{
    char *string;
    char *str;

    string = "hello";
    str = ft_strdup(string);
    printf("The result of copy is: %s\n", str);
    return (0);
}

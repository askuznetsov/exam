/*  Assignment name  : ft_strrev
    Expected files   : ft_strrev.c
    Allowed functions:
--------------------------------------------------------------------------------

Write a function that reverses (in-place) a string.

It must return its parameter.

Your function must be declared as follows:

char    *ft_strrev(char *str);
-----------------------------------------------------*/

#include <stdio.h>

char    *ft_strrev(char *str)
{
    int     i;
    int     length;
    char    temp;

    i = 0;
    length = 0;
    while (str[length])
        length++;
    length--;
    while (i < length)
    {
        temp = str[i];
        str[i] = str[length];
        str[length] = temp;
        i++;
        length--;
    }
    return (str);
}

int     main(int argc, char **argv)
{
    if (argc == 2)
        printf("The reverse string is : %s\n", ft_strrev(argv[1]));
    return (0);
}

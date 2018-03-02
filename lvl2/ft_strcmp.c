/*  Assignment name  : ft_strcmp
    Expected files   : ft_strcmp.c
    Allowed functions:
--------------------------------------------------------------------------------

Reproduce the behavior of the function strcmp (man strcmp).

Your function must be declared as follows:

int    ft_strcmp(char *s1, char *s2);
--------------------------------------------------------------*/
#include <stdio.h>

int     ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] || s2[i])
    {
        if ((unsigned char)s1[i] == (unsigned char)s2[i])
            i++;
        else
            return ((unsigned char)s1[i] - (unsigned char)s2[i]);
    }
    return (0);
}

int     main(void)
{
    char *string;
    char *str;

    string = "Hello1";
    str = "Hello2";
    printf("The result is: %d\n", ft_strcmp(string, str));
    return (0);
}

/*  Assignment name  : ft_atoi
    Expected files   : ft_atoi.c
    Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str to an integer (type int)
and returns it.

It works much like the standard atoi(const char *str) function, see the man.

Your function must be declared as follows:

int	ft_atoi(const char *str);
----------------------------------------------------------------------*/

int     ft_is_delimeter(char temp)
{
    if (temp == ' ' || temp == '\n' || temp == '\t' ||
        temp == '\v' || temp == '\r' || temp == '\f')
        return (1);
    return (0);
}

int     ft_isdigit(int c)
{
    if (c >= 48 && c <= 57)
        return (1);
    else
        return (0);
}

int     ft_atoi(cosnt char *str)
{
    unsigned long int   number;
    int                 i;
    int                 minus;

    i = 0;
    minus = 1;
    number = 0;
    while (ft_is_delimeter(str[i]))
        i++;
    if (str[i] == '-')
        minus = -1;
    if (str[i] == '-' || str[i] == '+')
        i++;
    while (str[i] && ft_isdigit(str[i]))
    {
        if ((number > 922337203685477580 ||
            (number == 922337203685477580 &&
            (str[i] - '0') > 7)) && minus == -1)
            return (-1);
        else if ((number > 922337203685477580 ||
            (number == 922337203685477580 &&
            (str[i] - '0') > 8)) && minus == -1)
            return (0);
        number = (number * 10) + (str[i++] - '0');
    }
    return (number * minus);
}

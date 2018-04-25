/*  Assignment name  : add_prime_sum
    Expected files   : add_prime_sum.c
    Allowed functions: write, exit
--------------------------------------------------------------------------------

Write a program that takes a positive integer as argument and displays the sum
of all prime numbers inferior or equal to it followed by a newline.

If the number of arguments is not 1, or the argument is not a positive number,
just display 0 followed by a newline.

Yes, the examples are right.

Examples:

$>./add_prime_sum 5
10
$>./add_prime_sum 7 | cat -e
17$
$>./add_prime_sum | cat -e
0$
$>
------------------------------------------------------------------------------*/

#include <unistd.h>

void    ft_putstr(char *str);

void    ft_itoa(int n)
{
    int temp;
    int length;

    temp = n;
    length = 2;
    while (temp /= 10)
        length++;
    char str[length];

    str[--length] = '\0';
    while (length--)
    {
        str[length] = n % 10 + '0';
        n = n / 10;
    }
    ft_putstr(str);
}

int     ft_is_delimeter(char temp)
{
    if (temp == ' ' || temp == '\t' || temp == '\n' ||
        temp == '\v' || temp == '\f' || temp == '\r')
        return (1);
    return (0);
}

int     ft_isdigit(char temp)
{
    if (temp >= 48 && temp <= 57)
        return (1);
    return (0);
}

int     ft_atoi(char *str)
{
    unsigned long int       number;
    int                     i;
    int                     minus;

    i = 0;
    number = 0;
    minus = 1;
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
            (str[i] - '0') > 7)) && minus == 1)
            return (-1);
        else if ((number > 922337203685477580 ||
                (number == 922337203685477580 &&
                (str[i] - '0') > 8)) && minus == -1)
                return (0);
        number = (number * 10) + (str[i++] - '0');
    }
    return (number*minus);
}

void    ft_putchar(char temp)
{
    write (1, &temp, 1);
}

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
}

int     is_prime(int c)
{
    if (c == 2)
        return (0);
    int i;

    i = 2;
    while (i < c)
    {
        if ((c % i) == 0)
            return (1);
        i++;
    }
    return (0);
}

int     sum(int numb)
{
    int i;
    int sum;

    sum = 0;
    i = 2;
    while (i <= numb)
    {
        if (is_prime(i) == 0)
            sum += i;
        i++;
    }
    return (sum);
}

int     main(int argc, char **argv)
{
    if (argc != 2 || ft_atoi(argv[1]) < 0)
    {
        ft_putstr("0\n");
    }
    ft_itoa(sum(ft_atoi(argv[1])));
    return (0);
}

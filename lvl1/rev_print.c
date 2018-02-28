/*  Assignment name  : rev_print
    Expected files   : rev_print.c
    Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string, and displays the string in reverse
followed by a newline.

If the number of parameters is not 1, the program displays a newline.

Examples:

$> ./rev_print "zaz" | cat -e
zaz$
$> ./rev_print "dub0 a POIL" | cat -e
LIOP a 0bud$
$> ./rev_print | cat -e
$
-------------------------------------------------------------------------*/

#include <unistd.h>

void ft_putchar(char temp) {
    write(1, &temp, 1);
}

int main(int argc, char **argv)
{
    int i;

    i = 0;
    if (argc != 2)
    {
        ft_putchar('\n');
        return (0);
    }
    while (argv[1][i])
        i++;
    i--;
    while (i >= 0)
    {
        ft_putchar(argv[1][i]);
        i--;
    }
    ft_putchar('\n');
    return (0);
}

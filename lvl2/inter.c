/*  Assignment name  : inter
    Expected files   : inter.c
    Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in both strings, in the order they appear in the first
one.

The display will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Examples:

$>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
padinto$
$>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6ewg4$
$>./inter "rien" "cette phrase ne cache rien" | cat -e
rien$
$>./inter | cat -e
$
---------------------------------------------------------------------*/

#include <unistd.h>

void    ft_putchar(char temp) {
    write (1, &temp, 1);
}

int     is_present(char *str, int count)
{
    int i;

    i = 0;
    while (i < count)
    {
        if (str[i] == str[count])
            return (1);
        i++;
    }
    return (0);
}

int     main(int argc, char **argv)
{
    int i;
    int j;

    j = 0;
    i = 0;
    if (argc != 3)
    {
        ft_putchar('\n');
        return (0);
    }
    while (argv[1][i])
    {
        if (is_present(argv[1], i) == 0)
        {
            while (argv[2][j])
            {
                if (argv[1][i] == argv[2][j])
                {
                    ft_putchar(argv[1][i]);
                    break;
                }
                j++;
            }
            j = 0;
        }
        i++;
    }
    ft_putchar('\n');
    return (0);
}

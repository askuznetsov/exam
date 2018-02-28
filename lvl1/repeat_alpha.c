/*  Assignment name  : repeat_alpha
    Expected files   : repeat_alpha.c
    Allowed functions: write
--------------------------------------------------------------------------------

Write a program called repeat_alpha that takes a string and display it
repeating each alphabetical character as many times as its alphabetical index,
followed by a newline.

'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

Case remains unchanged.

If the number of arguments is not 1, just display a newline.

Examples:

$>./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha "abacadaba 42!" | cat -e
abbacccaddddabba 42!$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
$
$>
-----------------------------------------------------------------------------*/
#define upper 64
#define low 96
#include <unistd.h>

void ft_putchar(char temp) {
    write(1, &temp, 1);
}

void repeat_letter(char let) {
    int count;

    if (let >= 'A' && let <= 'Z')
    {
        count = let - upper;
        while (count > 0)
        {
            ft_putchar(let);
            count--;
        }
    }
    else if (let >= 'a' && let <= 'z')
    {
        count = let - low;
        while (count > 0) {
            ft_putchar(let);
            count--;
        }
    }
    else
        ft_putchar(let);
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
    else while (argv[1][i])
    {
        repeat_letter(argv[1][i]);
        i++;
    }
    ft_putchar('\n');
    return (0);
}

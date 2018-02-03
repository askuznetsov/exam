/*  Assignment name  : maff_alpha
    Expected files   : maff_alpha.c
    Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays the alphabet, with even letters in uppercase, and
odd letters in lowercase, followed by a newline.

Example:

$> ./maff_alpha | cat -e
aBcDeFgHiJkLmNoPqRsTuVwXyZ$
-------------------------------------
*/

#include <unistd.h>

void	ft_putchar(char temp)
{
  write(1, &temp, 1);
}

int	main(void)
{
  int 	j;
  char 	i;

  i = 97;
  j = 0;
  while (i <= 122)
    {
      if (j == 0)
	{
	   ft_putchar(i);
	   j = 1;
	   i++;
	}
      if (j == 1)
	{
	  ft_putchar((char)(i - 32));
	  j = 0;
	  i++;
	}
    }
  ft_putchar('\n');
  return (0);
}

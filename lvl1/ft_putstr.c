/*	Assignment name  : ft_putstr
	Expected files   : ft_putstr.c
	Allowed functions: write
--------------------------------------------------------------------------------

Write a function that displays a string on the standard output.

The pointer passed to the function contains the address of the string's first
character.

Your function must be declared as follows:

void	ft_putstr(char *str);
----------------------------------------------
*/

#include <unistd.h>

void	ft_putchar(char temp)
{
  write(1, &temp, 1);
}

void	ft_putstr(char *str)
{
  int i;

  while (str[i])
    ft_putchar(str[i++]);
}

int	main(void)
{
  char *string;

  string = "Hello World\n";
  ft_putstr(string);
  return (0);
}

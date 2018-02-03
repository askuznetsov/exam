/*  Assignment name  : hello
    Expected files   : hello.c
    Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays "Hello World!" followed by a \n.

Example:

$>./hello
Hello World!
$>./hello | cat -e
Hello World!$
$>
----------------------------------
*/

#include <unistd.h>

void	ft_putchar(char temp)
{
  write(1, &temp, 1);
}

void	ft_putstr(char *str)
{
  int i;

  i = 0;
  while (str[i])
    {
      ft_putchar(str[i]);
      i++;
    }
}

int	main(void)
{
  char *string;

  string = "Hello World!\n";
  ft_putstr(string);
  return (0);
}
  

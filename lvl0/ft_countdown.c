/*  Assignment name  : ft_countdown
    Expected files   : ft_countdown.c
    Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays all digits in descending order, followed by a
newline.

Example:
$> ./ft_countdown | cat -e
9876543210$
$>
*/
#include <unistd.h>

void	ft_putchar(char temp)
{
  write(1, &temp, 1);
}

int	main(void)
{
  char i;

  i = '9';
  while (i >= '0')
    {
      ft_putchar(i);
      i--;
    }
  ft_putchar('\n');
  return (0);
}

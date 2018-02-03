/*	Assignment name  : ft_print_numbers
	Expected files   : ft_print_numbers.c
	Allowed functions: write
--------------------------------------------------------------------------------

Write a function that displays all digits in ascending order.

Your function must be declared as follows:

void	ft_print_numbers(void);
--------------------------------------------
*/

#include <unistd.h>

void	ft_putchar(char temp)
{
  write(1, &temp, 1);
}

void	ft_print_numbers(void)
{
  char i;

  i = '1';
  while (i <= '9')
    {
      ft_putchar(i);
      i++;
    }
}

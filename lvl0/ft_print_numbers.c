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

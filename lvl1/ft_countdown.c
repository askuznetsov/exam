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
    ft_putchar(i--);
  ft_putchar('\n');
  return (0);
}

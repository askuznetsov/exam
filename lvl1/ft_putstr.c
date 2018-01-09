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

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
  

#include <unistd.h>

void	ft_putchar(char temp)
{
  write(1, &temp, 1);
}

int	main(int argc, char **argv)
{
  int i;

  i = 0;
  if (argc != 2)
    {
      ft_putchar('z');
      ft_putchar('\n');
      return (0);
    }
  while (argv[1][i])
    {
      if (argv[1][i] == 'z')
	{
	  ft_putchar('z');
	  ft_putchar('\n');
	  return (0);
	}
      i++;
    }
  ft_putchar('z');
  ft_putchar('\n');
  return (0);
}

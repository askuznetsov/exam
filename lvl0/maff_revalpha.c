#include <unistd.h>

void	ft_putchar(char temp)
{
  write(1, &temp, 1);
}

int	main(void)
{
  char i;
  int  j;

  j = 0;
  i = 122;
  while (i >= 97)
    {
      if (j == 0)
	{
	  ft_putchar(i);
	  i--;
	  j = 1;
	}
      if (j == 1)
	{
	  ft_putchar((char)(i - 32));
	  j = 0;
	  i--;
	}
    }
  ft_putchar('\n');
  return (0);
}

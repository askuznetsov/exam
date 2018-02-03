/*  Assignment name  : ft_strcpy
    Expected files   : ft_strcpy.c
    Allowed functions: 
--------------------------------------------------------------------------------

Reproduce the behavior of the function strcpy (man strcpy).

Your function must be declared as follows:

char    *ft_strcpy(char *s1, char *s2);
-------------------------------------------
*/

#include <stdlib.h>
#include <unistd.h>

void 	ft_putchar(char temp)
{
  write(1, &temp, 1);
}

char	*ft_strcpy(char *s1, char *s2)
{
  int i;

  i = 0;
  while (s2[i])
    {
      s1[i] = s2[i];
      i++;
    }
  return (s1);
}

void	ft_putstr(char *string)
{
  int i;

  i = 0;
  while (string[i])
    ft_putchar(string[i++]);
}

int	ft_strlen(char *str)
{
  int i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

int	main(void)
{
  char *string1;
  char *string2;

  string1 = "So, this code work properly. Yammy ;)";
  string2 = (char *)malloc(sizeof(char) * (long unsigned int)ft_strlen(string1));
  ft_putstr("Destination string is: ");
  ft_putstr(ft_strcpy(string2, string1));
  ft_putchar('\n');
  return (0);
}

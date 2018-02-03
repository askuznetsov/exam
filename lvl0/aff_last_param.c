/*  Assignment name  : aff_last_param
    Expected files   : aff_last_param.c
    Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes strings as arguments, and displays its last
argument followed by a newline.

If the number of arguments is less than 1, the program displays a newline.

Examples:

$> ./aff_last_param "zaz" "mange" "des" "chats" | cat -e
chats$
$> ./aff_last_param "j'aime le savon" | cat -e
j'aime le savon$
$> ./aff_last_param
$
--------------------------------------------------------
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
      ft_putchar(str[i++]);
}
  
int	main(int argc, char **argv)
{
  if (argc <= 2)
    ft_putchar('\n');
  ft_putstr(argv[argc - 1]);
  ft_putchar('\n');
  return (0);
}

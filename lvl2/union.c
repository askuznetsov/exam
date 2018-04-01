/*	Assignment name  : union
	Expected files   : union.c
	Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in either one of the strings.

The display will be in the order characters appear in the command line, and
will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Example:

$>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
zpadintoqefwjy$
$>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6vewg4thras$
$>./union "rien" "cette phrase ne cache rien" | cat -e
rienct phas$
$>./union | cat -e
$
$>
$>./union "rien" | cat -e
$
$>
------------------------------------------------------------------------------*/

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

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void 	fill_array_with_zero(char *str, int len)
{
	int i;

	i = 0;
	while (i < len)
	{
		str[i] = 0;
		i++;
	}
}

int		check(char c, char *string, int len)
{
	int i;

	i = 0;
	while (i < len)
	{
		if (c == string[i])
			return (1);
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	char	array[ft_strlen(argv[1]) + ft_strlen(argv[2]) + 1];
	int 	k;
	int 	i;
	int 	len;

	if (argc != 3)
	{
		ft_putchar('\n');
		return (0);
	}
	len = ft_strlen(argv[1]) + ft_strlen(argv[2]) + 1;
	fill_array_with_zero(array, len);
	i = 0;
	k = 0;
	while (argv[1][i])
	{
		if (check(argv[1][i], array, len) == 0)
		{
			array[k] = argv[1][i];
			k++;
			i++;
		}
		else
			i++;
	}
	i = 0;
	while (argv[2][i])
	{
		if (check(argv[2][i], array, len) == 0)
		{
			array[k] = argv[2][i];
			k++;
			i++;
		}
		else
			i++;
	}
	array[k] = '\0';
	ft_putstr(array);
	ft_putchar('\n');
	return (0);
}

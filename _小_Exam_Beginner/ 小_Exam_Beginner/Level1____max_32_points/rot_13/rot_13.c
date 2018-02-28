/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/27 10:43:53 by exam              #+#    #+#             */
/*   Updated: 2016/12/27 11:21:14 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char** argv)
{
	int	i;
	char c;

	i = 0;
	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		while (argv[1][i] != '\0')
		{
			c = argv[1][i];
			if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
				c += 13;				
			else if((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z'))
				c -= 13;
			write(1, &c, 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}

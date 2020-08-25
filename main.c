/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_get_next_lline.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksalmi <ksalmi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 16:31:39 by ksalmi            #+#    #+#             */
/*   Updated: 2019/11/25 18:03:16 by ksalmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>

int		main(int argc, char **argv)
{

	char	*line;
	int		res;
	int		fd;
	int		i;
	int 	j;

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			j = 0;
			fd = open(argv[i], O_RDONLY);
			line = NULL;
			ft_putnbr(fd);
			ft_putendl("\tFD number");
			while ((res = get_next_line(fd, &line)) && res != -1)
			{
				j++;
				ft_putstr("return: ");
				ft_putnbr(res);
				ft_putchar('\t');
				ft_putendl(line);
				free(line);
			}
			ft_putstr("return: ");
			ft_putnbr(res);
			ft_putchar('\n');
			ft_putchar('\n');
			ft_putstr("Number of lines: ");
			ft_putnbr(j);
			ft_putstr("\n\n");
			i++;
		}
	}
	return (0);
}

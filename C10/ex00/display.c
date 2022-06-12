/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 07:48:35 by lvogelsa          #+#    #+#             */
/*   Updated: 2022/06/07 08:36:32 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display.h"

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		write(1, "File name missing.\n", 19);
	}
	else if (argc > 2)
	{
		write(1, "Too many arguments.\n", 20);
	}
	else
	{
		ft_display_file(argv[1]);
	}
	return (0);
}

void	ft_display_file(char *file)
{
	int		fd;
	int		size;
	char	buf[BUF_SIZE];

	fd = open(file, 0);
	if (fd == -1)
	{
		write(1, "Cannot read file.\n", 18);
	}
	else
	{
		size = read(fd, buf, BUF_SIZE);
		if (size == -1)
		{
			write(1, "Cannot read file.\n", 18);
		}
		while (size > 0)
		{
			write(1, buf, size);
			size = read(fd, &buf, 1024);
		}
	}
	close(fd);
}

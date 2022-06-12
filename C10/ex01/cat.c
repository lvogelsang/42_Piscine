/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 09:21:45 by lvogelsa          #+#    #+#             */
/*   Updated: 2022/06/07 17:25:34 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.h"

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_display_stdin();
	}
	ft_file(argc, argv);
	return (0);
}

void	ft_display_stdin(void)
{
	int		size;
	char	buf;

	size = read(0, &buf, 1);
	while (size != 0)
	{
		write(1, &buf, size);
		size = read(0, &buf, 1);
	}
}

int	ft_display_file(char *file)
{
	int		fd;
	int		size;
	char	buf[BUF_SIZE];

	fd = open(file, 0);
	if (fd == -1)
	{
		close(fd);
		return (0);
	}
	size = read(fd, &buf, BUF_SIZE);
	if (size == -1)
	{
		close(fd);
		return (0);
	}
	while (size > 0)
	{
		write(1, buf, size);
		size = read(fd, &buf, BUF_SIZE);
	}
	close(fd);
	return (1);
}

int	ft_file(int argc, char **argv)
{
	int		i;

	i = 1;
	while (i < argc)
	{
		if (argv[i][0] == '-')
		{
			ft_display_stdin();
		}
		else
		{
			if (!(ft_display_file(argv[i])))
			{
				ft_error(argv[0], argv[i]);
			}
		}
		i++;
	}
	return (0);
}

void	ft_error(char *str, char *str1)
{
	int	i;

	i = 2;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, ": ", 2);
	i = 0;
	while (str1[i])
	{
		write(1, &str1[i], 1);
		i++;
	}
	write(1, ": No such file or directory\n", 28);
}	

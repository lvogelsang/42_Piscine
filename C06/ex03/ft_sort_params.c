/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 11:58:39 by lvogelsa          #+#    #+#             */
/*   Updated: 2022/05/28 12:30:53 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	write(1, str, len);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] == s2[i])
		{
			x = 0;
			i++;
		}
		else if (s1[i] > s2[i])
		{
			x = 1;
			break ;
		}
		else
		{
			x = -1;
			break ;
		}
	}
	return (x);
}

void	ft_swap(char **a, char **b)
{
	char	*a_copy;

	a_copy = *a;
	*a = *b;
	*b = a_copy;
}

int	main(int argc, char **argv)
{
	int	x;
	int	y;
	int	cmp;

	x = 1;
	while (x < argc - 1)
	{
		y = 1;
		while (y < argc - 1)
		{
			cmp = ft_strcmp(argv[y], argv[y + 1]);
			if (cmp == 1)
				ft_swap(&argv[y], &argv[y + 1]);
			y++;
		}
		x++;
	}
	y = 1;
	while (y < argc)
	{
		ft_putstr(argv[y]);
		ft_putchar('\n');
		y++;
	}
	return (0);
}

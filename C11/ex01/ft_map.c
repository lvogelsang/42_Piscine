/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 08:15:28 by lvogelsa          #+#    #+#             */
/*   Updated: 2022/06/06 08:31:36 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*new_tab;
	int	i;

	new_tab = (int *)malloc(length * sizeof(int));
	i = 0;
	while (i < length)
	{
		new_tab[i] = f(tab[i]);
		i++;
	}
	return (new_tab);
}
/*
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putnbr(nb / 10);
		ft_putchar('8');
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else
	{
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
		}
		ft_putchar(48 + nb % 10);
	}
}

int	ft_nbr_one(int x)
{
	x = x + 1;
	return (x);
}

int	main(void)
{
	int	*tab;
	int	*new_tab;
	int	length;
	int	i;

	length = 3;
	tab = (int *)malloc(length * sizeof(int));
	tab[0] = 54;
	tab[1] = 2871;
	tab[2] = 1;
	new_tab = (int *)malloc(length * sizeof(int));
	new_tab = ft_map(tab, length, &ft_nbr_one);
	i = 0;
	while (i < length)
	{
		ft_putnbr(new_tab[i]);
		i++;
	}
}*/

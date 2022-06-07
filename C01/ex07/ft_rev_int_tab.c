/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 10:12:18 by lvogelsa          #+#    #+#             */
/*   Updated: 2022/05/23 09:42:51 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);
/*
int	main(void)
{
	int	size;
	int	tab[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int	a;

	size = 10;
	a = 0;
	ft_rev_int_tab(tab, size);
	while (a < size)
	{
		printf("%d", tab[a]);
		a++;
	}
}*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	x;
	int	y;

	x = 0;
	while (x < size / 2)
	{
		y = tab[x];
		tab[x] = tab[size - 1 - x];
		tab[size - 1 - x] = y;
		x++;
	}
}

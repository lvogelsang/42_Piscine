/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 14:30:06 by lvogelsa          #+#    #+#             */
/*   Updated: 2022/05/23 09:36:24 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
/*
int	main(void)
{
	ft_print_comb2();
}*/

void	ft_print_comb2(void)
{
	int		a;
	int		b;

	a = -1;
	while (a++ < 98)
	{
		b = a;
		while (b++ < 99)
		{
			ft_putchar((char)(a / 10) + '0');
			ft_putchar((char)(a % 10) + '0');
			ft_putchar(' ');
			ft_putchar((char)(b / 10) + '0');
			ft_putchar((char)(b % 10) + '0');
			if (a != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}

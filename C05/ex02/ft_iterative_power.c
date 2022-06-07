/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 11:57:04 by lvogelsa          #+#    #+#             */
/*   Updated: 2022/05/26 17:09:50 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power);
/*
int	main(void)
{
	int	a;

	a = ft_iterative_power(-5, 3);
	printf("%d\n", a);
}*/

int	ft_iterative_power(int nb, int power)
{
	int	x;

	x = 0;
	if (power == 0)
	{
		x = 1;
	}
	if (power > 0)
	{
		x = nb;
		while (power > 1)
		{
			x = x * nb;
			power--;
		}
	}
	return (x);
}

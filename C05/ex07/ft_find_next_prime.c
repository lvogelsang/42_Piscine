/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:30:08 by lvogelsa          #+#    #+#             */
/*   Updated: 2022/05/26 17:12:14 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_find_next_prime(int nb);
/*
int	main(void)
{
	int	a;

	a = ft_find_next_prime(2147483424);
	printf("%d", a);
}*/

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (2);
	if (nb > 2147483423)
	{
		return (2147483647);
	}
	while (i <= nb / 2)
	{
		if (nb % i == 0)
		{
			nb++;
			ft_find_next_prime(nb);
		}
		i++;
	}
	return (nb);
}

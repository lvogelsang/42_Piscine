/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 10:59:49 by lvogelsa          #+#    #+#             */
/*   Updated: 2022/05/26 17:09:14 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb);
/*
int	main(void)
{
	int	a;

	a = ft_iterative_factorial(-5);
	printf("%d\n", a);
}*/

int	ft_iterative_factorial(int nb)
{
	int	x;

	x = 0;
	if (nb >= 0)
	{
		x = 1;
		while (nb > 1)
		{
			x = x * nb;
			nb--;
		}
	}
	return (x);
}

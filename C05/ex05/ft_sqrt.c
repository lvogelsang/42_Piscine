/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 14:01:01 by lvogelsa          #+#    #+#             */
/*   Updated: 2022/05/26 17:11:02 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb);
/*
int	main(void)
{
	int	a;

	a = ft_sqrt(2147395600);
	printf("%d\n", a);
}*/

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i <= nb / i)
	{
		if (i * i == nb)
			return (i);
		else
			i++;
	}
	return (0);
}

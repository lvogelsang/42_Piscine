/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 13:39:29 by lvogelsa          #+#    #+#             */
/*   Updated: 2022/05/26 17:10:51 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_fibonacci(int index);
/*
int	main(void)
{
	int	a;

	a = ft_fibonacci(26);
	printf("%d\n", a);
}*/

int	ft_fibonacci(int index)
{
	int	x;
	int	y;

	x = 0;
	y = 1;
	if (index < 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (x);
	}
	if (index == 1)
	{
		return (y);
	}
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

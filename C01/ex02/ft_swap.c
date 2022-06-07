/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:38:28 by lvogelsa          #+#    #+#             */
/*   Updated: 2022/06/01 08:25:00 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b);
/*
int	main(void)
{
	int	a;
	int	b;

	a = 69;
	b = 42;
	ft_swap(&a, &b);
	printf("%d\n", a);
	printf("%d\n", b);
}*/

void	ft_swap(int *a, int *b)
{
	int	a_copy;

	a_copy = *a;
	*a = *b;
	*b = a_copy;
}

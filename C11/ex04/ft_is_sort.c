/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 10:32:10 by lvogelsa          #+#    #+#             */
/*   Updated: 2022/06/06 17:08:40 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	asc;
	int	desc;

	i = 0;
	asc = 0;
	desc = 0;
	if (length == 1 || length == 0)
		return (1);
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			asc++;
		else if (f(tab[i], tab[i + 1]) > 0)
			desc++;
		else
		{
			asc++;
			desc++;
		}
		i++;
	}
	if (asc == length - 1 || desc == length - 1)
		return (1);
	return (0);
}
/*
int	ft_diff(int a, int b)
{
	int	x;

	x = a - b;
	return (x);
}

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	*tab;
	int	length;
	int	x;
	
	length = 4;
	tab = (int *)malloc(length * sizeof(int));
	tab[0] = 9;
	tab[1] = 5;
	tab[2] = 6;
	tab[3] = 2;
	x = ft_is_sort(tab, length, &ft_diff);
	printf("%d\n", x);
}*/

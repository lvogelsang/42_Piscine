/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 08:48:20 by lvogelsa          #+#    #+#             */
/*   Updated: 2022/06/06 08:55:23 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
		{
			x++;
		}
		i++;
	}
	return (x);
}
/*
int	ft_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			return (1);
		}
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	**tab;
	int		length;
	int		i;

	length = 3;
	tab = (char **)malloc(length * sizeof(char *));
	tab[0] = "Hello";
	tab[1] = "123";
	tab[2] = "A";
	i = ft_count_if(tab, length, ft_is_uppercase);
	printf("%d\n", i);
}*/

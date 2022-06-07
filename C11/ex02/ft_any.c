/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 08:32:56 by lvogelsa          #+#    #+#             */
/*   Updated: 2022/06/06 08:51:22 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (f(tab[i]) != 0)
		{
			return (1);
		}
		i++;
	}
	return (0);
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
	tab[2] = NULL;
	i = ft_any(tab, ft_is_uppercase);
	printf("%d\n", i);
}*/	

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 10:40:49 by lvogelsa          #+#    #+#             */
/*   Updated: 2022/06/02 10:36:15 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);
/*
int	main(void)
{
	char	str[] = "Dolphins";

	ft_putstr(str);
}*/

void	ft_putstr(char *str)
{
	int		len;
	char	a;

	len = 0;
	while (str[len])
	{
		a = str[len];
		write(1, &a, 1);
		len++;
	}
}

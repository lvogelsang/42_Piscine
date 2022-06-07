/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 07:52:31 by lvogelsa          #+#    #+#             */
/*   Updated: 2022/05/28 12:05:11 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);
/*
int	main(void)
{
	char	*str;

	str = "Hello world!";
	ft_putstr(str);
}*/

void	ft_putstr(char	*str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	write(1, str, len);
}

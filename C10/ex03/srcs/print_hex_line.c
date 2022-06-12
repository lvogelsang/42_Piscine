/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex_line.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 10:54:52 by lvogelsa          #+#    #+#             */
/*   Updated: 2022/06/11 10:55:16 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/utils.h"

void	print_hex_line(unsigned char *curr, unsigned char *end, \
						unsigned char *addr, int option)
{
	unsigned int	i;

	i = 0;
	print_hex((unsigned int)(curr - addr), 7 + option);
	ft_putchar(' ');
	if (option)
		ft_putchar(' ');
	while (i < 16)
	{
		if (curr + i < end)
			print_hex((unsigned int)curr[i], 2);
		else
		{
			ft_putchar(' ');
			ft_putchar(' ');
		}
		if (i != 15 || option)
			ft_putchar(' ');
		if (i == 7 && option)
			ft_putchar(' ');
		i++;
	}
}

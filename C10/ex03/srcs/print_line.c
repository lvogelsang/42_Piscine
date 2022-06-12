/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_line.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 10:55:33 by lvogelsa          #+#    #+#             */
/*   Updated: 2022/06/11 10:55:53 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/utils.h"

void	print_line(unsigned char *curr, unsigned char *end, \
					unsigned char *addr, int option)
{
	unsigned int	i;

	print_hex_line(curr, end, (unsigned char *)addr, option);
	if (option)
	{
		print(" |");
		i = 0;
		while (i < 16 && curr + i < end)
		{
			if (curr[i] < 32 || curr[i] > 126)
				ft_putchar('.');
			else
				ft_putchar(curr[i]);
			i++;
		}
		ft_putchar('|');
	}
	ft_putchar('\n');
}

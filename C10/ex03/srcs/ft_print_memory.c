/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 10:48:55 by lvogelsa          #+#    #+#             */
/*   Updated: 2022/06/11 10:49:31 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/utils.h"

void	*ft_print_memory(void *addr, unsigned int size, int option)
{
	unsigned char	*curr;
	unsigned char	*end;
	int				asterisk;

	curr = (unsigned char *)addr;
	end = curr + size;
	asterisk = 0;
	while (curr < end && end - curr > 1)
	{
		if (curr + 16 >= end || (ft_memcmp(curr, curr - 16, 16) != 0))
		{
			asterisk = 0;
			print_line(curr, end, addr, option);
		}
		else if (ft_memcmp(curr, curr - 16, 16) == 0 && !asterisk)
			print_asterisk(&asterisk);
		curr += 16;
	}
	if (curr > (unsigned char *)addr)
	{
		print_hex(size, 7 + option);
		ft_putchar('\n');
	}
	return (addr);
}

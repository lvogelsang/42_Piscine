/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 10:54:23 by lvogelsa          #+#    #+#             */
/*   Updated: 2022/06/11 10:54:35 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/utils.h"

void	print_hex(unsigned int value, int length)
{
	char	*base;
	int		maxlength;
	char	output[sizeof(int) * 2];
	int		i;

	maxlength = sizeof(int) * 2;
	i = maxlength - 1;
	base = "0123456789abcdef";
	while (value > 0)
	{
		output[i] = base[value % 16];
		value /= 16;
		i--;
	}
	while (i >= 0)
		output[i--] = '0';
	i = maxlength - length;
	while (i < maxlength)
		ft_putchar(output[i++]);
}

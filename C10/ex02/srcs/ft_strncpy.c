/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 09:06:00 by lvogelsa          #+#    #+#             */
/*   Updated: 2022/06/11 10:10:11 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_str_sized_copy(char *dest, char *src, unsigned int src_size)
{
	unsigned int	index;

	index = 0;
	while (index < src_size)
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}

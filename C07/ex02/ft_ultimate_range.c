/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 09:40:45 by lvogelsa          #+#    #+#             */
/*   Updated: 2022/05/30 12:48:30 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*ptr;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	ptr = (int *)malloc(size * sizeof(int));
	if (!ptr)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	*range = ptr;
	return (size);
}

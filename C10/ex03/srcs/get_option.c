/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_option.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 10:52:04 by lvogelsa          #+#    #+#             */
/*   Updated: 2022/06/11 10:52:23 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/utils.h"

int	get_option(int argc, char **argv, int *index)
{
	if (argc == 1)
		return (0);
	if (ft_strcmp(argv[1], "-C") == 0)
	{
		*index += 1;
		return (1);
	}
	return (0);
}

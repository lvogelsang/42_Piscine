/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 10:56:54 by lvogelsa          #+#    #+#             */
/*   Updated: 2022/06/11 10:57:00 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/utils.h"

void	read_file(char *file, int hex_display)
{
	if (file == NULL)
		return ;
	ft_print_memory(file, ft_strlen(file), hex_display);
	free(file);
}

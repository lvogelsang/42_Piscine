/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_single_file.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 11:02:50 by lvogelsa          #+#    #+#             */
/*   Updated: 2022/06/11 11:03:50 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/utils.h"

void	read_single_file(char **argv, int i, int hex_display)
{
	if (file_exists(argv[i]) < 0)
		print_error_message(file_exists(argv[i]), argv[i]);
	else
		read_file(get_file(argv[i]), hex_display);
}

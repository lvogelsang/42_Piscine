/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_input.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 10:57:17 by lvogelsa          #+#    #+#             */
/*   Updated: 2022/06/11 11:02:30 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/utils.h"

void	read_input(int hex_display)
{
	int		read_amount;
	char	buffer[BUFSIZE];
	char	*output;

	output = malloc(1);
	output[0] = 0;
	read_amount = read(0, buffer, BUFSIZE);
	while (read_amount > 0)
	{
		concat_strings(&output, buffer, read_amount);
		read_amount = read(0, buffer, BUFSIZE);
	}
	read_file(output, hex_display);
}

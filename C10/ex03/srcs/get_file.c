/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_file.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 10:49:53 by lvogelsa          #+#    #+#             */
/*   Updated: 2022/06/11 10:51:50 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/utils.h"

char	*get_file(char *filename)
{
	int		fd;
	int		read_amount;
	char	buffer[BUFSIZE];
	char	*output;

	fd = open(filename, O_RDONLY);
	output = malloc(1);
	output[0] = 0;
	read_amount = read(fd, buffer, BUFSIZE);
	while (output && (read_amount > 0))
	{
		concat_strings(&output, buffer, read_amount);
		read_amount = read(fd, buffer, BUFSIZE);
	}
	return (output);
}

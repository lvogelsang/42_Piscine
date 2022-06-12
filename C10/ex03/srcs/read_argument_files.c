/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_argument_files.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 10:56:28 by lvogelsa          #+#    #+#             */
/*   Updated: 2022/06/11 10:56:34 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/utils.h"

void	read_argument_files(int argc, char **argv, int i, int hex_display)
{
	char	*file;
	char	*tmp;

	file = malloc(2);
	file[0] = 0;
	while (i < argc)
	{
		if (file_exists(argv[i]) < 0)
			print_error_message(file_exists(argv[i]), argv[i]);
		else
		{
			tmp = get_file(argv[i]);
			if (tmp == NULL)
				return ;
			concat_strings(&file, tmp, ft_strlen(tmp));
		}
		i++;
	}
	read_file(file, hex_display);
}

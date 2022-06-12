/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 10:52:39 by lvogelsa          #+#    #+#             */
/*   Updated: 2022/06/11 10:53:04 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/utils.h"

int	main(int argc, char **argv)
{
	int		i;
	int		hex_display;

	i = 1;
	hex_display = get_option(argc, argv, &i);
	if (argc == 1 || (argc == 2 && hex_display))
		read_input(hex_display);
	else if (i + 1 != argc)
		read_argument_files(argc, argv, i, hex_display);
	else
		read_single_file(argv, i, hex_display);
	return (0);
}

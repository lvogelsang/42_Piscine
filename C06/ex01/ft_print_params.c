/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 09:49:50 by lvogelsa          #+#    #+#             */
/*   Updated: 2022/05/30 16:22:02 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	x;
	int	i;

	x = 1;
	if (argc > 1)
	{
		while (x < argc)
		{
			i = 0;
			while (argv[x][i])
			{
				write(1, &argv[x][i], 1);
				i++;
			}
			write(1, "\n", 1);
			x++;
		}
	}
	return (0);
}	

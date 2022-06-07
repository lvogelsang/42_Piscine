/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 14:52:07 by lvogelsa          #+#    #+#             */
/*   Updated: 2022/05/27 19:07:50 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	x;
	int	i;

	x = argc - 1;
	if (argc > 1)
	{
		while (argv[x] && x > 0)
		{
			i = 0;
			while (argv[x][i])
			{
				write(1, &argv[x][i], 1);
				i++;
			}
			write(1, "\n", 1);
			x--;
		}
	}
	return (0);
}

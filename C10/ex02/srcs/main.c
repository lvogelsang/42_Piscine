/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 09:07:40 by lvogelsa          #+#    #+#             */
/*   Updated: 2022/06/11 10:25:37 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "ft_tail.h"
#include "ft_args_parser.h"

int	main(int argc, char **argv)
{
	if (!parse_args(argv, argc, 1))
		return (1);
	return (0);
}

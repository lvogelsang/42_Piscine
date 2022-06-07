/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 08:30:16 by lvogelsa          #+#    #+#             */
/*   Updated: 2022/05/23 09:34:51 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void);
/*
int	main(void)
{
	ft_print_numbers();
}*/

void	ft_print_numbers(void)
{
	write(1, "0123456789", 10);
}

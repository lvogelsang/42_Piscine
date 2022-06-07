/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 17:11:33 by lvogelsa          #+#    #+#             */
/*   Updated: 2022/05/25 18:15:12 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	ft_putnbr(2147483647);
}

void	ft_putnbr(int nb)
{
	int	digit;
	int	rev_int;
	int	a;

	while (nb != 0)
	{
		a = nb % 10;
		rev_int = rev_int * 10 + a;
		nb /= 10;
	}
	while (rev_int > 0)
	{
		digit = rev_int % 10;
		ft_putchar((char)(digit) + '0');
		rev_int /= 10;
	}
}

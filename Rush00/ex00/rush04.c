/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanna-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 09:35:06 by asanna-t          #+#    #+#             */
/*   Updated: 2022/05/21 14:59:01 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putchar(char c);

void	row(char start, char middle, char end, int x)
{
	ft_putchar(start);
	while (--x > 1)
		ft_putchar(middle);
	if (x)
		ft_putchar(end);
}

void	rush(int x, int y)
{
	int	a;

	if (x > 0 && y > 0)
	{
		a = 0;
		while (a < y)
		{
			if (a == 0)
				row('A', 'B', 'C', x);
			else if (a == y - 1)
				row('C', 'B', 'A', x);
			else
				row('B', ' ', 'B', x);
			a++;
			write(1, "\n", 1);
		}
	}
}		

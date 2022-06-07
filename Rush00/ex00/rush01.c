/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanna-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 09:35:06 by asanna-t          #+#    #+#             */
/*   Updated: 2022/05/22 14:51:10 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putchar(char c);

// Row function determines how many columns to print.

void	row(char start, char middle, char end, int x)
{
	ft_putchar(start);
	x = x - 1;
	while (x > 1)
	{
		ft_putchar(middle);
		x = x - 1;
	}
	if (x)
		ft_putchar(end);
}

// Rush function determines how many rows to print.

void	rush(int x, int y)
{
	int	counter;

	if (x > 0 && y > 0)
	{
		counter = 0;
		while (counter < y)
		{
			if (counter == 0)
				row('/', '*', '\\', x);
			else if (counter == y - 1)
				row('\\', '*', '/', x);
			else
				row('*', ' ', '*', x);
			counter++;
			write(1, "\n", 1);
		}
	}
}		

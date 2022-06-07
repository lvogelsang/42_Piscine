/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 17:03:24 by lvogelsa          #+#    #+#             */
/*   Updated: 2022/05/23 12:00:33 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str);
/*
int	main(void)
{
	char	string[] = "hR1%©klI]-J";
	int		printable;

	printable = ft_str_is_printable(string);
	printf("%d\n", printable);
}*/

int	ft_str_is_printable(char *str)
{
	int	i;
	int	x;

	i = 0;
	if (str[i])
	{
		while (str[i])
		{
			if (str[i] > 31 && str[i] <= 127)
			{
				i++;
				x = 1;
			}
			else
			{
				x = 0;
				break ;
			}
		}
	}
	else
	{
		x = 1;
	}
	return (x);
}

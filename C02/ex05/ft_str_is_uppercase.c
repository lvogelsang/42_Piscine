/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 16:53:50 by lvogelsa          #+#    #+#             */
/*   Updated: 2022/05/23 12:00:16 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str);
/*
int	main(void)
{
	char	string[] = "HERFJyNHG";
	int		uppercase;

	uppercase = ft_str_is_uppercase(string);
	printf("%d\n", uppercase);
}*/

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	x;

	i = 0;
	if (str[i])
	{
		while (str[i])
		{
			if (str[i] > 64 && str[i] < 91)
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

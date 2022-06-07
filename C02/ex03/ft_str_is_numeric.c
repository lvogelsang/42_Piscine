/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 15:13:29 by lvogelsa          #+#    #+#             */
/*   Updated: 2022/05/23 11:59:32 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str);
/*
int	main(void)
{
	char	string[] = "284968*4875";
	int		numeric;

	numeric = ft_str_is_numeric(string);
	printf("%d\n", numeric);
}*/

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	x;

	i = 0;
	if (str[i])
	{
		while (str[i])
		{
			if (str[i] > 47 && str[i] < 58)
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

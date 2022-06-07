/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 12:07:12 by lvogelsa          #+#    #+#             */
/*   Updated: 2022/05/23 11:59:08 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str);
/*
int	main(void)
{
	char	string[] = "j8ehfk";
	int		alpha;

	alpha = ft_str_is_alpha(string);
	printf("%d\n", alpha);
}*/

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	x;

	i = 0;
	if (str[i])
	{
		while (str[i])
		{
			if ((str[i] > 96 && str[i] < 123) || (str[i] > 64 && str[i] < 91))
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

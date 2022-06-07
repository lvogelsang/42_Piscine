/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 16:42:30 by lvogelsa          #+#    #+#             */
/*   Updated: 2022/05/23 11:59:54 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str);
/*
int	main(void)
{
	char	string[] = "kwfbTjdg";
	int		lowercase;

	lowercase = ft_str_is_lowercase(string);
	printf("%d\n", lowercase);
}*/

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	x;

	i = 0;
	if (str[i])
	{
		while (str[i])
		{
			if (str[i] > 96 && str[i] < 123)
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

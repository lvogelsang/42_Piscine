/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 07:39:58 by lvogelsa          #+#    #+#             */
/*   Updated: 2022/05/23 12:01:06 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str);
/*
int	main(void)
{
	char	string[] = "HELlO YoU! &7Z";

	ft_strlowcase(string);
	printf("%s\n", string);
}*/

char	*ft_strlowcase(char *str)
{
	int		i;
	char	a;

	i = 0;
	while (str[i])
	{
		a = str[i];
		if (str[i] > 64 && str[i] < 91)
		{
			str[i] = a + 32;
		}
		i++;
	}
	return (str);
}

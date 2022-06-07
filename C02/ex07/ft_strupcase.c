/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 17:31:06 by lvogelsa          #+#    #+#             */
/*   Updated: 2022/05/30 16:13:39 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char	string[] = "Hello!12abcDEf";

	ft_strupcase(string);
	printf("%s\n", string);
}

char	*ft_strupcase(char *str)
{
	int		i;
	char	a;

	i = 0;
	while (str[i])
	{
		a = str[i];
		if (str[i] > 96 && str[i] < 123)
		{
			str[i] = a - ' ';
		}
		++i;
	}
	return (str);
}

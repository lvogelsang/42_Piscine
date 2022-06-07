/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 08:04:04 by lvogelsa          #+#    #+#             */
/*   Updated: 2022/05/23 17:58:28 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	string[] = "hello, how aRe yOU? 28days pisCINe-adeLaide hi+lena";

	ft_strcapitalize(string);
	printf("%s\n", string);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	a;

	i = 0;
	a = str[i];
	if (str[i] > 96 && str[i] < 123)
		str[i] = a - 32;
	i++;
	while (str[i])
	{
		a = str[i];
		if (str[i] > 64 && str[i] < 91)
			str[i] = a + 32;
		else if (str[i] == 32 || str[i] == 45 || str[i] == 43)
		{
			str[i] = a;
			i++;
			a = str[i];
			if (str[i] > 96 && str[i] < 123)
				str[i] = a - 32;
		}
		i++;
	}
	return (str);
}

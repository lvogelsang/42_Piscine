/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 18:15:21 by lvogelsa          #+#    #+#             */
/*   Updated: 2022/05/29 09:09:52 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str);

int	ft_valid_char(char *str);

int	ft_verify_numbers(char *str);

int	ft_verify_numbers2(char *str, int one, int two, int three);

int	ft_validation(char *input)
{
	if (ft_strlen(input) != 31
		|| ft_valid_char(input) == 0
		|| ft_verify_numbers(input) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

int	ft_valid_char(char *str)
{
	int	i;

	i = 0;
	while (i < 31)
	{
		if (!('1' <= str[i] && str[i] <= '4')
			|| !(str[i + 1] == ' ' || str[31] == '\0'))
		{
			return (0);
		}
		i = i + 2;
	}
	return (1);
}

int	ft_verify_numbers(char *str)
{
	int	one;
	int	two;
	int	three;
	int	res;

	one = 0;
	two = 0;
	three = 0;
	res = ft_verify_numbers2(str, one, two, three);
	return (res);
}

int	ft_verify_numbers2(char *str, int one, int two, int three)
{
	int	i;
	int	four;

	i = 0;
	four = 0;
	while (str[i])
	{
		if (str[i] == '1')
			one++;
		else if (str[i] == '2')
			two++;
		else if (str[i] == '3')
			three++;
		else if (str[i] == '4')
			four++;
		if (one > 4 || two > 8 || three > 8 || four > 4)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

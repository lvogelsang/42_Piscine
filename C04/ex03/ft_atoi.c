/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 09:52:45 by lvogelsa          #+#    #+#             */
/*   Updated: 2022/05/26 08:28:38 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_atoi(char *str);

int	ft_sign(char *str);

int	is_space(char c);
/*
int	main(void)
{
	char	str[] = "  \n ++---+--1354h879";
	int		a;

	a = ft_atoi(str);
	printf("%d\n", a);
}*/

int	is_space(char c)
{
	int	x;

	if (c == '\t')
		x = 1;
	else if (c == '\n')
		x = 1;
	else if (c == '\v')
		x = 1;
	else if (c == '\f')
		x = 1;
	else if (c == '\r')
		x = 1;
	else if (c == ' ')
		x = 1;
	else
		x = 0;
	return (x);
}

int	ft_sign(char *str)
{
	int	i;
	int	sign_count;

	i = 0;
	sign_count = 0;
	while (is_space(str[i]) == 1)
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
		{
			sign_count++;
		}
		i++;
	}
	sign_count = sign_count % 2;
	if (str[i] < 48 || str[i] > 57)
		sign_count = -1;
	return (sign_count);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign_count;
	int	sign;
	int	integer;

	sign_count = ft_sign(str);
	if (sign_count == 0)
		sign = 1;
	else if (sign_count == 1)
		sign = -1;
	else
		sign = 0;
	i = 0;
	while (str[i] < 48 || str[i] > 57)
		i++;
	integer = 0;
	while (str[i] > 47 && str[i] < 58)
	{
		integer = integer * 10 + str[i] - 48;
		i++;
	}
	integer = sign * integer;
	return (integer);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 11:00:08 by lvogelsa          #+#    #+#             */
/*   Updated: 2022/06/02 12:02:54 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_split(char *str, char *charset);

int		ft_string_count(char *str, char *charset);

int		ft_check_charset(char c, char *charset);

char	*ft_create_string(char *str, char *charset);

int		ft_strlen_sep(char *str, char *charset);

char	**ft_split(char *str, char *charset)
{
	int		string_count;
	char	**array;
	int		i;

	string_count = ft_string_count(str, charset);
	array = (char **)malloc((string_count + 1) * sizeof(char *));
	i = 0;
	while (*str)
	{
		while (*str && ft_check_charset(*str, charset))
			str++;
		if (*str)
		{
			array[i] = ft_create_string(str, charset);
			i++;
		}
		while (*str && !ft_check_charset(*str, charset))
			str++;
	}
	array[i] = 0;
	return (array);
}

int	ft_string_count(char *str, char *charset)
{
	int	i;
	int	string_count;

	i = 0;
	string_count = 0;
	while (str[i])
	{
		while (str[i] && ft_check_charset(str[i], charset))
		{
			i++;
		}
		if (str[i])
		{
			string_count++;
		}
		while (str[i] && !ft_check_charset(str[i], charset))
		{
			i++;
		}
	}
	return (string_count);
}

int	ft_check_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_create_string(char *str, char *charset)
{
	int		len;
	int		i;
	char	*str1;

	i = 0;
	len = ft_strlen_sep(str, charset);
	str1 = (char *)malloc((len + 1) * sizeof(char));
	while (i < len)
	{
		str1[i] = str[i];
		i++;
	}
	str1[i] = '\0';
	return (str1);
}

int	ft_strlen_sep(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !ft_check_charset(str[i], charset))
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	int		index;
	char	**split;
	(void)	argc;
	split = ft_split(argv[1], argv[2]);
	index = 0;
	while (split[index])
	{
		printf("%s\n", split[index]);
		index++;
	}
}*/

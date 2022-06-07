/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 12:56:02 by lvogelsa          #+#    #+#             */
/*   Updated: 2022/05/28 12:08:37 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

// The strcmp() compares two strings character by character.
// If the strings are equal, the function returns 0.
// If the first non-matching character in str1 is greater (in ASCII)
// than that of str2, the function returns > 0.
// If the first non-matching character in str1 is lower (in ASCII)
// than that of str2, the function returns < 0.

int	ft_strcmp(char *s1, char *s2);
/*
int	main(void)
{
	char	string1[] = "Dolphin";
	char	string2[] = "Dolphi1";
	int		is_equal;

	is_equal = ft_strcmp(string1, string2);
	printf("%d\n", is_equal);
}*/

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] == s2[i])
		{
			x = 0;
			i++;
		}
		else if (s1[i] > s2[i])
		{
			x = 1;
			break ;
		}
		else
		{
			x = -1;
			break ;
		}
	}
	return (x);
}

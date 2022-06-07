/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 15:21:24 by lvogelsa          #+#    #+#             */
/*   Updated: 2022/05/27 09:23:18 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

// The strncmp() function compares two strings up to n characters.
// If the first n characters of the two strings are equal, 
// the function returns 0.
// If the first differing character in the first string is greater than the
// corresponding character in the second string, the function returns 1.
// If the first differing character in the first string is less than the 
// corresponding character in the second string, the function returns -1.

int	ft_strncmp(char *s1, char *s2, unsigned int n);
/*
int	main(void)
{
	char	string1[] = "Dog";
	char	string2[] = "Dolphin";
	int		x;
	int		is_equal;

	x = 4;
	is_equal = ft_strncmp(string1, string2, x);
	printf("%d\n", is_equal);
}*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				x;

	i = 0;
	x = 0;
	while ((s1[i] || s2[i]) && (i < n))
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

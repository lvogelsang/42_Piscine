/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 09:23:42 by lvogelsa          #+#    #+#             */
/*   Updated: 2022/05/27 10:02:15 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

//The function strncpy() copies up to n characters 
//of a source string to the location that is specified
//by the destination string. If the length of the source 
//string is less than that of n, the remainder of dest
//will be padded with null bytes. If n is smaller than
//the length of the destination string, then it will display
//n characters of the soruce string and the rest of the 
//destination string.

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	destination[] = "Sharkattack";
	char	source[] = "Penguin";
	int		n;

	n = 15;
	ft_strncpy(destination, source, n);
	printf("%s\n", destination);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 16:25:28 by lvogelsa          #+#    #+#             */
/*   Updated: 2022/05/24 15:38:35 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

// The strcat() function concatenates the destination string and
// the source string, and the result is stored in the destination string.

char	*ft_strcat(char *dest, char *src);
/*
int	main(void)
{
	char	destination[] = "Shark";
	char	source[] = "Attack";

	ft_strcat(destination, source);
	printf("%s\n", destination);
}*/

char	*ft_strcat(char *dest, char *src)
{
	int		len;
	int		i;
	char	a;

	len = 0;
	while (dest[len])
		len++;
	i = 0;
	while (src[i])
	{
		a = src[i];
		dest[len + i] = a;
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}

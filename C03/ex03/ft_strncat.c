/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 17:01:51 by lvogelsa          #+#    #+#             */
/*   Updated: 2022/05/24 15:38:47 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

//The strncat() functions concatenates the destination string and 
//n characters of the source string, and the result is stored
//in the destination string.

char	*ft_strncat(char *dest, char *src, unsigned int nb);
/*
int	main(void)
{
	char	destination[] = "Shark";
	char	source[] = "Attack";
	int		nb;

	nb = 5;
	ft_strncat(destination, source, nb);
	printf("%s\n", destination);
}*/

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int					len;
	unsigned int		i;
	char				a;

	len = 0;
	while (dest[len])
		len++;
	i = 0;
	while (src[i] && i < nb)
	{
		a = src[i];
		dest[len + i] = a;
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}

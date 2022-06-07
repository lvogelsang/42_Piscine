/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 15:25:42 by lvogelsa          #+#    #+#             */
/*   Updated: 2022/05/30 09:43:07 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//
/*The function strcpy() copies a source string,
including the ending null character,
to the location that is specified by the destination string.*/

char	*ft_strcpy(char *dest, char *src);
/*
int	main(void)
{
	char	destination[] = "Sharks";
	char	source[] = "Penguins";

	ft_strcpy(destination, source);
	printf("%s\n", destination);
}*/

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

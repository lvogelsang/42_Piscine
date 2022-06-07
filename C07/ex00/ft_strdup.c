/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 08:41:49 by lvogelsa          #+#    #+#             */
/*   Updated: 2022/05/30 12:46:44 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

// The function strdup() returns a pointer to a null-terminated string,
// which is a duplicate of the string pointed to by s.
// The memory obtained is done dynamically using malloc and hence it 
// can be freed using free.

char	*ft_strdup(char *src);

char	*ft_strdup(char *src)
{
	int		i;
	char	*duplicate;

	i = 0;
	while (src[i])
	{
		i++;
	}
	duplicate = (char *)malloc(i * sizeof(char));
	if (!duplicate)
	{
		duplicate = NULL;
		return (duplicate);
	}
	else
	{
		i = 0;
		while (src[i])
		{
			duplicate[i] = src[i];
			i++;
		}
		duplicate[i] = '\0';
		return (duplicate);
	}
}
/*
int	main(void)
{
	char	str[] = "Hello world!";

	printf("%s\n", ft_strdup(str));
}*/

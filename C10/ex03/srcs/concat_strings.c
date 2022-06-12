/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   concat_strings.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 10:46:26 by lvogelsa          #+#    #+#             */
/*   Updated: 2022/06/11 10:47:42 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/utils.h"

void	concat_strings(char **dest, char *src, int amount)
{
	int		i;
	int		dest_len;
	char	*tmp;

	dest_len = 0;
	while ((*dest)[dest_len])
		dest_len++;
	tmp = malloc(dest_len + amount + 1);
	if (tmp == NULL)
		return ;
	i = 0;
	while (i < dest_len)
	{
		tmp[i] = (*dest)[i];
		i++;
	}
	i = 0;
	while (i < amount)
	{
		tmp[dest_len + i] = src[i];
		i++;
	}
	tmp[dest_len + i] = '\0';
	free(*dest);
	*dest = tmp;
}

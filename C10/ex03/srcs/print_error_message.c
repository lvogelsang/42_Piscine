/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_error_message.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 10:53:47 by lvogelsa          #+#    #+#             */
/*   Updated: 2022/06/11 10:53:57 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/utils.h"

void	print_error_message(int errcode, char *str)
{
	if (!errcode)
		return ;
	if (errcode < 0)
	{
		print("hexdump: ");
		print(str);
		print(": No such file or directory");
		print("\n");
	}
	if (errcode == -1)
	{
		print("hexdump: ");
		print(str);
		print(": Bad file descriptor");
		print("\n");
	}
}

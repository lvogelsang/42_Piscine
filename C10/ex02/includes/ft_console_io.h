/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_console_io.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 09:01:06 by lvogelsa          #+#    #+#             */
/*   Updated: 2022/06/09 09:01:11 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CONSOLE_IO_H
# define FT_CONSOLE_IO_H

# define IN 0
# define OUT 1
# define ERR 2

void	write_char_to(char c, int fd);

void	write_char_out(char c);

void	write_str_out(char *str);

void	write_char_err(char c);

void	write_str_err(char *str);

#endif

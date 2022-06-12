/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail_out.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 09:02:34 by lvogelsa          #+#    #+#             */
/*   Updated: 2022/06/09 09:02:38 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TAIL_OUT_H
# define FT_TAIL_OUT_H

void	tail_by_lines(int fd);

void	tail_by_byte_count(int fd, unsigned int byte_to_read);

#endif

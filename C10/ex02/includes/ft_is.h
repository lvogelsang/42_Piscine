/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 09:01:27 by lvogelsa          #+#    #+#             */
/*   Updated: 2022/06/09 09:01:30 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_IS_H
# define FT_IS_H

# include <stdbool.h>

bool	ft_is_in_string(char c, char *str);

bool	ft_is_whitespace(char c);

bool	ft_is_number(char c);

#endif

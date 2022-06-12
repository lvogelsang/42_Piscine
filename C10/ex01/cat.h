/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 09:22:20 by lvogelsa          #+#    #+#             */
/*   Updated: 2022/06/07 10:18:59 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include <unistd.h>
# include <fcntl.h>

# define BUF_SIZE 1024

int		ft_display_file(char *file);
void	ft_error(char *str, char *str1);
void	ft_display_stdin(void);
int		ft_file(int argc, char **argv);

#endif

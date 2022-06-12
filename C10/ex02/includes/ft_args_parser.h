/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_args_parser.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 09:00:24 by lvogelsa          #+#    #+#             */
/*   Updated: 2022/06/11 10:24:42 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ARGS_PARSER_H
# define FT_ARGS_PARSER_H

# include <stdbool.h>

# define NOTHING -1
# define ERR_ILL_OPT "illegal option"
# define ERR_ILLEGAL_OFF "illegal offset"
# define ERR_OPT_REQ_ARG "option requires an argument"

typedef struct s_options
{
	int	byte_to_read;
}				t_options;

bool			parse_args(char **args, int count, int index);

bool			process_tail(char **args, int count, int i, t_options *opts);

bool			proc_option(char **args, int count, int *i, t_options *opts);

void			display_usage(char *exec);

void			display_error(char *exec, char *error, char *cause, bool limit);

#endif

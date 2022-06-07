/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 17:41:46 by lvogelsa          #+#    #+#             */
/*   Updated: 2022/05/29 13:36:57 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	create_arr(int tab[4][4]);

int		ft_validation(char *input);

void	ft_print_arr(int arr[4][4]);

int		*get_input(char *str);

int		solve(int tab[4][4], int entry[16], int pos);

int	main(int num_inputs, char **input)
{
	int		tab[4][4];
	int		*entry;

	create_arr(tab);
	entry = get_input(input[1]);
	if (num_inputs != 2 || ft_validation(input[1]) == 0)
	{
		write(1, "Error1\n", 7);
	}
	else if (solve(tab, entry, 0) == 1)
		ft_print_arr(tab);
	else
		write(1, "Error2\n", 7);
	return (0);
}

void	ft_print_arr(int arr[4][4])
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			c = arr[i][j] + '0';
			write(1, &c, 1);
			write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	*get_input(char *str)
{
	int	i;
	int	j;
	int	*tab;

	tab = malloc(sizeof(int) * 16);
	if (tab == 0)
		return (0);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			tab[j] = str[i] - '0';
			j++;
		}
	i++;
	}
	return (tab);
}

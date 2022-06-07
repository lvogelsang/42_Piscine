/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvogelsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 10:50:28 by lvogelsa          #+#    #+#             */
/*   Updated: 2022/05/29 13:12:10 by lvogelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_double(int tab[4][4], int pos, int num);

int	check_case(int tab[4][4], int pos, int entry[16]);

int	check_row_right(int tab[4][4], int pos, int entry[16]);

int	check_row_left(int tab[4][4], int pos, int entry[16]);

int	check_col_down(int tab[4][4], int pos, int entry[16]);

int	check_col_up(int tab[4][4], int pos, int entry[16]);

int	solve(int tab[4][4], int entry[16], int pos)
{
	int	tower;

	if (pos == 16)
		return (1);
	tower = 1;
	while (tower <= 4)
	{
		if (check_double(tab, pos, tower) == 0)
		{
			tab[pos / 4][pos % 4] = tower;
			if (check_case(tab, pos, entry) == 0)
			{
				if (solve(tab, entry, pos + 1) == 1)
					return (1);
			}
			else
				tab[pos / 4][pos % 4] = 0;
		}
		tower++;
	}
	return (0);
}

int	check_case(int tab[4][4], int pos, int entry[16])
{
	if (check_row_left(tab, pos, entry) == 1)
		return (1);
	if (check_row_right(tab, pos, entry) == 1)
		return (1);
	if (check_col_down(tab, pos, entry) == 1)
		return (1);
	if (check_col_up(tab, pos, entry) == 1)
		return (1);
	return (0);
}

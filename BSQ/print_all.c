/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_all.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lniehues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 03:26:46 by lniehues          #+#    #+#             */
/*   Updated: 2019/12/11 18:41:59 by lniehues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_square.h"

void	ft_putmatrix(char **matrix, t_map_params params,
int **matrix_int, char *map)
{
	int	row;
	int	col;

	row = 0;
	while (row < params.lines)
	{
		col = 0;
		while (col < params.cols)
		{
			ft_putchar(matrix[row][col]);
			if (col == (params.cols - 1))
				ft_putchar('\n');
			col++;
		}
		row++;
	}
	ft_putchar('\n');
	free_stuff(matrix, matrix_int, map);
}

void	ft_putmatrix_int(int **matrix_int, t_map_params params)
{
	int	row;
	int	col;

	row = 0;
	while (row < params.lines)
	{
		col = 0;
		while (col < params.cols)
		{
			ft_putnbr(matrix_int[row][col]);
			if (col == (params.cols - 1))
				ft_putchar('\n');
			col++;
		}
		row++;
	}
	ft_putchar('\n');
}

void	print_map_params(t_map_params params)
{
	ft_putstr("Lines: ");
	ft_putnbr(params.lines);
	ft_putchar('\n');
	ft_putstr("Columns: ");
	ft_putnbr(params.cols);
	ft_putchar('\n');
	ft_putstr("Empty: ");
	ft_putchar(params.empty);
	ft_putchar('\n');
	ft_putstr("Obstacle: ");
	ft_putchar(params.obst);
	ft_putchar('\n');
	ft_putstr("Full: ");
	ft_putchar(params.full);
	ft_putchar('\n');
	ft_putchar('\n');
}

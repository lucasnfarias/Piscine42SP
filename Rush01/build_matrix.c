/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build_matrix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lniehues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 19:15:27 by lniehues          #+#    #+#             */
/*   Updated: 2019/12/01 21:55:57 by lniehues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "librushio.h"

void	build_matrix(char **matrix, char *arg)
{
	int		row;

	int		col;

	row_border(matrix, arg);
	col_border(matrix, arg);
	matrix[0][0] = '#';
	matrix[0][5] = '#';
	matrix[5][0] = '#';
	matrix[5][5] = '#';
	row = 1;
	while (row < 5)
	{
		col = 1;
		while (col < 5)
		{
			matrix[row][col] = '~';
			col++;
		}
		row++;
	}
}

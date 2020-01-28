/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_matrix.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lniehues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 22:04:56 by lniehues          #+#    #+#             */
/*   Updated: 2019/12/11 22:09:45 by lniehues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_square.h"

/*
**	@min_three: lógica do indiano do youtube. procurar o maior quadrado
**	de uma matriz. Vê o menor valor ao redor da casa que está (casa da
**	diagonal esquerda superior, casa logo acima e casa logo ao lado) e
**	soma 1 á ele.
**
**	@ft_operate_matrix: procura a partir da segunda linha e segunda coluna,
**	pq a primeira linha e primeira coluna não mudam. Percorre a matriz e faz
**	o método do min_three. Retorna um s_square_par que contém o quadrado com
**	maior tamanho encontrado por último, a linha e coluna que foi encontrado.
**
**	@square_format: coloca o char full nas posições corretas a partir dos params
**	do s_square_par.
**
**	link youtube: https://www.youtube.com/watch?v=_Lf1looyJMU
*/

int					min_three(int a, int b, int c)
{
	if (a == b && a == c)
		return (a + 1);
	else if ((a <= b) && (a <= c))
		return (a + 1);
	else if ((b <= a) && (b <= c))
		return (b + 1);
	else if ((c <= a) && (c <= b))
		return (c + 1);
	return (0);
}

struct s_square_par	ft_operate_matrix(int **matrix_int_map, t_map_params params)
{
	int				i;
	int				j;
	t_square_par	square_params;

	square_params.size = 0;
	i = 1;
	while (i < params.lines)
	{
		j = 1;
		while (j < params.cols)
		{
			if (matrix_int_map[i][j] != 0)
				if ((matrix_int_map[i][j] = min_three(matrix_int_map[i][j - 1]
				, matrix_int_map[i - 1][j], matrix_int_map[i - 1][j - 1])) >
				square_params.size)
				{
					square_params.size = matrix_int_map[i][j];
					square_params.line = i;
					square_params.col = j;
				}
			j++;
		}
		i++;
	}
	return (square_params);
}

void				square_format(int **matrix_int, char **matrix,
t_map_params par)
{
	int				row;
	int				col;
	t_square_par	s_par;

	s_par = ft_operate_matrix(matrix_int, par);
	s_par = ft_test_first(matrix_int, s_par, par);
	row = s_par.line - (s_par.size - 1);
	while (row <= s_par.line)
	{
		col = s_par.col - (s_par.size - 1);
		while (col <= s_par.col)
		{
			matrix[row][col] = par.full;
			col++;
		}
		row++;
	}
}

void				build_calculate_print(char **matrix, int **matrix_int,
char *map, t_map_params par)
{
	build_all(matrix, matrix_int, map, par);
	square_format(matrix_int, matrix, par);
	ft_putmatrix(matrix, par, matrix_int, map);
}

struct s_square_par	ft_test_first(int **m_int, t_square_par s_params,
t_map_params params)
{
	int row;
	int col;

	row = 0;
	col = 0;
	while (col < params.cols)
	{
		if (m_int[row][col] >= s_params.size && (row < s_params.line
		|| (row == s_params.line && col < s_params.col)))
		{
			s_params.size = m_int[row][col];
			s_params.line = row;
			s_params.col = col;
		}
		col++;
	}
	return (s_params);
}

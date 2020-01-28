/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_matrix.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lniehues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 22:04:56 by lniehues          #+#    #+#             */
/*   Updated: 2019/12/11 18:34:02 by lniehues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_square.h"

/*
**  @inicia_matrix: aloca memória para matrix a partir do params que contem
**	o numero de linhas e colunas(params.lines e params.cols).
**	@build_martix: copia os caracteres empty, obstacle e full do map para os
**	lugares similares na matriz.
**	@ft_putmatrix: printa a matrix criada e coloca \n no final.
*/

char	**alloc_m(t_map_params params)
{
	int		i;
	char	**matrix;

	i = 0;
	if (!(matrix = malloc(sizeof(char *) * params.lines)))
		return (NULL);
	while (i < params.lines)
	{
		if (!(matrix[i] = malloc(sizeof(char) * params.cols)))
			return (NULL);
		i++;
	}
	return (matrix);
}

int		**alloc_m_int(t_map_params params)
{
	int		i;
	int		**matrix_int;

	i = 0;
	if (!(matrix_int = malloc(sizeof(int *) * params.lines)))
		return (NULL);
	while (i < params.lines)
	{
		if (!(matrix_int[i] = malloc(sizeof(int) * params.cols)))
			return (NULL);
		i++;
	}
	return (matrix_int);
}

void	build_m_int(int **matrix_int, char **matrix, t_map_params params)
{
	int	row;
	int	col;
	int i;
	int j;

	row = 0;
	i = 0;
	while (row < params.lines)
	{
		col = 0;
		j = 0;
		while (col < params.cols)
		{
			matrix_int[row][col] = convert_mapchar_to_int(matrix[i][j], params);
			col++;
			j++;
		}
		i++;
		row++;
	}
}

void	build_m(char **matrix, char *map, t_map_params params)
{
	int	row;
	int	col;
	int i;

	row = 0;
	i = second_line(map);
	while (row < params.lines)
	{
		col = 0;
		while (col < params.cols)
		{
			if (map[i] != '\n')
				matrix[row][col] = map[i];
			col++;
			i++;
		}
		i++;
		row++;
	}
}

void	build_all(char **matrix, int **matrix_int,
char *map, t_map_params par)
{
	build_m(matrix, map, par);
	build_m_int(matrix_int, matrix, par);
}

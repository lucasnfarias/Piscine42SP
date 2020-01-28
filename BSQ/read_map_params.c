/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lniehues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 17:49:22 by lniehues          #+#    #+#             */
/*   Updated: 2019/12/11 17:47:37 by lniehues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_square.h"

/*
**	@get_map_params: procura os parametros de linhas, colunas e dos
**	caracteres empty, obstacle e full.
**
**	@print_map_params: printa os parametros do mapa.
**
**	@map_rule_check: checa regras para mapas válidos.
**  1- linhas com tamanhos iguais.
**	2- params: line >= 1 e apenas apresentas os caracteres especificados.
**	3- \n no final de cada linha.
**
**	@convert_mapchar_to_int: converte os chars do map (empty, obstacle e full)
**	para int. obstacle = 0 e empty = 1.
**
**	@second_line: retorna o index que começa a segunda linha do arquivo.
**
**	@return_columns: retorna o número de colunas.
*/

struct s_map_params	get_map_params(char *map)
{
	int				i;
	t_map_params	params;

	i = 0;
	while (map[i] != '\n')
		i++;
	params.full = map[i - 1];
	params.obst = map[i - 2];
	params.empty = map[i - 3];
	params.lines = ft_atoi(map, (i - 3));
	params.cols = return_columns(map, params);
	return (params);
}

int					rule_check(char *map, t_map_params params)
{
	int	i;

	i = 0;
	if ((map[0] <= '0' || map[0] > '9') || return_columns(map, params) == 0)
		return (1);
	while (map[i] != '\n')
		i++;
	i++;
	while (map[i])
	{
		if (map[i] != params.empty && map[i] != params.obst &&
		map[i] != params.full && map[i] != '\n')
			return (1);
		i++;
	}
	return (0);
}

int					convert_mapchar_to_int(char c, t_map_params params)
{
	if (c == params.obst)
		return (0);
	if (c == params.empty)
		return (1);
	return (2);
}

int					second_line(char *map)
{
	int i;

	i = 0;
	while (map[i] != '\n')
		i++;
	return (i + 1);
}

int					return_columns(char *map, t_map_params params)
{
	int i;
	int col_total;
	int col_one;

	i = second_line(map);
	col_total = 0;
	while (map[i])
	{
		col_one = 0;
		while (map[i] != '\n')
		{
			col_total++;
			col_one++;
			i++;
		}
		i++;
	}
	if (col_total / params.lines == col_one)
		return (col_one);
	else
		return (0);
}

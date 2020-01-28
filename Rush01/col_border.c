/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   col_border.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lniehues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 19:14:06 by lniehues          #+#    #+#             */
/*   Updated: 2019/12/01 21:54:22 by lniehues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "librushio.h"

void	col_border(char **matrix, char *arg)
{
	int i;
	int x;
	int z;

	i = 1;
	z = 0;
	x = 16;
	while (i < 5)
	{
		matrix[i][z] = arg[x];
		x = x + 2;
		i++;
	}
	i = 1;
	z = 5;
	while (i < 5)
	{
		matrix[i][z] = arg[x];
		x = x + 2;
		i++;
	}
}

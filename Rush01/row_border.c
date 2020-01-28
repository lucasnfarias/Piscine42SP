/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   row_border.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lniehues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 19:15:00 by lniehues          #+#    #+#             */
/*   Updated: 2019/12/01 21:55:05 by lniehues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "librushio.h"

void	row_border(char **matrix, char *arg)
{
	int		i;
	int		x;
	int		z;

	i = 0;
	z = 1;
	x = 0;
	while (z < 5)
	{
		matrix[i][z] = arg[x];
		x = x + 2;
		z++;
	}
	i = 5;
	z = 1;
	while (z < 5)
	{
		matrix[i][z] = arg[x];
		x = x + 2;
		z++;
	}
}

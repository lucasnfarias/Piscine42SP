/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmatrix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lniehues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 19:23:05 by lniehues          #+#    #+#             */
/*   Updated: 2019/12/01 22:06:59 by lniehues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "librushio.h"

void	ft_putmatrix(char **matrix)
{
	unsigned int	row;

	unsigned int	col;

	row = 0;
	col = 0;
	while (row < 6)
	{
		while (col < 6)
		{
			ft_putchar(matrix[row][col]);
			if (col == 5)
				ft_putchar('\n');
			else
				ft_putchar(' ');
			col++;
		}
		col = 0;
		row++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lniehues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 18:49:06 by lniehues          #+#    #+#             */
/*   Updated: 2019/12/12 17:27:44 by lniehues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int *matrix;
	int len;

	len = 0;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	if (!(matrix = (int*)malloc(sizeof(int) * (max - min))))
		return (-1);
	while (min <= max - 1)
	{
		matrix[len] = min++;
		len++;
	}
	*range = matrix;
	return (len);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lniehues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 18:18:47 by lniehues          #+#    #+#             */
/*   Updated: 2019/12/12 17:24:47 by lniehues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*matrix;

	if (min >= max)
	{
		matrix = NULL;
		return (matrix);
	}
	if (!(matrix = malloc(sizeof(int) * (max - min))))
		return (NULL);
	while (min <= max - 1)
	{
		matrix[max - min - 1] = min;
		min++;
	}
	return (matrix);
}

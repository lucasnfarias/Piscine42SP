/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inicia_matrix.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lniehues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 19:12:37 by lniehues          #+#    #+#             */
/*   Updated: 2019/12/01 21:45:49 by lniehues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "librushio.h"

char	**inicia_matrix(void)
{
	int		i;
	char	**matrix;

	i = 0;
	if (!(matrix = malloc(sizeof(char *) * 6)))
		return (NULL);
	while (i < 6)
	{
		if (!(matrix[i] = malloc(sizeof(char) * 6)))
			return (NULL);
		i++;
	}
	return (matrix);
}

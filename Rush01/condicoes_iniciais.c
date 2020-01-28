/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   condicoes_iniciais.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lniehues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 18:24:52 by lniehues          #+#    #+#             */
/*   Updated: 2019/12/01 22:21:32 by lniehues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	condicoes_iniciais(int varc, char *varv)
{
	unsigned int i;

	i = 0;
	if (varc != 2)
		return (1);
	while (varv[i] != '\0')
	{
		if ((varv[i] >= '1' && varv[i] <= '4') || varv[i] == ' ')
		{
			if ((i % 2 != 0 && varv[i] != ' ') || (i % 2 == 0 && varv[i] == ' '))
				return (1);
			i++;
		}
		else
			return (1);
	}
	if (i != 31)
		return (1);
	return (0);
}

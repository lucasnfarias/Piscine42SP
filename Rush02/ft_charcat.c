/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_charcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lniehues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 21:29:57 by lniehues          #+#    #+#             */
/*   Updated: 2019/12/08 19:13:14 by lniehues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rushio_two.h"

char	*ft_charcat(char c, char d)
{
	char *str;

	if (d == 'z')
	{
		str = malloc(sizeof(char) * 3);
		str[0] = c;
		str[1] = '0';
		str[2] = '\0';
	}
	else
	{
		str = malloc(sizeof(char) * 3);
		str[0] = c;
		str[1] = d;
		str[2] = '\0';
	}
	free(str);
	return (str);
}

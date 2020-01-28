/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lniehues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 20:10:54 by lniehues          #+#    #+#             */
/*   Updated: 2019/12/08 16:55:52 by lniehues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rushio_two.h"

char	*ft_strchar(char *str, char to_find)
{
	unsigned int i;

	i = 0;
	if (to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find)
		{
			str = &str[i];
			return (str);
		}
		else
			i++;
	}
	return (0);
}

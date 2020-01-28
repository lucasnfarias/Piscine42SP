/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lniehues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 19:26:05 by lniehues          #+#    #+#             */
/*   Updated: 2019/12/08 16:57:53 by lniehues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rushio_two.h"

unsigned int g_i;

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int z;

	g_i = 0;
	z = 0;
	if (*to_find == '\0')
		return (str);
	while (str[g_i] != '\0')
	{
		if (str[g_i] == to_find[z])
		{
			g_i++;
			z++;
		}
		else
		{
			g_i++;
			z = 0;
		}
		if (to_find[z] == '\0')
		{
			str = &str[g_i - z];
			return (str);
		}
	}
	return ("0");
}

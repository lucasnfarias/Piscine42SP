/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lniehues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 18:32:02 by lniehues          #+#    #+#             */
/*   Updated: 2019/11/30 11:42:02 by lniehues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int g_i;

char	*ft_strcat(char *dest, char *src)
{
	unsigned int size;

	size = 0;
	while (dest[size] != '\0')
		size++;
	g_i = 0;
	while (src[g_i] != '\0')
	{
		dest[size] = src[g_i];
		g_i++;
		size++;
	}
	dest[size] = '\0';
	return (dest);
}

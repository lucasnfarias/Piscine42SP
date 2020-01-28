/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lniehues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 19:12:31 by lniehues          #+#    #+#             */
/*   Updated: 2019/11/29 20:34:39 by lniehues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int g_i;

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int size;

	size = 0;
	while (dest[size] != '\0')
		size++;
	g_i = 0;
	while (src[g_i] != '\0' && g_i < nb)
	{
		dest[size] = src[g_i];
		g_i++;
		size++;
	}
	dest[size] = '\0';
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lniehues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 16:16:15 by lniehues          #+#    #+#             */
/*   Updated: 2019/11/28 16:41:13 by lniehues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int g_i;

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int count;

	count = 0;
	while (src[count] != '\0')
		++count;
	g_i = 0;
	while (g_i < size - 1 && src[g_i] != '\0')
	{
		dest[g_i] = src[g_i];
		++g_i;
	}
	dest[g_i] = '\0';
	return (count);
}

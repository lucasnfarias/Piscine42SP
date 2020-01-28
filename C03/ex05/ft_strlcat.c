/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lniehues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 19:46:31 by lniehues          #+#    #+#             */
/*   Updated: 2019/12/02 16:05:15 by lniehues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i += 1;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;
	unsigned int	count;

	i = 0;
	len = 0;
	count = ft_strlen(src) + size;
	while (dest[len] && len < size)
		len++;
	while (i < size)
	{
		dest[len] = src[i];
		len++;
		i++;
	}
	dest[len] = '\0';
	return (count);
}

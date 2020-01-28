/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lniehues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 19:42:46 by lniehues          #+#    #+#             */
/*   Updated: 2019/12/12 17:34:36 by lniehues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		++len;
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*args;
	int		i;
	int		j;
	int		o;
	int		h;

	args = malloc((size + ft_strlen(sep)) * sizeof(char));
	i = 0;
	o = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			args[o++] = strs[i][j++];
		if ((i + 1) < size)
		{
			h = 0;
			while (sep[h])
				args[o++] = sep[h++];
		}
		i++;
	}
	args[o] = '\0';
	return (args);
}

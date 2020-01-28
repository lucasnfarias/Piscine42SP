/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_props.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lniehues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 15:51:49 by lniehues          #+#    #+#             */
/*   Updated: 2019/12/10 17:56:25 by lniehues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_square.h"

/*
** Funções que trabalham com as propriedades de string!
** Imprimir caracter, string, descobrir tamanho, copiar
*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		ft_putchar(str[i++]);
}

int		ft_strlen(char *str)
{
	unsigned int count;

	if (!str)
		return (0);
	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while ((i < n) && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

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

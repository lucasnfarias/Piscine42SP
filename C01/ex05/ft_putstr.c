/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lniehues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 01:00:45 by lniehues          #+#    #+#             */
/*   Updated: 2019/11/27 02:12:42 by lniehues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int g_count;

void	ft_putstr(char *str)
{
	g_count = 0;
	while (str[g_count] + '\0')
	{
		ft_putchar(str[g_count]);
		g_count++;
	}
}

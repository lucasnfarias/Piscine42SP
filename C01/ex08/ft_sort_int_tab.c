/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lniehues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 14:47:13 by lniehues          #+#    #+#             */
/*   Updated: 2019/11/27 15:49:32 by lniehues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int g_i;

int g_numtemp;

void	ft_sort_int_tab(int *tab, int size)
{
	g_i = 0;
	while (g_i < size - 1)
	{
		if (tab[g_i] > tab[g_i + 1])
		{
			g_numtemp = tab[g_i + 1];
			tab[g_i + 1] = tab[g_i];
			tab[g_i] = g_numtemp;
			g_i = 0;
		}
		else
			g_i++;
	}
}

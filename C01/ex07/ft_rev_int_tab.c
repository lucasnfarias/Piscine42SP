/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lniehues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 02:19:36 by lniehues          #+#    #+#             */
/*   Updated: 2019/11/27 15:46:17 by lniehues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int g_i;

int g_z;

int	ft_rev_int_tab(int *tab, int size)
{
	int rev[size];

	g_i = 0;
	g_z = size - 1;
	while (g_i < size)
	{
		rev[g_i] = tab[g_z];
		g_z--;
		g_i++;
	}
	g_i = 0;
	while (g_i < size)
	{
		*(tab + g_i) = rev[g_i];
		g_i++;
	}
	return (*(tab + 3));
}

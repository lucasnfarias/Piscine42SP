/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lniehues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 16:21:48 by lniehues          #+#    #+#             */
/*   Updated: 2019/12/12 16:53:03 by lniehues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

void	ft_show_tab(struct s_stock_str *par);

int main(int argc, char **argv)
{
	t_stock_str *res;

	res = ft_strs_to_tab(argc, argv);
	ft_show_tab(res);
	free(res);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lniehues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 16:21:48 by lniehues          #+#    #+#             */
/*   Updated: 2019/12/12 01:31:20 by lniehues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	int i;
	t_stock_str *res;

	i = 0;
	res = ft_strs_to_tab(argc, argv);
	while (i < argc)
	{
		printf("size: %d str: %s copy: %s\n", res[i].size, res[i].str, res[i].copy);
		i++;
	}
	printf("ultimo str: %s", res[i].str);
	return (0);
}

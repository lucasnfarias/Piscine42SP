/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lniehues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 18:24:33 by lniehues          #+#    #+#             */
/*   Updated: 2019/12/01 21:55:34 by lniehues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "librushio.h"

int	main(int argc, char **argv)
{
	char **matrix;

	if (condicoes_iniciais(argc, argv[1]))
	{
		ft_putstr("Error\n");
		return (0);
	}
	if (!(matrix = inicia_matrix()))
	{
		ft_putstr("Error\n");
		return (0);
	}
	build_matrix(matrix, argv[1]);
	ft_putmatrix(matrix);
	free_mem(matrix);
	return (0);
}

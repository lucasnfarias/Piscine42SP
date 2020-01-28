/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lniehues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 12:30:55 by lniehues          #+#    #+#             */
/*   Updated: 2019/12/11 22:08:04 by lniehues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "bsq_square.h"

int	print_error(void)
{
	ft_putstr("map error\n");
	return (0);
}

int	main(int argc, char **argv)
{
	char			*map;
	char			**m_map;
	int				i;
	int				**mint_map;
	t_map_params	m_par;

	i = 1;
	if (argc == 1)
		return (read_build_stdin(0, 8000));
	while (argv[i])
	{
		map = open_read_file(argv[i++]);
		m_par = get_map_params(map);
		if (rule_check(map, m_par))
			print_error();
		else if (!(m_map = alloc_m(m_par)) ||
		!(mint_map = alloc_m_int(m_par)))
			print_error();
		else
			build_calculate_print(m_map, mint_map, map, m_par);
	}
	return (0);
}

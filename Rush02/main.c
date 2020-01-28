/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lniehues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 12:30:55 by lniehues          #+#    #+#             */
/*   Updated: 2019/12/08 21:52:50 by lniehues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "rushio_two.h"

int	condicoes_iniciais(int num, char *value, int len)
{
	if (num != 2)
		return (0);
	if (!(ft_str_is_numeric(value)))
		return (0);
	if (len > 39)
		return (0);
	if (value[0] == '0' && (value[1] >= '0' && value[1] <= '9'))
		return (0);
	return (1);
}

int	print_error(void)
{
	ft_putstr("Error\n");
	return (0);
}

int	main(int argc, char **argv)
{
	char	*list_words;
	int		len;
	char	*len_zeros;
	int		len_z;

	len = ft_strlen(argv[1]);
	if (!(condicoes_iniciais(argc, argv[1], len)))
		return (print_error());
	list_words = open_read_file();
	len_zeros = create_strzeros(len);
	len_z = ft_strlen(len_zeros);
	if (len % 3 == 0)
		print_complete_three(list_words, argv[1], len_zeros, len_z);
	else if (len % 3 == 2)
		print_complete_two(list_words, argv[1], len_zeros, len_z);
	else if (len == 1)
		print_word(argv[1], 'a', list_words);
	else if (len % 3 == 1)
		print_complete_one(list_words, argv[1], len_zeros, len_z);
	ft_putchar('\n');
	free(list_words);
	if (len_zeros[0] != '0')
		free(len_zeros);
	return (0);
}

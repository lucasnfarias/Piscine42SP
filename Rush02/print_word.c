/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lniehues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 17:46:23 by lniehues          #+#    #+#             */
/*   Updated: 2019/12/08 21:52:04 by lniehues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rushio_two.h"

void	print_decrement(char *value, char *list, int n, int len_zeros)
{
	char	*word;
	char	*val;
	int		i;

	i = 0;
	val = malloc(sizeof(char) * len_zeros);
	while (i < n)
	{
		val[i] = value[i];
		i++;
	}
	val[i] = '\0';
	word = ft_strstr(list, val);
	while (word[i] != '\n')
	{
		if ((word[i] >= 'a' && word[i] <= 'z') ||
			(word[i] >= 'A' && word[i] <= 'Z'))
			ft_putchar(word[i]);
		i++;
	}
	ft_putstr(" ");
	free(val);
}

void	print_word(char *value, char val_c, char *list)
{
	char	*word;
	int		i;

	i = 0;
	if (val_c == 'a')
		word = ft_strstr(list, value);
	else
		word = ft_strchar(list, val_c);
	while (word[i] != '\n')
	{
		if ((word[i] >= 'a' && word[i] <= 'z') ||
			(word[i] >= 'A' && word[i] <= 'Z'))
			ft_putchar(word[i]);
		i++;
	}
	ft_putstr(" ");
}

void	three_digits_convert(char *value, int x, int y, int z)
{
	char	*list;

	list = open_read_file();
	if (value[x] != '0')
	{
		print_word(value, value[x], list);
		print_word("100", 'a', list);
	}
	if (value[y] == '1')
		print_word(ft_charcat(value[y], value[y + 1]), 'a', list);
	else if (value[y] != '0')
		print_word(ft_charcat(value[y], 'z'), 'a', list);
	if (value[y] != '1' && value[z] != '0')
		print_word(value, value[z], list);
	free(list);
}

void	two_digits_convert(char *list, char *value, int x, int y)
{
	if (value[x] == '1')
		print_word(ft_charcat(value[x], value[x + 1]), 'a', list);
	else if (value[x] != '0')
		print_word(ft_charcat(value[x], 'z'), 'a', list);
	if (value[x] != '1' && value[y] != '0')
		print_word(value, value[y], list);
}

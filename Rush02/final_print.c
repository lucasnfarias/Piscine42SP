/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   final_print.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lniehues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 07:06:31 by lniehues          #+#    #+#             */
/*   Updated: 2019/12/08 22:25:42 by lniehues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rushio_two.h"

void	print_complete_three(char *list, char *value, char *len_zeros, int len)
{
	int x;
	int y;
	int z;
	int zeros;

	x = 0;
	zeros = len;
	while (value[x] != '\0')
	{
		y = x + 1;
		z = x + 2;
		three_digits_convert(value, x, y, z);
		if (zeros >= 4 && (value[x] != '0' || value[y] != '0' ||
		value[z] != '0'))
			print_decrement(len_zeros, list, zeros, len);
		x += 3;
		zeros = zeros - 3;
	}
}

void	print_complete_two(char *list, char *value, char *len_zeros, int len)
{
	int x;
	int y;
	int z;
	int zeros;

	x = 0;
	z = 1;
	y = z - 1;
	zeros = len;
	while (value[x] != '\0')
	{
		if (y == 0)
			two_digits_convert(list, value, y, z);
		else
			three_digits_convert(value, x, y, z);
		if (zeros >= 4 && (value[x] != '0' || value[y] != '0' ||
		value[z] != '0'))
			print_decrement(len_zeros, list, zeros, len);
		z += 3;
		x = z - 2;
		y = z - 1;
		zeros = zeros - 3;
	}
}

void	print_complete_one(char *list, char *value, char *len_zeros, int len)
{
	int x;
	int y;
	int z;
	int zeros;

	x = 0;
	y = 0;
	z = 0;
	zeros = len;
	while (value[x] != '\0')
	{
		x = z - 2;
		y = z - 1;
		if (z == 0)
			print_word(value, value[z], list);
		else
			three_digits_convert(value, x, y, z);
		if (zeros >= 4 && (value[x] != '0' || value[y] != '0' ||
		value[z] != '0'))
			print_decrement(len_zeros, list, zeros, len);
		z += 3;
		x = z - 2;
		y = z - 1;
		zeros = zeros - 3;
	}
}

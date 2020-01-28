/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_initial_value.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lniehues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 22:44:05 by lniehues          #+#    #+#             */
/*   Updated: 2019/12/09 14:12:37 by lniehues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rushio_two.h"

char	*create_strzeros(int len)
{
	char	*str;
	int		i;
	int		len_zeros;

	i = 1;
	len_zeros = thousand_to_qui(len);
	if (len_zeros == 0)
		len_zeros = sex_to_undec(len);
	if (len_zeros == 0)
		return ("0");
	str = malloc((sizeof(char) * len_zeros) + 1);
	str[0] = '1';
	while (i < len_zeros)
		str[i++] = '0';
	str[i] = '\0';
	return (str);
}

int		thousand_to_qui(int len)
{
	int	len_zeros;

	if (len >= 4 && len <= 6)
		len_zeros = 4;
	else if (len >= 7 && len <= 9)
		len_zeros = 7;
	else if (len >= 10 && len <= 12)
		len_zeros = 10;
	else if (len >= 13 && len <= 15)
		len_zeros = 13;
	else if (len >= 16 && len <= 18)
		len_zeros = 16;
	else if (len >= 19 && len <= 21)
		len_zeros = 19;
	else
		return (0);
	return (len_zeros);
}

int		sex_to_undec(int len)
{
	int	len_zeros;

	if (len >= 22 && len <= 24)
		len_zeros = 22;
	else if (len >= 25 && len <= 27)
		len_zeros = 25;
	else if (len >= 28 && len <= 30)
		len_zeros = 28;
	else if (len >= 31 && len <= 33)
		len_zeros = 31;
	else if (len >= 34 && len <= 36)
		len_zeros = 34;
	else if (len >= 37 && len <= 39)
		len_zeros = 37;
	else
		return (0);
	return (len_zeros);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_is_numeric.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lniehues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 18:10:16 by lniehues          #+#    #+#             */
/*   Updated: 2019/12/11 05:49:59 by lniehues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_square.h"

/*
** - ft_putnbr: traduz o int em char;
** - ft_atoi: ele lê o char até certo ponto e transforma em int.
*/

int		ft_char_is_numeric(char c)
{
	if (c == '\0')
		return (0);
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

void	ft_putnbr(int nb)
{
	int	size;
	int	temp;

	nb == -2147483648 ? write(1, "-2147483648", 11) : 0;
	size = 1;
	if (nb < 0 && nb != -2147483648)
	{
		ft_putchar('-');
		nb = -nb;
	}
	temp = nb;
	while ((temp /= 10) > 0 && nb != -2147483648)
		size *= 10;
	temp = nb;
	while ((size) && nb != -2147483648)
	{
		ft_putchar((char)((temp / size)) + 48);
		temp %= size;
		size /= 10;
	}
}

int		ft_atoi(char *str, int n)
{
	int i;
	int base;

	i = 0;
	base = 0;
	if (!str[i])
		return (0);
	while (i < n)
		base = (base * 10) + (str[i++] - '0');
	return (base);
}

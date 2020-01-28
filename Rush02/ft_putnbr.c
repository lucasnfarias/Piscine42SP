/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lniehues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 00:20:37 by lniehues          #+#    #+#             */
/*   Updated: 2019/12/08 01:32:01 by lniehues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "rushio_two.h"

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

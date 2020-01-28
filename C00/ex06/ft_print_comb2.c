/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lniehues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 19:53:03 by lniehues          #+#    #+#             */
/*   Updated: 2019/11/28 22:11:55 by lniehues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int n)
{
	write(1, &n, 1);
}

void	ft_print_comb2(void)
{
	int num;

	int ero;

	num = 0;
	while (num <= 98)
	{
		ero = num + 1;
		while (ero <= 99)
		{
			ft_putchar((char)(num / 10 + '0'));
			ft_putchar((char)(num % 10 + '0'));
			ft_putchar(' ');
			ft_putchar((char)(ero / 10 + '0'));
			ft_putchar((char)(ero % 10 + '0'));
			if (!(num == 98))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			ero++;
		}
		num++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lniehues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 16:15:43 by lniehues          #+#    #+#             */
/*   Updated: 2019/12/03 18:34:28 by lniehues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		check_base_error(char *base)
{
	int		i;
	int		z;

	i = 0;
	z = 0;
	if (base[0] == '\0' || !base[1])
		return (1);
	while (base[i] != '\0')
	{
		z = i + 1;
		while (base[z])
			if (base[i] == base[z++])
				return (1);
		if (base[i] == '+' || base[i] == '-')
			return (1);
		i++;
	}
	return (0);
}

int		ft_is_negative(int nbr)
{
	if (nbr < 0)
		nbr = -nbr;
	return (nbr);
}

void	convert_to_base(int nbr, char *base, unsigned int len)
{
	unsigned int	num;

	if (nbr < 0)
		ft_putchar('-');
	num = ft_is_negative(nbr);
	if (num >= len)
		convert_to_base(ft_is_negative(num / len), base, len);
	ft_putchar(base[num % len]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				temp;
	unsigned int	len;

	len = 0;
	while (base[len] != '\0')
		len++;
	if (check_base_error(base))
	{
		write(1, "Error\n", 6);
		return ;
	}
	temp = nbr;
	convert_to_base(temp, base, len);
}

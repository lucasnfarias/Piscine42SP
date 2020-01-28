/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lniehues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 12:18:37 by lniehues          #+#    #+#             */
/*   Updated: 2019/12/03 18:20:08 by lniehues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int i;
	int sinal;
	int base;

	i = 0;
	sinal = 2;
	base = 0;
	if (!str[i])
		return (0);
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		str[i] == '-' ? sinal++ : 0;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		base = (base * 10) + (str[i++] - '0');
	if (sinal % 2 == 0)
		sinal = 1;
	else
		sinal = -1;
	return (base * sinal);
}

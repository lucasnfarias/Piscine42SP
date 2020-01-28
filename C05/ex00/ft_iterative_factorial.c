/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lniehues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 20:19:54 by lniehues          #+#    #+#             */
/*   Updated: 2019/12/05 20:20:13 by lniehues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int resultado;

	i = 1;
	resultado = 1;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb > 0)
	{
		while (i < nb)
			resultado = resultado * (i++ + 1);
	}
	return (resultado);
}

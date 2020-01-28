/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lniehues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 14:56:34 by lniehues          #+#    #+#             */
/*   Updated: 2019/12/03 18:42:36 by lniehues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_in_base(char *str, char to_find)
{
	unsigned int	z;
	unsigned int	i;

	i = 0;
	z = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find)
			return (i);
		else
			i++;
	}
	return (-2);
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
		if ((base[i] >= '\t' && base[i] <= '\r') || base[i] == ' ')
			return (1);
		i++;
	}
	return (0);
}

int		ft_isspace_signal(char *str, int *signal)
{
	int		i;
	int		sinal;

	i = 0;
	sinal = 2;
	signal = &sinal;
	if (!str[i])
		return (0);
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		str[i] == '-' ? sinal++ : 0;
		i++;
	}
	if (sinal % 2 == 0)
		*signal = 1;
	else
		*signal = -1;
	return (i);
}

int		convert_to_int(char *str, char *base, int len_base, int *signal)
{
	int	num;
	int	i;
	int b;
	int len_str;

	len_str = 0;
	i = ft_isspace_signal(str, signal);
	num = 0;
	while (str[i] != '\0')
	{
		len_str++;
		i++;
	}
	i = ft_isspace_signal(str, signal);
	while (str[i] != '\0' && ft_str_in_base(base, str[i + 1]) != -2)
	{
		b = ft_str_in_base(base, str[i]);
		num = num + b * (len_base * (len_str - 1));
		i++;
	}
	b = ft_str_in_base(base, str[i]);
	num = num + b * (len_base * (len_str - 1));
	return (num);
}

int		ft_atoi_base(char *str, char *base)
{
	int num;
	int *sinal;
	int i;
	int len_base;

	i = 1;
	sinal = &i;
	if (check_base_error(base))
		return (0);
	len_base = 0;
	while (base[len_base] != '\0')
		len_base++;
	num = convert_to_int(str, base, len_base, sinal);
	return (num * (*sinal));
}

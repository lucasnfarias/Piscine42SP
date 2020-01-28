/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lniehues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 15:38:02 by lniehues          #+#    #+#             */
/*   Updated: 2019/11/28 16:12:07 by lniehues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcaptalize(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[0] != '\0' && i == 0)
				str[i] = str[i] - 32;
			else
			{
				if (str[i - 1] == ' ' || str[i - 1] == '-' || str[i - 1] == '+')
					str[i] = str[i] - 32;
			}
		}
		i++;
		if (str[i] != '\0' && str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
	}
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lniehues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 16:42:37 by lniehues          #+#    #+#             */
/*   Updated: 2019/12/12 01:49:31 by lniehues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H

#include <unistd.h>
#include <stdlib.h>

typedef struct s_stock_str
{
	int size;
	char *str;
	char *copy;
}	t_stock_str;

char	*ft_strdup(char *src);

int		ft_strlen(char *str);

struct	s_stock_str *ft_strs_to_tab(int ac, char **av);

void    ft_show_tab(struct s_stock_str *par);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   librushio.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lniehues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 12:56:46 by lniehues          #+#    #+#             */
/*   Updated: 2019/12/01 19:56:39 by lniehues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBRUSHIO_H
# define LIBRUSHIO_H

# include <unistd.h>
# include <stdlib.h>

void		ft_putchar(char c);

void		ft_putstr(char *str);

int			condicoes_iniciais(int varc, char *varv);

char		**inicia_matrix(void);

void		free_mem(char **matrix);

void		col_border(char **matrix, char *arg);

void		row_border(char **matrix, char *arg);

void		build_matrix(char **matrix, char *arg);

void		ft_putmatrix(char **matrix);

#endif

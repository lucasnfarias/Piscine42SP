/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rushio_two.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lniehues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 14:20:33 by lniehues          #+#    #+#             */
/*   Updated: 2019/12/08 20:06:16 by lniehues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSHIO_TWO_H
# define RUSHIO_TWO_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

int		condicoes_iniciais(int num, char *value, int len);

int		print_error(void);

int		ft_str_is_alpha(char *str);

int		ft_str_is_numeric(char *str);

int		ft_strlen(char *str);

void	ft_putnbr(int nb);

void	ft_putstr(char *str);

void	ft_putchar(char c);

char	*open_read_file();

char	*ft_strstr(char *str, char *to_find);

char	*ft_strchar(char *str, char to_find);

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_charcat(char c, char d);

void	print_word(char *value, char val_c, char *list);

void	three_digits_convert(char *value, int x, int y, int z);

void	two_digits_convert(char *list, char *value, int x, int y);

void	print_complete_three(char *list, char *value, char *len_zeros, int len);

void	print_complete_two(char *list, char *value, char *len_zeros, int len);

void	print_decrement(char *value, char *list, int n, int len_zeros);

void	print_complete_one(char *list, char *value, char *len_zeros, int len);

char	*create_strzeros(int len);

int		thousand_to_qui(int len);

int		sex_to_undec(int len);

#endif

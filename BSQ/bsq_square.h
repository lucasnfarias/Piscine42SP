/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_square.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lniehues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 15:40:34 by lniehues          #+#    #+#             */
/*   Updated: 2019/12/11 22:08:21 by lniehues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_SQUARE_H
# define BSQ_SQUARE_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

typedef struct		s_map_params
{
	int				lines;
	int				cols;
	char			empty;
	char			obst;
	char			full;
}					t_map_params;

typedef struct		s_square_par
{
	int				size;
	int				line;
	int				col;
}					t_square_par;

int					convert_mapchar_to_int(char c, t_map_params params);

int					rule_check(char *map, t_map_params params);

int					print_error(void);

int					ft_char_is_numeric(char c);

int					ft_atoi(char *str, int n);

int					ft_strlen(char *str);

void				ft_putnbr(int nb);

void				ft_putchar(char c);

void				ft_putstr(char *str);

char				*open_read_file();

char				*ft_strstr(char *str, char *to_find);

char				*ft_strchar(char *str, char to_find);

struct s_map_params	get_map_params(char *map);

void				print_map_params(t_map_params map_params);

char				**alloc_m(t_map_params params);

int					**alloc_m_int(t_map_params params);

void				build_m(char **matrix, char *map, t_map_params params);

void				build_m_int(int **matrix_int, char **matrix,
t_map_params params);

void				build_all(char **matrix, int **matrix_int,
char *map, t_map_params par);

void				ft_putmatrix(char **matrix, t_map_params params,
int **matrix_int, char *map);

void				ft_putmatrix_int(int **matrix_int, t_map_params params);

int					second_line(char *map);

int					return_columns(char	*map, t_map_params params);

void				free_stuff(char **matrix, int **matrix_int, char *map);

struct s_square_par ft_operate_matrix(int **matrix_int_map,
t_map_params params);

int					min_three(int a, int b, int c);

void				square_format(int **matrix_int, char **matrix,
t_map_params par);

int					read_build_stdin(int fd, int buf_size);

void				build_calculate_print(char **matrix, int **matrix_int,
char *map, t_map_params par);

struct s_square_par	ft_test_first(int **m_int, t_square_par s_params,
t_map_params params);

#endif

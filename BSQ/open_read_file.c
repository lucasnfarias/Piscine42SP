/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_manipulation.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lniehues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 15:54:49 by lniehues          #+#    #+#             */
/*   Updated: 2019/12/11 22:08:42 by lniehues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_square.h"

/*
** Função que utiliza, primeiramente, open, read e close para saber
** o tamanho do map passado e depois utiliza novamente em conjunto c/
** malloc para alocar memória suficiente para copiar o map.
**
** VER o standard quando argc = 1. STDIN!!!
*/

char	*open_read_file(char *map)
{
	int		fd;
	int		ret;
	int		i;
	char	*buf;
	char	c;

	i = 0;
	ret = 1;
	fd = open(map, O_RDONLY, 0666);
	while ((ret = read(fd, &c, 1)) > 0)
		i++;
	close(fd);
	fd = open(map, O_RDONLY, 0666);
	buf = (char*)malloc(i);
	i = read(fd, buf, i);
	buf[i] = '\0';
	close(fd);
	return (buf);
}

int		read_build_stdin(int fd, int buf_size)
{
	char	*buf;
	int		i;

	buf = malloc(buf_size);
	i = read(fd, buf, buf_size);
	buf[i] = '\0';
	ft_putstr(buf);
	free(buf);
	return (0);
}

void	free_stuff(char **matrix, int **matrix_int, char *map)
{
	free(matrix);
	free(matrix_int);
	free(map);
}

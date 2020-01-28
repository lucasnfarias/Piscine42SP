/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_manipulation.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lniehues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 15:54:49 by lniehues          #+#    #+#             */
/*   Updated: 2019/12/08 22:12:03 by lniehues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rushio_two.h"

char	*open_read_file(void)
{
	int		fd;
	int		ret;
	char	*buf;

	buf = malloc((sizeof(char) * 1000) + 1);
	fd = open("numbers.dict", O_RDONLY, 0666);
	ret = read(fd, buf, 1000);
	buf[ret] = '\0';
	close(fd);
	return (buf);
}

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lniehues <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/07 14:20:08 by lniehues          #+#    #+#              #
#    Updated: 2020/01/20 11:07:51 by lniehues         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#      **********VER RELINK E WILDCARDS**********

NAME = bsq #nome do executavel

SOURCE = print_all.c ft_num_props.c ft_strs_props.c make_matrix.c open_read_file.c operate_matrix.c read_map_params.c

OBJ = print_all.o ft_num_props.o ft_strs_props.o make_matrix.o open_read_file.o operate_matrix.o read_map_params.o

all: $(NAME)

$(NAME):
		gcc -Wall -Wextra -Werror $(SOURCE) main.c -o $(NAME)

clean:	
		rm -f  $(OBJ) main.o

fclean:	clean
		rm -f $(NAME)

re: fclean all 

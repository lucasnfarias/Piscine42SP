# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lniehues <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/07 14:20:08 by lniehues          #+#    #+#              #
#    Updated: 2019/12/10 14:10:12 by lniehues         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#testando o makefile


NAME = rush-02 #nome do executavel

SOURCE1 = final_print.c ft_charcat.c ft_putnbr.c ft_putstr.c open_read_file.c print_word.c sort_initial_value.c

SOURCE2 = ft_str_is_numeric.c ft_strchar.c ft_strlen.c ft_strncpy.c ft_strstr.c

OBJ1 = final_print.o ft_charcat.o ft_putnbr.o ft_putstr.o open_read_file.o print_word.o sort_initial_value.o

OBJ2 = ft_str_is_numeric.o ft_strchar.o ft_strlen.o ft_strncpy.o ft_strstr.o

all: $(NAME)

$(NAME):
		gcc -Wall -Wextra -Werror $(SOURCE1) $(SOURCE2) main.c -o $(NAME)

clean:	
		rm -f $(OBJ1) $(OBJ2) main.o

fclean:	clean
		rm -f $(NAME)

re: fclean all 

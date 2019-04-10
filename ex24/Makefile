# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mvlad <mvlad@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/31 17:51:42 by bruteflow         #+#    #+#              #
#    Updated: 2019/04/10 10:54:32 by mvlad            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

OUT = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

INCLUDES = includes/

all: $(NAME)

$(NAME):
    gcc -Wall -Wextra -Werror -c ./srcs/ft_*.c -I $(INCLUDES)
    ar rc $(NAME) $(OUT)
    ranlib $(NAME)

clean:
    /bin/rm -f $(OUT)

fclean: clean
    /bin/rm -f $(NAME)

re: fclean all
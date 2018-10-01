# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: thperchi <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/10/01 16:14:20 by thperchi     #+#   ##    ##    #+#        #
#    Updated: 2018/10/01 16:14:21 by thperchi    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c\
srcs/ft_swap.c

SRCO = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

INC = includes

all : $(NAME)

$(NAME):
	gcc -I $(INC) -Wall -Wextra -Werror -c $(SRC)
	ar rc $(NAME) $(SRCO)
	ranlib $(NAME)

clean:
	/bin/rm -rf $(SRCO)

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all

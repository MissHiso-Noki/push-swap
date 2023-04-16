# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/26 15:48:01 by ccoste            #+#    #+#              #
#    Updated: 2023/04/16 03:04:27 by ccoste           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nom de l'archive
CC 		= cc
CFLAGS 	= -Wall -Wextra -Werror
NAME 	= push_swap

SRC_PATH = source/
OBJ_PATH = objet_o/

# Les fichiers de .c
SRC = main.c \
	node.c \
	mv_reverse_rotate.c \
	mv_rotate.c \
	mv_swap.c \
	check.c \
	utils.c \
	mv_push.c \
	sort_tiny.c \
	sort_radix.c \
	index.c \
	libft_split.c \
	libft.c

SRCS 	= $(addprefix $(SRC_PATH), $(SRC))
OBJ 	= $(SRC:.c=.o)
OBJS 	= $(addprefix $(OBJ_PATH), $(OBJ))
INCS = -I ./includes/

all : $(OBJ_PATH) $(NAME)

# "%.o : %.c" =".c.o :"
# Permet de construire des .o a partir de .c (c'est une regle generique)
# $< =	le nom de la premiere dependance (ici .c)
# $@ =	le nom de la cible (ici .o)
# -c :	ne link pas les fichiers sources et les transforme en .o
# - I :	include le directorie $(HEADERS)
$(OBJ_PATH)%.o : $(SRC_PATH)%.c
	$(CC) $(CFLAGS) -g -c $< -o $@ $(INCS)

$(OBJ_PATH):
	mkdir $(OBJ_PATH)

$(NAME) : $(OBJS)
		$(CC) $(FLAGS) $(OBJS) -o $(NAME)

# Enleve les .o / -f = --force
clean :
	rm -rf $(OBJ_PATH)

# Apelle clean et enleve .a
fclean : clean
	rm -rf $(NAME)

# Apelle fclean et refait notre binaire
re : fclean all

# Phony evite le relinking
.PHONY : all clean fclean re

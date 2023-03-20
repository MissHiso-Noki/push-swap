# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/26 15:48:01 by ccoste            #+#    #+#              #
#    Updated: 2023/03/20 14:58:23 by ccoste           ###   ########.fr        #
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
	stack.c \
	reverse_rotate.c \
	rotate.c \
	swap.c \
	check.c \
	check_utils.c \
	utils.c \
	initialization.c \
	push.c \
	sort_tiny.c

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
	$(CC) $(CFLAGS) -c $< -o $@ $(INCS)

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

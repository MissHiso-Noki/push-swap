# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/26 15:48:01 by ccoste            #+#    #+#              #
#    Updated: 2023/02/22 16:08:24 by ccoste           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nom de l'archive
NAME = push_swap.a

# Les fichiers de .c
_SRC = main.c \
	pile.c \
	push.c \
	reverse_rotate.c \
	rotate.c \
	swap.c

SRC_DIR = source

SOURCE = $(addprefix $(SRC_DIR)/, $(_SRC))

# specifie que OBJ represente les .c des SRC en .o
SOURCECO = $(SOURCE:.c=.o)

FLAGS = -Wall -Wextra -Werror
INC = -I includes/
HEADER_DIR = .
CC = cc

all : $(NAME)

$(NAME) : $(SOURCECO) $(HEADER_DIR)
		make -C $(SRC_DIR)
		gcc $(FLAG) -c $(_SRC)
		ar -rcs $(NAME) $(SOURCECO)
		ranlib $(NAME)

# "%.o : %.c" =".c.o :"
# Permet de construire des .o a partir de .c (c'est une regle generique)
# $< =	le nom de la premiere dependance (ici .c)
# $@ =	le nom de la cible (ici .o)
# -c :	ne link pas les fichiers sources et les transforme en .o
# - I :	include le directorie $(HEADERS)
%.o : %.c
	gcc $(FLAGS) -c $< -o $@ -I $(INC) $(HEADER_DIR)

# Enleve les .o / -f = --force
clean :
	rm -rf $(SOURCECO)
	make clean -C $(SRC_DIR)


# Apelle clean et enleve .a
fclean : clean
	rm -rf $(NAME)

# Apelle fclean et refait notre binaire
re : fclean all

# Phony evite le relinking
.PHONY : clean fclean

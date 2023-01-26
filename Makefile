# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/26 15:48:01 by ccoste            #+#    #+#              #
#    Updated: 2023/01/26 16:03:57 by ccoste           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nom de l'archive
NAME= pushswap.a

# Compilateur utiliser
CC = cc

# Flags de compilation
CFLAGS = -Wall -Wextra -Werror

# L'emplacement du directorie pour la compilation
HEADER_DIR = .

PRINTF= printf

# Les fichiers de .c
SRC =

# specifie que OBJ represente les .c des SRC en .o
OBJ = $(SRC:.c=.o)

all : $(NAME)

# ar rcs :		"ar" est la commande pour crer une archive
#				"r" est pour gerer l'actualisaion des fichiers desja existant dans l'archive
#				"c" est pour empecher un warping et recrer l'archive si elle n'existe pas apres une update
#				"s" crer un index dans l'archive ce qui rend plus rapide et simplifie l'utilisation de l'archive
$(NAME) : $(OBJ) $(HEADER_DIR)
		make -C $(PRINTF)
		cp printf/printf.a .
		mv printf.a $(NAME)
		$(CC) $(CFLAGS) -c $(SRC)
		ar -rcs $(NAME) $(OBJ)

# "%.o : %.c" =".c.o :"
# Permet de construire des .o a partir de .c (c'est une regle generique)
# $< =	le nom de la premiere dependance (ici .c)
# $@ =	le nom de la cible (ici .o)
# -c :	ne link pas les fichiers sources et les transforme en .o
# - I :	include le directorie $(HEADERS)
%.o : %.c
	$(CC) -o $@ -c $^

# Enleve les .o / -f = --force
clean :
	rm -rf $(OBJ)
	make clean -C $(LIBFT)

# Apelle clean et enleve libft.a
fclean : clean
	rm -rf $(NAME)
	rm -rf $(LIBFT)/libft.a

# Apelle fclean et refait notre binaire
re : fclean all

# Phony evite le relinking
. PHONY : clean fclean

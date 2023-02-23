# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/16 15:14:27 by ccoste            #+#    #+#              #
#    Updated: 2023/02/23 11:14:14 by ccoste           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = utils.a

_LIBFT = ft_atoi.c \
	ft_isprint.c \
	ft_putchar.c \
	ft_putchar_fd.c \
	ft_bzero.c \
	ft_putendl_fd.c \
	ft_strjoin.c \
	ft_strrchr.c \
	ft_memchr.c \
	ft_strlcat.c \
	ft_strtrim.c \
	ft_isalnum.c \
	ft_memcmp.c \
	ft_putstr.c \
	ft_putstr_fd.c \
	ft_strlcpy.c \
	ft_substr.c \
	ft_isalpha.c \
	ft_memcpy.c \
	ft_strlen.c \
	ft_tolower.c \
	ft_isascii.c \
	ft_memmove.c \
	ft_strchr.c \
	ft_toupper.c \
	ft_isdigit.c \
	ft_memset.c \
	ft_strdup.c \
	ft_strncmp.c \
	ft_itoa.c \
	ft_calloc.c \
	ft_putnbr_fd.c \
	ft_strnstr.c \
	ft_striteri.c \
	ft_strmapi.c \
	ft_split.c \
	ft_lstnew.c \
	ft_lstadd_front.c \
	ft_lstsize.c \
	ft_lstlast.c \
	ft_lstadd_back.c \
	ft_lstdelone.c \
	ft_lstclear.c \
	ft_lstiter.c \
	ft_lstmap.c

_PRINTF = ft_printf.c \
	ft_formats_str.c \
	ft_formats_ptr.c \
	ft_formats_nbr.c \
	ft_formats_hex.c \
	ft_formats.c

LIBFT_DIR = libft
PRINTF_DIR = printf

LIBFT = $(addprefix $(LIBFT_DIR)/, $(_LIBFT))
PRINTF = $(addprefix $(PRINTF_DIR)/, $(_PRINTF))

LIBFTCO = $(LIBFT:.c=.o)
PRINTFCO = $(PRINTF:.c=.o)

FLAG = -Wall -Wextra -Werror
HEADER_DIR = .

all : $(NAME)

$(NAME) : $(LIBFTCO) $(PRINTFCO) $(HEADER_DIR)
		ar -rcs $(NAME) $(LIBFTCO) $(PRINTFCO)

%.o : %.c
		cc $(FLAG) -c $< -o $@ -I $(HEADER_DIR)

clean :
		rm -rf $(LIBFTCO) $(PRINTFCO)

fclean : clean
		rm -rf $(NAME)

re : fclean all

.PHONY : fclean clean

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Nipostni <awis@me.com>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/07 11:05:52 by rchallie          #+#    #+#              #
#    Updated: 2021/12/07 16:15:14 by Nipostni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_bzero.c	\
ft_isprint.c	\
ft_isascii.c		\
ft_isdigit.c	\
ft_isalnum.c	\
ft_isalpha.c	\
ft_strlen.c	\
ft_memset.c	\
ft_memcpy.c \
ft_strlcat.c \
ft_memmove.c \
ft_toupper.c \
ft_strchr.c \
ft_strrchr.c \
ft_strlcat.c	\
ft_strlcpy.c \
ft_tolower.c	\
ft_toupper.c	\
ft_strncmp.c	\
ft_memchr.c	\
ft_strnstr.c 	\
ft_memcmp.c \
ft_calloc.c \
ft_atoi.c	\
ft_strdup.c	\
ft_substr.c	\



NAME = libft.a

OBJS_DIR = objs/
OBJS = $(SRCS:.c=.o)
OBJECTS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJS))

OBJSB = $(SRCSB:.c=.o)
OBJECTS_BONUS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJSB))

CC = gcc



$(OBJS_DIR)%.o : %.c libft.h
	@mkdir -p $(OBJS_DIR)
	@echo "Compiling: $<"
	@clang $(CC_FLAGS) -c $< -o $@ -Wextra -Wall -Werror

$(NAME): $(OBJECTS_PREFIXED)
	@ar r $(NAME) $(OBJECTS_PREFIXED)
	@echo "Libft Done !"

all: $(NAME)

clean:
	rm -rf $(OBJS_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(OBJECTS_BONUS_PREFIXED)
	@ar r $(NAME) $(OBJECTS_BONUS_PREFIXED)
	@echo "Libft Bonus Done !"


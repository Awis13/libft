# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nipostni <awis@me.com>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/05 22:47:13 by nipostni          #+#    #+#              #
#    Updated: 2022/12/05 23:07:08 by nipostni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror -Iinclude

# List of source files
SRCS = ft_memset.c ft_bzero.c ft_memcpy.c \
       ft_memmove.c ft_memchr.c ft_memcmp.c \
       ft_strlen.c ft_isalpha.c ft_isdigit.c \
       ft_isalnum.c ft_isascii.c ft_isprint.c \
       ft_toupper.c ft_tolower.c ft_strchr.c \
       ft_strrchr.c ft_strncmp.c ft_strlcpy.c \
       ft_strlcat.c ft_strnstr.c ft_atoi.c \
       ft_calloc.c ft_strdup.c ft_substr.c \
       ft_strjoin.c ft_strtrim.c ft_split.c \
       ft_itoa.c ft_strmapi.c ft_striteri.c \
       ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
       ft_putnbr_fd.c

# List of bonus source files
BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
        ft_lstlast.c ft_lstadd_back.c ft_lstclear.c \
        ft_lstdelone.c ft_lstiter.c ft_lstmap.c

# Object files
OBJS = $(SRCS:%.c=build/%.o)
BONUS_OBJS = $(BONUS:%.c=build/%.o)

# Library name
NAME = libft.a

.PHONY: all clean fclean re bonus

all: $(NAME)

# Build library
$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "libft.a is ready"

# Compile source files
build/%.o: src/%.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiled "$<" successfully!"

# Clean object files
clean:
	@rm -f $(OBJS) $(BONUS_OBJS)
	@echo "Object files removed!"

# Clean object files and library
fclean: clean
	@rm -f $(NAME)
	@echo "Library removed!"

# Full clean and rebuild
re: fclean $(NAME)

# Build library with bonus files
bonus: $(OBJS) $(BONUS_OBJS)
	@ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)
	@echo "libft.a BONUS is ready"

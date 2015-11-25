# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aouloube <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/25 10:21:15 by aouloube          #+#    #+#              #
#    Updated: 2015/11/25 15:27:47 by aouloube         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all, clean, fclean, re
NAME = libft.a
CC = gcc
AR = ar rc
SRCS = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
	   ft_isdigit.c ft_isprint.c ft_memccpy.c ft_memchr.c ft_memcmp.c \
	   ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar.c ft_putstr.c \
	   ft_strcat.c ft_strchr.c ft_strcmp.c ft_strcpy.c ft_strdup.c \
	   ft_strlcat.c ft_strlen.c ft_strncat.c ft_strncmp.c ft_strncpy.c \
	   ft_strnstr.c ft_strrchr.c ft_strstr.c ft_tolower.c ft_toupper.c
CFLAGS = -c -Wall -Werror -Wextra -I includes
OBJS = ft_atoi.o ft_bzero.o ft_isalnum.o ft_isalpha.o ft_isascii.o \
	ft_isdigit.o ft_isprint.o ft_memccpy.o ft_memchr.o ft_memcmp.o \
	ft_memcpy.o ft_memmove.o ft_memset.o ft_putchar.o ft_putstr.o \
	ft_strcat.o ft_strchr.o ft_strcmp.o ft_strcpy.o ft_strdup.o \
	ft_strlcat.o ft_strlen.o ft_strncat.o ft_strncmp.o ft_strncpy.o \
	ft_strnstr.o ft_strrchr.o ft_strstr.o ft_tolower.o ft_toupper.o 
RM = rm -rf

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRCS) 
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

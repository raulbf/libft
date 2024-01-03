# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/11 19:18:14 by rberrio-          #+#    #+#              #
#    Updated: 2023/12/27 19:48:31 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC  = gcc
LIBC    = ar rcs
CFLAGS  = -Wall -Wextra -Werror
RM  = rm -f
NAME    = libft.a
SRCS    = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_isstrlen.c ft_ismemset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c 
OBJS    = $(SRCS:.c=.o)
.c.o:
    @$(CC) $(CFLAGS) -c $< -I ./ -o $@
$(NAME): $(OBJS)
    @$(LIBC) $(NAME) $(OBJS)
all: $(NAME)
clean:
    @$(RM) $(OBJS)
fclean: clean
    @$(RM) $(NAME)
re: fclean all
.PHONY: all .c.o clean fclean re
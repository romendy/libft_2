# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmendy <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/03 16:42:50 by rmendy            #+#    #+#              #
#    Updated: 2019/12/03 16:57:06 by rmendy           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

FLAGS	= -Wall -Werror -Wextra -g3

FILES	=  ft_strchr.c ft_memset.c ft_toupper.c ft_tolower.c ft_isdigit.c\
			ft_memcpy.c ft_memccpy.c ft_strlen.c ft_strrchr.c ft_strlcpy.c\
			ft_memcmp.c ft_isalpha.c ft_atoi.c ft_isalnum.c ft_isascii.c\
			ft_isdigit.c ft_strncmp.c ft_strnstr.c ft_isprint.c \ft_strdup.c\
			ft_putstr_fd.c ft_putendl_fd.c ft_memmove.c ft_bzero.c\
			ft_putchar_fd.c ft_memchr.c ft_putnbr_fd.c ft_strdup.c\
			ft_putendl_fd.c ft_strjoin.c ft_strmapi.c ft_strtrim.c ft_itoa.c\
			ft_split.c ft_calloc.c ft_substr.c ft_strlcat.c ft_strncat.c

HEADER		=	libft.h

OBJS		=	${SRCS:.c=.o}

all: ${NAME}

${NAME}:
	gcc ${FLAGS} -c ${FILES} -I 
	ar rc ${NAME} ${FILES:.c=.o} $^
	ranlib ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -rf ${NAME}
re: fclean all

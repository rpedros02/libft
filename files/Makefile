# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rucorrei <rucorrei@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/09 00:17:00 by rucorrei          #+#    #+#              #
#    Updated: 2024/02/11 20:20:47 by rucorrei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = 	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strncmp.c ft_toupper.c ft_tolower.c ft_strrchr.c ft_strnstr.c ft_strdup.c\
		ft_atoi.c ft_memcmp.c ft_memmove.c ft_memset.c ft_memcpy.c ft_memchr.c ft_bzero.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_calloc.c\
		ft_substr.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strmapi.c ft_strjoin.c ft_strtrim.c ft_striteri.c ft_itoa.c ft_split.c
		
SRCB =	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS = ${SRC:.c=.o}

OBJSB = ${SRCB:.c=.o}

HEADER = libft.h

INCLUDE = -I include

CC = cc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} ${INCLUDE} -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
		ar rcs ${NAME} ${OBJS} ${HEADER}

all:	${NAME}

clean:
	${RM} ${OBJS}
	${RM} ${OBJSB}

fclean:	clean
		${RM} ${NAME}

re:	fclean all

bonus:	${OBJS} ${OBJSB}
		ar rcs ${NAME} ${OBJSB} ${OBJS} ${HEADER}

.PHONY: all clean fclean re bonus
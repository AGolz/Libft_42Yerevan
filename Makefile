# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emaksimo <emaksimo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/16 20:30:17 by emaksimo          #+#    #+#              #
#    Updated: 2023/01/17 23:55:27 by emaksimo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADER = libft.h

CC = gcc
CFLAGS = -Wall -Wextra -Werror 

SOURCES = ft_atoi.c \
ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcmp.c \
ft_strncmp.c ft_tolower.c ft_toupper.c ft_strchr.c ft_strdup.c ft_strnstr.c \
ft_strrchr.c ft_bzero.c ft_calloc.c ft_memchr.c ft_memcpy.c ft_memmove.c ft_memset.c \
ft_strlcat.c ft_strlcpy.c ft_strlen.c

SOURCES_B = 

OBJECTS = $(SOURCES:.c=.o)
OBJECTS_B = $(SOURCES_B:.c=.o)

BLUE = \033[1;36m 
PINK = \033[1;35m
RESET = \033[0m

.PHONY: all bonus clean fclean re

all: $(NAME)
	@echo $?

$(NAME): $(OBJECTS) $(HEADER)
	@echo "$(BLUE)...\n$(RESET)\c"
	ar rc $(NAME) $?
	@ranlib $(NAME)
	@echo "\n$(NAME): $(BLUE) object files are created $(RESET)"
	@echo "$(NAME): $(BLUE) $(NAME) created $(RESET)"

bonus: $(OBJECTS_B) $(HEADER)
	ar rc $(NAME) $?
	@echo "$(BLUE)...\n$(RESET)\c"
	@ranlib $(NAME)
	@echo "\n$(NAME): $(BLUE) bonus object files are created $(RESET)" 


clean:  
	@rm -rf $(OBJECTS) $(OBJECTS_B)
	@echo "$(NAME): $(PINK) object files are deleted $(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME): $(PINK) $(NAME) deleted $(RESET)"

re:
	@$(MAKE) fclean
	@$(MAKE) all
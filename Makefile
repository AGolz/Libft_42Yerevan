# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emaksimo <emaksimo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/16 20:30:17 by emaksimo          #+#    #+#              #
#    Updated: 2023/01/18 05:02:19 by emaksimo         ###   ########.fr        #
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
ft_strlcat.c ft_strlcpy.c ft_strlen.c\
ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

SOURCES_B = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJECTS = $(SOURCES:.c=.o)
OBJECTS_B = $(SOURCES_B:.c=.o)

BLUE = \033[1;36m 
PINK = \033[1;35m
RESET = \033[0m

WHALE	=	"\n$(BLUE)       ::: \n     ___:____     |^\/^| \n   ,'        '.    \  / \n   |  O        \___/  | \n ~^~^~^~^~^~^~^~^~^~^~^~^~\n \n Compilation Successful!\n\n   by emaksimo for 42 \n	${NC}\n"
NUKE	=	"\n$(PINK)    _.-^^---....,,--       \n _--                  --_  \n<                        >)\n|                         | \n \._                   _./  \n    '''--. . , ; .--'''       \n          | |   |             \n       .-=||  | |=-.   \n       '-=£€%&%€£=-'   \n          | ;  :|     \n _____.,-£%&€@%£&£~,._____\n ${NC}\n"

.PHONY: all bonus clean fclean re

all: $(NAME)
	@echo $?

$(NAME): $(OBJECTS) $(HEADER)
	@echo "$(BLUE)...\n$(RESET)\c"
	ar rc $(NAME) $?
	@ranlib $(NAME)
	@echo "\n$(NAME): $(BLUE) object files are created $(RESET)"
	@echo "$(NAME): $(BLUE) $(NAME) created $(RESET)"
	@echo $(WHALE)

bonus: $(OBJECTS_B) $(HEADER)
	ar rc $(NAME) $?
	@echo "$(BLUE)\n  (ﾉ>ω<)ﾉ \n$(RESET)\c"
	@ranlib $(NAME)
	@echo "\n $(BLUE)｡･:*:･ﾟ’★,｡･:*:･ﾟ’☆ bonus object files are created ｡･:*:･ﾟ’★,｡･:*:･ﾟ’☆ $(RESET)" 
	@echo "\n $(BLUE)                   it's a special Street magic (─‿‿─) $(RESET)" 
	


clean:  
	@rm -rf $(OBJECTS) $(OBJECTS_B)
	@echo "$(PINK) ...3 2 1 $(RESET)"
	@echo $(NUKE)
	@echo "$(NAME): $(PINK) object files are deleted $(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME): $(PINK) $(NAME) deleted $(RESET)"

re:
	@$(MAKE) fclean
	@$(MAKE) all
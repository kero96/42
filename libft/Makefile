# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: salvmart <salvmart@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/18 12:42:27 by salvmart          #+#    #+#              #
#    Updated: 2024/05/18 12:42:27 by salvmart         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCES = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
		 ft_strlen.c ft_tolower.c ft_toupper.c ft_strncmp.c ft_memcmp.c \
		 ft_strlcpy.c ft_strlcat.c ft_atoi.c ft_strchr.c ft_strrchr.c \
		 ft_strnstr.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		 ft_memchr.c ft_calloc.c ft_strdup.c ft_putchar_fd.c ft_putstr_fd.c \
		 ft_putendl_fd.c ft_putnbr_fd.c ft_substr.c ft_strjoin.c ft_strtrim.c \
		 ft_itoa.c ft_strmapi.c ft_split.c ft_striteri.c \

BONUS_SOURCES = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
			 ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
			 ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c \

SRC = $(SOURCES:.c=.o)

BONUS_SRC = $(BONUS_SOURCES:.c=.o)

CFLAG = -Wall -Werror -Wextra

$(NAME): $(SRC)
	@clang -c $(CFLAG) $(SOURCES)
	@ar rcs $(NAME) $(SRC)
	@echo "Library $(NAME) created"

all: $(NAME)

bonus: $(BONUS_SRC)
	@clang -c $(CFLAG) $(BONUS_SOURCES)
	@ar rcs $(NAME) $(BONUS_SRC)
	@echo "Bonus library $(NAME) created"

clean:
	rm -f $(SRC)

fclean: clean
	@rm -f $(NAME) $(SRC)
	@rm -f $(NAME) $(BONUS_SRC)

re: fclean all

$(OBJ): %.o: %.c
	@$(CC) -c $(FLAGS) $< -o $@

.PHONY: all clean fclean re bonus
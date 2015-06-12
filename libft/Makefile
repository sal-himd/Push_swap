# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sal-himd <sal-himd@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/03 22:54:42 by sal-himd          #+#    #+#              #
#    Updated: 2014/11/09 18:35:47 by sal-himd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

GCC		= gcc -Wall -Werror -Wextra -I includes/

SRC		+= ft_memcpy.c
SRC		+= ft_putstr_fd.c  
SRC		+= ft_strlcat.c
SRC		+= ft_strstr.c
SRC		+= ft_atoi.c
SRC		+= ft_memdel.c
SRC		+= ft_strcat.c
SRC		+= ft_strlen.c
SRC		+= ft_strsub.c
SRC		+= ft_bzero.c
SRC		+= ft_memmove.c
SRC		+= ft_strchr.c
SRC		+= ft_strrchr.c
SRC		+= ft_strmap.c 
SRC		+= ft_tolower.c
SRC		+= ft_isalnum.c
SRC		+= ft_memset.c
SRC		+= ft_strclr.c 
SRC		+= ft_strmapi.c
SRC		+= ft_toupper.c
SRC		+= ft_isalpha.c
SRC		+= ft_strcmp.c  
SRC		+= ft_strncat.c 
SRC		+= ft_isascii.c
SRC		+= ft_putchar.c
SRC		+= ft_strcpy.c
SRC		+= ft_strncmp.c
SRC		+= ft_isdigit.c
SRC		+= ft_putchar_fd.c
SRC		+= ft_strdel.c
SRC		+= ft_strncpy.c
SRC		+= ft_isprint.c
SRC		+= ft_putendl.c
SRC		+= ft_strdup.c
SRC		+= ft_strnequ.c
SRC		+= ft_itoa.c
SRC		+= ft_putendl_fd.c
SRC		+= ft_strequ.c
SRC		+= ft_strnew.c
SRC		+= ft_memalloc.c
SRC		+= ft_putnbr.c
SRC		+= ft_strtrim.c
SRC		+= ft_strnstr.c
SRC		+= ft_memccpy.c
SRC		+= ft_putnbr_fd.c
SRC		+= ft_striter.c
SRC		+= ft_memchr.c 
SRC		+= ft_put_strsplit.c
SRC		+= ft_striteri.c 
SRC		+= ft_strrev.c
SRC		+= ft_memcmp.c
SRC		+= ft_putstr.c
SRC		+= ft_strjoin.c
SRC		+= ft_strsplit.c
SRC		+= ft_lstnew.c
SRC		+= ft_lstadd.c
SRC		+= ft_lstdelone.c
SRC		+= ft_lstdel.c
SRC		+= ft_lstiter.c
SRC		+= ft_lstmap.c
SRC		+= ft_strlower.c
SRC		+= ft_strupper.c
SRC		+= ft_lstadd_back.c
SRC		+= ft_lstsplit.c
SRC		+= ft_lstfold.c
SRC		+= ft_lstsize.c
SRC		+= ft_lstat.c
SRC		+= ft_lstfind.c
SRC		+= ft_free_strsplit.c
SRC 	+= ft_isempty.c
SRC 	+= ft_putnbr_long.c
SRC 	+= ft_putnbr_fd_long.c
SRC 	+= ft_strcapitalize.c
SRC 	+= ft_isupper.c
SRC 	+= ft_isprint.c
SRC 	+= ft_isalpha.c 
SRC 	+= ft_strisdigit.c 
SRC 	+= ft_strisalnum.c
SRC 	+= ft_strisascii.c
SRC 	+= get_next_line.c
SRC     += ft_realloc_tab.c
SRC		+= ft_ltoa.c
SRC		+= ft_atol.c

OBJ		+= $(subst .c,.o,$(SRC))

INC		+= includes/libft.h

all: $(NAME)

$(NAME): $(OBJ) $(INC)
	ar rc $@ $^
	ranlib $@  

%.o: %.c $(INC)
	$(GCC) -o $@ -c $< 

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all


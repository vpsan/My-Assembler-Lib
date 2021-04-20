# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bhatches <bhatches@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/19 22:02:14 by bhatches          #+#    #+#              #
#    Updated: 2021/04/20 01:32:32 by bhatches         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libasm.a

SRCS	=	$(ASM_MODULES)

# *********************** HDRS ************************************************ #

INCLD 	= 	includes/
HDRS	=	$(INCLD)libasm.h\

# *********************** ASM_MODULES ***************************************** #

ASM_MODULES_DIR 	= 	srcs/
ASM_MODULES			= 	$(ASM_MODULES_DIR)ft_strlen.s\
						$(ASM_MODULES_DIR)ft_strcpy.s\
						$(ASM_MODULES_DIR)ft_strcmp.s\

# ***************************************************************************** #

OBJ		=	$(SRCS:.s=.o)

%.o: 		%.s
			nasm -f macho64 -I $(INCLD) $< -o $(<:.s=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
			ar rcs $(NAME) $(OBJ)
			
# clean:
# 			rm -rf $(OBJ)

# fclean:		clean
# 			rm -rf $(NAME)

# re:			fclean all

# *********************** make test ***************************************** #

CC		=	gcc

test:
			$(CC) main.c -I $(INCLD) -c
			$(CC) main.o libasm.a -o test.out

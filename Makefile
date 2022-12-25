# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: moel-asr <moel-asr@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/18 13:36:04 by moel-asr          #+#    #+#              #
#    Updated: 2022/12/23 18:51:18 by moel-asr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CFLAGS = -Wall -Wextra -Werror

SRCS = push_swap_utils/ft_atoi.c \
	push_swap_utils/ft_lstadd_back.c \
	push_swap_utils/ft_lstadd_front.c \
	push_swap_utils/ft_lstlast.c \
	push_swap_utils/ft_lstnew.c \
	push_swap_utils/ft_lstsize.c \
	push_swap_utils/ft_putchar_fd.c \
	push_swap_utils/ft_putstr_fd.c \
	actions_1.c \
	actions_2.c \
	check_errors.c \
	sort_stack.c \
	main.c

OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o  $(NAME)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : clean fclean bonus
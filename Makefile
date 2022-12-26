# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: moel-asr <moel-asr@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/18 13:36:04 by moel-asr          #+#    #+#              #
#    Updated: 2022/12/26 16:47:49 by moel-asr         ###   ########.fr        #
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
	push_swap_utils/ft_split.c \
	push_swap_utils/ft_strdup.c \
	push_swap_utils/ft_strlen.c \
	push_swap_utils/ft_substr.c \
	actions/ft_push.c \
	actions/ft_rotate_ab.c \
	actions/ft_rotate.c \
	actions/ft_rrotate_ab.c \
	actions/ft_rrotate.c \
	actions/ft_swap_ab.c \
	actions/ft_swap.c \
	push_swap_srcs/check_errors.c \
	push_swap_srcs/find_and_push.c \
	push_swap_srcs/find_index.c \
	push_swap_srcs/init_t_chunks.c \
	push_swap_srcs/put_index_to_stack.c \
	push_swap_srcs/put_stack_to_arr.c \
	push_swap_srcs/sort_big_stack.c \
	push_swap_srcs/sort_int_tab.c \
	push_swap_srcs/sort_medium_stack.c \
	push_swap_srcs/sort_small_stack.c \
	push_swap_srcs/sort_stacks.c \
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
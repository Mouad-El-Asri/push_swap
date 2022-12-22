/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-asr <moel-asr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 13:49:35 by moel-asr          #+#    #+#             */
/*   Updated: 2022/12/21 23:30:19 by moel-asr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_list
{
	int				content;
	struct s_list	*next;
}	t_list;

int		ft_atoi(const char *str);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(int content);
int		ft_lstsize(t_list *lst);
void	ft_putchar(char c);
void	ft_putstr(char *s);
void	print_error(void);
int		check_stack_a(t_list *lst);

void	ft_swap(t_list *lst, char c, int banner);
void	ft_swap_ab(t_list *lst1, t_list *lst2);
void	ft_push(t_list **lst1, t_list **lst2, char c);
void	ft_rotate(t_list **lst, char c, int banner);
void	ft_rotate_ab(t_list **lst1, t_list **lst2);
void	ft_reverse_rotate(t_list **lst, char c, int banner);
void	ft_reverse_rotate_ab(t_list **lst);

void	sort_small_stack(t_list **lst);
void	sort_medium_stack(t_list **lst1, t_list **lst2);

#endif
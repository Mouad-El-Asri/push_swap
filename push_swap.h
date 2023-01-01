/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-asr <moel-asr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 13:49:35 by moel-asr          #+#    #+#             */
/*   Updated: 2023/01/01 07:50:31 by moel-asr         ###   ########.fr       */
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
	int				index;
	struct s_list	*next;
}	t_list;

typedef struct s_chunks
{
	int	max;
	int	min;
}	t_chunks;

int		ft_atoi(const char *str);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(int content, int index);
int		ft_lstsize(t_list *lst);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
char	**ft_split(char const *s, char c);
char	*ft_strdup(const char *str);
size_t	ft_strlen(const char *str);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	ft_swap(t_list *lst, char c, int banner);
void	ft_swap_ab(t_list *lst1, t_list *lst2);
void	ft_push(t_list **lst1, t_list **lst2, char c);
void	ft_rotate(t_list **lst, char c, int banner);
void	ft_rotate_ab(t_list **lst1, t_list **lst2);
void	ft_rrotate(t_list **lst, char c, int banner);
void	ft_rrotate_ab(t_list **lst1, t_list **lst2);
void	print_error(void);
int		check_stack_a(t_list *lst);
void	find_and_push(t_list **lst1, t_list **lst2, int num, char c1);
int		find_index(t_list *lst, int num);
void	ft_free(char **strs);
void	init_t_chunks(t_chunks *var, t_list *lst, int div);
void	put_index_to_stack(t_list *lst, int *arr);
int		*put_stack_to_arr(t_list *lst);
void	sort_big_stack(t_list **lst1, t_list **lst2, int divisor);
void	sort_big_stack2(t_list **lst1, t_list **lst2);
void	sort_int_tab(int *tab, int size);
void	sort_medium_stack(t_list **lst1, t_list **lst2);
void	sort_small_stack(t_list **lst);
void	sort_stacks(t_list **lst1, t_list **lst2);

#endif
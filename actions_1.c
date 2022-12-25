/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions_1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-asr <moel-asr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 18:36:40 by moel-asr          #+#    #+#             */
/*   Updated: 2022/12/25 02:10:12 by moel-asr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_list *lst, char c, int banner)
{
	int	tmp;

	if (!lst || (ft_lstsize(lst) < 2))
		return ;
	tmp = lst->content;
	lst->content = lst->next->content;
	lst->next->content = tmp;
	if (banner)
	{
		if (c == 'a')
			ft_putstr_fd("sa\n", 1);
		else
			ft_putstr_fd("sb\n", 1);
	}
}

void	ft_swap_ab(t_list *lst1, t_list *lst2)
{
	if ((!lst1 || (ft_lstsize(lst1) < 2)) || \
		(!lst2 || (ft_lstsize(lst2) < 2)))
		return ;
	ft_swap(lst1, 'a', 0);
	ft_swap(lst2, 'b', 0);
	ft_putstr_fd("ss\n", 1);
}

void	ft_push(t_list **lst1, t_list **lst2, char c)
{
	if (!*lst2)
		return ;
	ft_lstadd_front(lst1, ft_lstnew((*lst2)->content));
	*lst2 = (*lst2)->next;
	if (c == 'a')
		ft_putstr_fd("pa\n", 1);
	else
		ft_putstr_fd("pb\n", 1);
}

void	ft_rotate(t_list **lst, char c, int banner)
{
	if (!*lst || (ft_lstsize(*lst) < 2))
		return ;
	ft_lstadd_back(lst, ft_lstnew((*lst)->content));
	*lst = (*lst)->next;
	if (banner)
	{
		if (c == 'a')
			ft_putstr_fd("ra\n", 1);
		else
			ft_putstr_fd("rb\n", 1);
	}
}

void	ft_rotate_ab(t_list **lst1, t_list **lst2)
{
	if ((!*lst1 || (ft_lstsize(*lst1) < 2)) || \
		(!*lst2 || (ft_lstsize(*lst2) < 2)))
		return ;
	ft_rotate(lst1, 'a', 0);
	ft_rotate(lst2, 'b', 0);
	ft_putstr_fd("rr\n", 1);
}

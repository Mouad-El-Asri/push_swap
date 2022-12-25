/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-asr <moel-asr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 17:55:09 by moel-asr          #+#    #+#             */
/*   Updated: 2022/12/23 18:50:11 by moel-asr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reverse_rotate(t_list **lst, char c, int banner)
{
	t_list	*tmp;

	if (!*lst || (ft_lstsize(*lst) < 2))
		return ;
	ft_lstadd_front(lst, ft_lstnew(ft_lstlast(*lst)->content));
	tmp = *lst;
	while (tmp->next->next)
		tmp = tmp->next;
	tmp->next = NULL;
	if (banner)
	{
		if (c == 'a')
			ft_putstr_fd("rra\n", 1);
		else
			ft_putstr_fd("rrb\n", 1);
	}
}

void	ft_reverse_rotate_ab(t_list **lst1, t_list **lst2)
{
	if ((!*lst1 || (ft_lstsize(*lst1) < 2)) || \
		(!*lst2 || (ft_lstsize(*lst2) < 2)))
		return ;
	ft_reverse_rotate(lst1, 'a', 0);
	ft_reverse_rotate(lst2, 'b', 0);
	ft_putstr_fd("rrr\n", 1);
}

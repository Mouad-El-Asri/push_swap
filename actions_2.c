/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-asr <moel-asr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 17:55:09 by moel-asr          #+#    #+#             */
/*   Updated: 2022/12/21 20:01:51 by moel-asr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reverse_rotate(t_list **lst, char c, int banner)
{
	t_list	*tmp;

	if (!*lst || (ft_lstsize(*lst) == 1))
		return ;
	ft_lstadd_front(lst, ft_lstnew(ft_lstlast(*lst)->content));
	tmp = *lst;
	while (tmp->next->next)
		tmp = tmp->next;
	tmp->next = NULL;
	if (banner)
	{
		if (c == 'a')
			ft_putstr("rra\n");
		else
			ft_putstr("rrb\n");
	}
}

void	ft_reverse_rotate_ab(t_list **lst)
{
	ft_reverse_rotate(lst, 'a', 0); // question
	ft_reverse_rotate(lst, 'b', 0);
	ft_putstr("rrr");
}

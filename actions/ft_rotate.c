/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-asr <moel-asr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 21:16:51 by moel-asr          #+#    #+#             */
/*   Updated: 2022/12/28 03:15:38 by moel-asr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rotate(t_list **lst, char c, int banner)
{
	t_list	*tmp;

	if (!*lst || (ft_lstsize(*lst) < 2))
		return ;
	ft_lstadd_back(lst, ft_lstnew((*lst)->content, (*lst)->index));
	tmp = *lst;
	*lst = (*lst)->next;
	free(tmp);
	if (banner)
	{
		if (c == 'a')
			ft_putstr_fd("ra\n", 1);
		else
			ft_putstr_fd("rb\n", 1);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-asr <moel-asr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 21:17:01 by moel-asr          #+#    #+#             */
/*   Updated: 2023/01/01 07:39:31 by moel-asr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_swap(t_list *lst, char c, int banner)
{
	int	tmp1;
	int	tmp2;

	if (!lst || (ft_lstsize(lst) < 2))
		return ;
	tmp1 = lst->content;
	tmp2 = lst->index;
	lst->content = lst->next->content;
	lst->index = lst->next->index;
	lst->next->content = tmp1;
	lst->next->index = tmp2;
	if (banner)
	{
		if (c == 'a')
			ft_putstr_fd("sa\n", 1);
		else
			ft_putstr_fd("sb\n", 1);
	}
}

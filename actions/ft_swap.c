/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-asr <moel-asr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 21:17:01 by moel-asr          #+#    #+#             */
/*   Updated: 2022/12/25 21:21:07 by moel-asr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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

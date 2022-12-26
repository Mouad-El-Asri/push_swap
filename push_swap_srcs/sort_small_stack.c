/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-asr <moel-asr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 23:33:56 by moel-asr          #+#    #+#             */
/*   Updated: 2022/12/26 15:59:08 by moel-asr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_small_stack(t_list **lst)
{
	int	a;
	int	b;
	int	c;

	a = (*lst)->content;
	b = (*lst)->next->content;
	c = (*lst)->next->next->content;
	if (a > b && b < c && c > a)
		ft_swap(*lst, 'a', 1);
	else if (a > b && b > c && c < a)
	{
		ft_swap(*lst, 'a', 1);
		ft_rrotate(lst, 'a', 1);
	}
	else if (a > b && b < c && c < a)
		ft_rotate(lst, 'a', 1);
	else if (a < b && b > c && c > a)
	{
		ft_swap(*lst, 'a', 1);
		ft_rotate(lst, 'a', 1);
	}
	else if (a < b && b > c && c < a)
		ft_rrotate(lst, 'a', 1);
}

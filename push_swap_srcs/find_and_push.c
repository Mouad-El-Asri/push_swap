/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_and_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-asr <moel-asr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 00:23:53 by moel-asr          #+#    #+#             */
/*   Updated: 2022/12/26 18:12:56 by moel-asr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	find_and_push(t_list **lst1, t_list **lst2, int num, char c1)
{
	int		count;
	char	c2;

	c2 = 'a';
	if (c1 == 'a')
		c2 = 'b';
	count = find_index(*lst1, num);
	if (count < (ft_lstsize(*lst1) / 2))
	{
		while (count > 1)
		{
			ft_rotate(lst1, c2, 1);
			count--;
		}
	}
	else if (count >= (ft_lstsize(*lst1) / 2))
	{
		while (count <= ft_lstsize(*lst1))
		{
			ft_rrotate(lst1, c2, 1);
			count++;
		}
	}
	ft_push(lst2, lst1, c1);
}

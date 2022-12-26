/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_index_to_stack.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-asr <moel-asr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 00:14:17 by moel-asr          #+#    #+#             */
/*   Updated: 2022/12/26 18:13:25 by moel-asr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	put_index_to_stack(t_list *lst, int *arr)
{
	int		i;
	int		j;
	t_list	*tmp;

	i = 0;
	while (i < ft_lstsize(lst))
	{
		j = 0;
		tmp = lst;
		while (j < ft_lstsize(lst))
		{
			if (arr[i] == tmp->content)
			{
				tmp->content = i;
				break ;
			}
			tmp = tmp->next;
			j++;
		}
		i++;
	}
}

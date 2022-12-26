/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_index.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-asr <moel-asr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 00:12:20 by moel-asr          #+#    #+#             */
/*   Updated: 2022/12/26 15:58:37 by moel-asr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	find_index(t_list *lst, int num)
{
	int		count;

	count = 0;
	while (lst)
	{
		count++;
		if (lst->content == num)
			break ;
		lst = lst->next;
	}
	return (count);
}

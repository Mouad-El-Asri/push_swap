/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_stack_to_arr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-asr <moel-asr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 23:38:58 by moel-asr          #+#    #+#             */
/*   Updated: 2022/12/26 15:58:50 by moel-asr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	*put_stack_to_arr(t_list *lst)
{
	int		*arr;
	int		i;

	i = 0;
	arr = malloc(sizeof(int) * ft_lstsize(lst));
	while (lst)
	{
		arr[i] = lst->content;
		lst = lst->next;
		i++;
	}
	return (arr);
}

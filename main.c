/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-asr <moel-asr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 11:46:18 by moel-asr          #+#    #+#             */
/*   Updated: 2022/12/22 00:06:32 by moel-asr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h> // delete

int	main(int argc, char **argv)
{
	int		i;
	t_list	*head_a;
	t_list	*head_b;

	i = 1;
	head_a = NULL;
	head_b = NULL;
	if (argc > 1)
		head_a = ft_lstnew(ft_atoi(argv[i++]));
	if (argc <= 2)
		return (0);
	while (argv[i])
	{
		ft_lstadd_back(&head_a, ft_lstnew(ft_atoi(argv[i])));
		i++;
	}
	if (check_stack_a(head_a) == 0)
		return (0);
	// if (ft_lstsize(head_a) == 2)
	// 	ft_swap(head_a, 'a', 1);
	// if (ft_lstsize(head_a) > 2)
	// 	sort_small_stack(&head_a);
	// sort_medium_stack(&head_a, &head_b);
	while (head_a)
	{
		printf("%d\n", head_a->content);
		head_a = head_a->next;
	}
	return (0);
}

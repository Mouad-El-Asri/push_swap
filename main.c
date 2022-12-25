/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-asr <moel-asr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 11:46:18 by moel-asr          #+#    #+#             */
/*   Updated: 2022/12/25 02:07:56 by moel-asr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// #include "fcntl.h" // delete

int	main(int argc, char **argv)
{
	int		i;
	t_list	*head_a;
	t_list	*head_b;
	int		*arr;

	i = 1;
	// int fd = open("test", O_WRONLY | O_RDONLY);
	// dup2(fd, 1);
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
	// if (ft_lstsize(head_a) == 3)
	// 	sort_small_stack(&head_a);

	arr = put_stack_to_arr(head_a);
	ft_sort_int_tab(arr, ft_lstsize(head_a));
	put_index_to_stack(head_a, arr);
	// sort_big_stack(&head_a, &head_b);
	// sort_big_stack2(&head_a, &head_b);
	sort_medium_stack(&head_a, &head_b);
	i = 0;
	while (head_a)
	{
		printf("%d\n", head_a->content);
		head_a = head_a->next;
		i++;
	}
	return (0);
}

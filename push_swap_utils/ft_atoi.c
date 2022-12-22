/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-asr <moel-asr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 20:20:03 by moel-asr          #+#    #+#             */
/*   Updated: 2022/12/21 19:59:37 by moel-asr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	num;
	int	sign;

	i = 0;
	num = 0;
	sign = 1;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			print_error();
		num = num * 10 + (str[i] - 48);
		if (sign == 1 && num != 0 && (INT_MAX / num) < 1)
			print_error();
		else if (sign == -1 && ((INT_MIN / num) > -1 && num != INT_MIN))
			print_error();
		i++;
	}
	return (num * sign);
}

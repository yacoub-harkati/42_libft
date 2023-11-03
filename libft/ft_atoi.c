/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 23:00:20 by yaharkat          #+#    #+#             */
/*   Updated: 2023/11/03 01:06:34 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_valid_number(size_t number, int sign)
{
	if (number > 2147483647 && sign > 0)
		return (-1);
	else if (number > 2147483648 && sign < 0)
		return (0);
	return (1);
}

int	ft_atoi(const char *nptr)
{
	size_t	i;
	size_t	number;
	int		sign;

	i = 0;
	sign = 1;
	number = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		number = number * 10 + nptr[i++] - 48;
		if (check_valid_number(number, sign) <= 0)
			return (check_valid_number(number, sign));
	}
	return (number * sign);
}

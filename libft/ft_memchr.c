/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 04:23:29 by yaharkat          #+#    #+#             */
/*   Updated: 2023/09/22 04:23:29 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	unsigned char *temp_s;

	i = 0;
	temp_s = (unsigned char *)s;
	while (i < n)
	{
		if (temp_s[i] == (unsigned char)c)
			return ((void *)(temp_s + i));
		i++;
	}
	return (NULL);
}
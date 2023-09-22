/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 02:27:11 by yaharkat          #+#    #+#             */
/*   Updated: 2023/09/22 02:27:11 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	size_t i;
	unsigned char *temp_s;

	temp_s = (unsigned char *)s;
	i = 0;
	while (i < n)
		temp_s[i++] = c;
	return s;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 04:16:01 by yaharkat          #+#    #+#             */
/*   Updated: 2023/09/22 04:16:01 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *temp_dest;
	unsigned char *temp_src;

	temp_dest = (unsigned char *)dest;
	temp_src = (unsigned char *)src;
	if (dest == src)
		return (dest);

	if (dest < src || dest > (src + n))
		ft_memcpy(dest, src, n);
	else
	{
		while (n-- > 0)
			temp_dest[n] = temp_src[n];
	}
	return (dest);
}

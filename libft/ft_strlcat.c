/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:43:54 by yaharkat          #+#    #+#             */
/*   Updated: 2023/10/31 10:43:54 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t d_len;

	d_len = ft_strlen(dst);
	i = 0;
	if (dstsize <= d_len)
		return dstsize + ft_strlen(src);
	while (src[i] && (i + d_len) < dstsize - 1)
	{
		dst[d_len + i] = src[i];
		i++;
	}
	dst[d_len + i] = '\0';
	return (d_len + ft_strlen(src));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 22:35:41 by yaharkat          #+#    #+#             */
/*   Updated: 2023/09/18 22:35:41 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strncat(char *dest, const char *src, size_t n)
{
	size_t dest_len;
	size_t i;

	i = 0;
	dest_len = ft_strlen(dest);
	while (src[i] && i < n)
		dest[dest_len + i] = src[i++];
	dest[dest_len + i] = '\0';
	return (dest);
}
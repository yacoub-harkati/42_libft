/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 20:32:24 by yaharkat          #+#    #+#             */
/*   Updated: 2023/09/18 20:32:24 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strcat(char *dest, const char *src)
{
	int dest_len;
	int i;

	i = 0;
	dest_len = ft_strlen(dest);
	while (src[i])
		dest[dest_len + i] = src[i++];
	dest[dest_len + i] = '\0';
	return (dest);
}
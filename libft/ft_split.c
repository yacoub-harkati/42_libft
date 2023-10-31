/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:16:20 by yaharkat          #+#    #+#             */
/*   Updated: 2023/10/31 18:16:56 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_cword(char const *s, char c)
{
	size_t	i;
	size_t	old_i;
	size_t	count;

	i = 0;
	old_i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		old_i = i;
		while (s[i] && s[i] != c)
			i++;
		if (old_i < i++)
			count++;
	}
	return (count);
}

static size_t	compute_word_len(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static void	free_strs(char **strs, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
}

static char	**split_w(char **strs, char const *s, char c)
{
	size_t	i;
	size_t	w_len;
	size_t	words_cpd;

	i = 0;
	words_cpd = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		w_len = compute_word_len(s + i, c);
		strs[words_cpd] = (char *)malloc(sizeof(char) * (w_len + 1));
		if (!strs[words_cpd])
		{
			free_strs(strs, words_cpd);
			return (NULL);
		}
		ft_strlcpy(strs[words_cpd], s + i, (w_len + 1));
		words_cpd++;
		i += w_len;
	}
	return (strs);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	size_t	words_count;

	words_count = ft_cword(s, c);
	strs = (char **)malloc(sizeof(char *) * (words_count + 1));
	if (!strs)
		return (NULL);
	split_w(strs, s, c);
	if (!strs)
		return (NULL);
	strs[words_count] = NULL;
	return (strs);
}

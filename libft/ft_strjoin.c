#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char *dst;
	size_t size;

	if (!s1 || !s2)
		return NULL;
	size = ft_strlen(s1) + ft_strlen(s2);
	dst = (char *)malloc(sizeof(char) * (size + 1));
	if (!dst)
		return NULL;
	dst[0] = '\0';
	ft_strlcat(dst, s1, (size + 1));
	ft_strlcat(dst, s2, (size + 1));
	return (dst);
}
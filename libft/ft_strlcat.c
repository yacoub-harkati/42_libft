#include "includes/libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t dst_len;
	size_t i;

	i = 0;
	dst_len = ft_strlen(dst);
	if (size <= dst_len)
		return dst_len + (size);
	while (i < size - 1 && src[i])
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + ft_strlen(src));
}

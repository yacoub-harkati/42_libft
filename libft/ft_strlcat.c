#include "includes/libft.h"

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

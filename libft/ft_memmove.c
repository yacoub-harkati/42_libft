
#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *t_dest;
	unsigned char *t_src;

	if (!dest && !src)
		return NULL;
	t_dest = (unsigned char *)dest;
	t_src = (unsigned char *)src;
	if (dest < src || dest > (src + n))
		ft_memcpy(dest, src, n);
	else
		while (n-- > 0)
			t_dest[n] = t_src[n];
	return (dest);
}
#include "includes/libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *t_s;
	size_t i;

	i = 0;
	t_s = (unsigned char *)s;
	while (i < n)
	{
		if (t_s[i] == c)
			return (void *)&t_s[i];
		i++;
	}
	return NULL;
}
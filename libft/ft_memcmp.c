#include "includes/libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *t_s1;
	unsigned char *t_s2;
	size_t i;

	i = 0;
	t_s1 = (unsigned char *)s1;
	t_s2 = (unsigned char *)s2;
	while (i < n && t_s1[i] == t_s2[i])
		i++;
	if (i == n)
		return 0;
	return t_s1[i] - t_s2[i];
}
#include "includes/libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	unsigned char *temp_buffer;
	size_t i;

	if (!s)
		return NULL;
	i = 0;
	temp_buffer = (unsigned char *)s;
	while (i < n)
	{
		temp_buffer[i] = c;
		i++;
	}
	return (s);
}
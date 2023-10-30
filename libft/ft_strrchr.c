#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	size_t s_len;

	s_len = ft_strlen(s);
	if (s[s_len] == c)
		return (char *)(s + s_len);
	while (s_len--)
	{
		if (s[s_len] == c)
			return (char *)(s + s_len);
	}
	return NULL;
}

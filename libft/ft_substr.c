#include "includes/libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *sub;

	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return NULL;
	ft_strlcpy(sub, &s[start], (len + 1));
	return sub;
}
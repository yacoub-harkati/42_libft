#include "libft.h"

char *ft_strdup(const char *s)
{
	size_t len;
	char *dest;

	len = ft_strlen(s);
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return NULL;
	ft_strlcpy(dest, s, (len + 1));
	return dest;
}
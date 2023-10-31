#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int i;
	size_t string_len;
	char *buffer;

	i = 0;
	string_len = ft_strlen(s);
	buffer = (char *)malloc(sizeof(char) * (string_len + 1));
	if (!buffer)
		return (NULL);
	while (s[i])
	{
		buffer[i] = f(i, s[i]);
		i++;
	}
	buffer[i] = '\0';
	;
	return (buffer);
}
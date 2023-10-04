#include "includes/libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i] == little[j] && (i + j) < len)
		{
			if (little[j + 1] == '\0')
				return (char *)(big + i);
			j++;
		}
		i++;
	}
	return NULL;
}
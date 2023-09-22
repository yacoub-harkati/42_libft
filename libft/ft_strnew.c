#include "includes/libft.h"

char *ft_strnew(size_t size)
{
	void *new_str;

	new_str = malloc(sizeof(char) * (size + 1));
	if (new_str == NULL)
		return NULL;
	ft_bzero(new_str, size + 1);
	return ((char *)new_str);
}

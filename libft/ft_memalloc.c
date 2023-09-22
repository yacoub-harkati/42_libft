#include "includes/libft.h"

void *ft_memalloc(size_t size)
{
	void *mem_ptr;

	mem_ptr = (void *)malloc(size);
	if (mem_ptr == NULL)
		return NULL;
	ft_bzero(mem_ptr, size);
	return mem_ptr;
}

#include <stdio.h>
#include <stdint.h>
#include "libft.h"


void	*ft_calloc(size_t nmemb, size_t size);
char				**ft_split(char const *s, char c);


int main(void)
{
	char **s;

	// s = ft_calloc(SIZE_MAX, SIZE_MAX);
	s = ft_split("  tripouille  42  ", ' ');

	// ft_strlcpy(s, "yacoub", 6);
	printf("%d\n", *s[2]);
	printf("%s\n", "\0");
	return 0;
}

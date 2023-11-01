#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char **ft_split(char const *s, char c);

static size_t	ft_cword(char const *s, char c)
{
	size_t	i;
	size_t	old_i;
	size_t	count;

	i = 0;
	old_i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		old_i = i;
		while (s[i] && s[i] != c)
			i++;
		if (old_i < i++)
			count++;
	}
	return (count);
}

static void	free_strs(char **strs, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
}

int main() {
    char const *input_string = " This is a test string for split function ";
    char delimiter = ' ';

    char **result = ft_split(input_string, delimiter);

    if (result) {
        // Print the split strings
        for (size_t i = 0; result[i] != NULL; i++) {
            printf("Word %zu: %s\n", i, result[i]);
        }

        // Free the memory allocated for the split strings
        free_strs(result, ft_cword(input_string, delimiter));
    } else {
        printf("Split failed. Memory allocation error.\n");
    }

    return 0;
}

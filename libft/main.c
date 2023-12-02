#include "libft.h"
#include <fcntl.h>

int main()
{
	int fd = open("get_next_line.c", O_RDONLY);

	char *line;

	while ((line = get_next_line(fd)))
	{
		printf("%s", line);
		free(line);
	}
	printf("%s", line);
	return (0);
}
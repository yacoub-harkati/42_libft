
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **ft_split(char const *s, char c);

int main(void)
{

	char s[] = "     ";
	char charset = ' ';
	char **strs;
	strs = ft_split(s, charset);
	int i = 0;
	while (1)
	{
		if (strs[i] == NULL)
		{
			printf("NULL");
			break;
		}
		printf("%s\n", strs[i]);
		i++;
	}
	system("leak a.out");
	return 0;
}
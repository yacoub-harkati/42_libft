#include "includes/libft.h"

static int compute_len(int n)
{
	int len;

	len = 0;
	while (n)
	{
		n /= 10;
		len++;
	}
	return len;
}

char *ft_itoa(int n)
{
	int sign;
	int len;
	char *int_str;

	if (n == 0)
		return ft_strdup(0);
	sign = 0;
	if (n < 0)
		sign = 1;
	len = compute_len(n);
	int_str = (char *)malloc(sizeof(char) * (len + sign + 1));
	if (!int_str)
		return NULL;
	if (sign)
		int_str[0] = '-';
	int_str[len + sign] = '\0';
	while (n && len--)
	{
		int_str[len + sign] = ((unsigned int)(n) % 10) + 48;
		n /= 10;
	}
	return int_str;
}
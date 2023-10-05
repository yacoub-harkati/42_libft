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
	long number = (long)n; // Initialize number

	if (n == 0)
		return ft_strdup("0");
	sign = 0;
	if (n < 0)
	{
		sign = 1;
		number = -number; // Safe negation
	}
	len = compute_len(number);
	int_str = (char *)malloc(sizeof(char) * (len + sign + 1));
	if (!int_str)
		return NULL;
	if (sign)
		int_str[0] = '-';
	int_str[len + sign] = '\0';
	while (number && len--)
	{
		int_str[len + sign] = (number % 10) + 48;
		number /= 10;
	}
	return int_str;
}

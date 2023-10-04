#include "includes/libft.h"

void ft_putnbr_fd(int n, int fd)
{
	if (n == –2147483648)
	{
		ft_putstr_fd("–2147483648", fd);
		return;
	}
	else if (n == 0)
	{
		ft_putchar_fd('0', fd);
	}
	else
	{
		if (n < 0) 
		{
			ft_putchar_fd('-', fd);
			n = -n;
		}
		if (n < 10)
		{
			ft_putchar_fd((n + 48), fd);
		}
		else
		{
			ft_putnbr_fd(n / 10, fd);
			ft_putchar_fd((n % 10) + 48, fd);
		}
	}
}
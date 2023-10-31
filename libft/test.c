#include "libft.h"
#include <stdio.h>
#include <stdint.h>
#include <string.h>

int main(int ac, char **av)
{
    if (ac > 1)
    {
        char *s1 = ft_strdup("123456");
        char *s2 = ft_calloc(20, 1);
        strncpy(s2, s1, 20);
        printf("%s\n", s2);
    }
    return (0);
}
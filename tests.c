#include "libft.h"
#include <stdio.h>

int main (void)
{
	char *new = ft_strjoin("hello ", "world");
	char mem1[20];
	char mem2[20] = "herro word";
	printf("strjoin %s %lu\n", new, ft_strlen(new));
	printf("substr %s\n", ft_substr("hello world", 5, 5));
	ft_memcpy(mem1, mem2, 5);
	printf("memcpy - %s", mem1);
}

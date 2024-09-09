#include "libft.h"

void *ft_strchr(const char *str, int c)
{
	while (*str != '\0') {
		if (*str == (char)c) {
			return (char *)str;
		}
		str++;
	}
	if (c == '\0') {
		return (char *)str;
	}
	return NULL;
}

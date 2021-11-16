#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *sub;
	size_t	i;

	if (!s || !(sub = (char *)malloc(len +1)))
		return (0);
	i = 0;
	while (len > 0 && s[start] != '\0')
	{
		sub[i++] = s[start++];
		len--;
	}
	sub[i] = '\0';
	return (sub);	
}

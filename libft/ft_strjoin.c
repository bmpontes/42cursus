#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int	i;
	int	c;

	if (!s1 || !s2 || 
		!(s3 = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (0);
	i = 0;
	c = 0;
	while (s1[i])
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2[c])
	{
		s3[i] = s2[c];
		i++;
		c++;
	}
	s3[i] = '\0';
	return (s3);
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapfenni <mapfenni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 18:28:57 by tcharanc          #+#    #+#             */
/*   Updated: 2023/04/06 17:23:41 by mapfenni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_ischarset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	char	*dest;

	if (!s1)
		return (NULL);
	i = 0;
	start = 0;
	while (s1 && ft_ischarset(s1[start], (char *)set))
		start++;
	end = ft_strlen(s1) - 1;
	while (s1 && ft_ischarset(s1[end], (char *)set))
		end--;
	if (start > end)
		dest = malloc(1 * sizeof(char));
	else
		dest = malloc((end - start + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	while (end >= start)
		dest[i++] = s1[start++];
	dest[i] = '\0';
	return (dest);
}

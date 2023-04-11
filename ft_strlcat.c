/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapfenni <mapfenni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 18:50:08 by mapfenni          #+#    #+#             */
/*   Updated: 2023/04/11 19:07:37 by mapfenni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	src_size;
	unsigned int	dest_size;

	i = 0;
	j = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (dest[j] != '\0')
		j++;
	dest_size = j;
	while (src[i++] != '\0')
		src_size = i;
	i = 0;
	if (size == 0 || size <= dest_size)
		return (src_size + size);
	while (src[i] != '\0' && i < (size - dest_size - 1))
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (src_size + dest_size);
}

// #include <string.h>
// #include <stdio.h>
// int main()
// {
// 	char *src = (char *)"AAAAAAAAA";
// 	char dest[30];
// 	memset(dest, 0, 30);
// 	dest[0] = 'B';
// 	printf("%lu", strlcat(dest, "123", 0));
// }
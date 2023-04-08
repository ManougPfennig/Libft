/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapfenni <mapfenni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 18:50:08 by mapfenni          #+#    #+#             */
/*   Updated: 2023/04/06 17:38:34 by mapfenni         ###   ########.fr       */
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
		return (0);
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

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char dest[10] = "ba";
// 	char src[10] = "nane";

// 	printf("%s\n", dest);
// 	printf("%s\n-----\n", src);

// 	printf("%u\n", ft_strlcat(dest, src, 0));

// 	// printf("%s\n", dest);
// 	// printf("%s\n-----\n", src);

// 	// printf("%lu\n", strlcat(dest, src, 10));

// 	// printf("%s\n", dest);
// 	// printf("%s\n", src);

// }
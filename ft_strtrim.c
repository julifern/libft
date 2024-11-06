/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julifern <julifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:03:32 by julifern          #+#    #+#             */
/*   Updated: 2024/11/05 19:14:20 by julifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static char	*ft_strcpy(char const *src, char *dst, size_t start, size_t end)
// {
// 	size_t	i;

// 	i = 0;
// 	while (start <= end)
// 	{
// 		dst[i] = src[start];
// 		i++;
// 		start++;
// 	}
// 	dst[i] = '\0';
// 	return (dst);
// }

static int	check_c(char const c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (check_c(s1[start], set))
		start++;
	while (check_c(s1[end - 1], set))
		end--;
	trimmed = ft_substr(s1, start, end - start);
	return (trimmed);
}
// #include <stdio.h>

// int	main()
// {
// 	char *s1 = "xxxz  test with x and z and x .  zx  xx z";
// 	char *set = "z x";
// 	char *res = ft_strtrim(s1, set);

// 	printf("%s\n", res);
// }
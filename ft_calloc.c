/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julifern <julifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 18:01:18 by julifern          #+#    #+#             */
/*   Updated: 2024/11/02 18:15:20 by julifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*s;
	size_t	i;

	i = size * nmemb;
	if (i < 0)
		i = 0;
	s = malloc(i);
	if (!s)
		return (NULL);
	s[0] = '\0';
	while (i)
		s[i--] = '\0';
	return ((void *)s);
}

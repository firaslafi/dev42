/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 04:54:03 by flafi             #+#    #+#             */
/*   Updated: 2023/04/14 05:02:18 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	i;
	size_t	l1;
	size_t	l2;

	i = -1;
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	result = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!result)
		return (NULL);
	if (!s1 && !s2)
		return (ft_strdup(""));
	while (++i <= l1)
	{
		result[i] = s1[i];
	}
	i = -1;
	while (++i <= l2)
	{
		result[ft_strlen(s1) + i] = s2[i];
	}
	result[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	return (result);
}

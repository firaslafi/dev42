/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 04:54:03 by flafi             #+#    #+#             */
/*   Updated: 2023/04/02 05:02:38 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strjoin(char const *s1, char const *s2)
{
    char *result;
    size_t lens1;
    size_t lens2;

    lens1 = ft_strlen(s1);
    lens2 = ft_strlen(s2);
 
    result = malloc(lens1 + lens1 + 1);
    if (!result)
     return(NULL);
    ft_strlcpy(result, s1, lens1);
    ft_strlcat(result, s2, lens2);
    result[lens1 + lens2 + 1] = '\0';
    return(result);
}

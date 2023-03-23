/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 16:48:01 by flafi             #+#    #+#             */
/*   Updated: 2023/03/18 17:48:46 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strchr(const char *s, int c)
{
    int found;
    char *ptr;

    i = 0;
    found = 0;
    ptr = NULL;
    while (*s && found == 0)
    {
        if(*s == c)
            ptr = (char *) s;
            return (ptr);
            break ;
        else
            s++;
            i++;
    }
    return (NULL);
}

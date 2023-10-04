/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantill <fsantill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:40:44 by fsantill          #+#    #+#             */
/*   Updated: 2023/10/04 15:48:02 by fsantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_strdup(const char *str)
{
	int		length;
	char	*ptr;

	length = ft_strlen(str);
	ptr = malloc (length + 1);
	if (ptr == 0)
		return (NULL);
	ft_memcpy(ptr, str, length);
	ptr[length] = '\0';
	return (ptr);
}
/**
 * The length + 1 is the extra bit needed for
 * '\0' at the end of the string.
*/

/**
 * The function `ft_strdup` duplicates a given string and returns a pointer
 * to the duplicated string.
 * 
 * @param str The parameter "str" is a pointer to a constant character string.
 * 
 * @return a pointer to a newly allocated memory block that contains a
 * duplicate of the input string.
 */
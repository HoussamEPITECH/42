/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmokrane <nmokrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 10:49:25 by nmokrane          #+#    #+#             */
/*   Updated: 2013/12/06 22:46:02 by nmokrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*new;
	char	*end_ptr;

	while (*s == 9 || *s == 10 || *s == 32)
		s++;
	new = ft_strdup(s);
	if (new == NULL)
		return (NULL);
	end_ptr = new + ft_strlen(new);
	if (*new == '\0')
		return (new);
	while (!*end_ptr || *end_ptr == 9 || *end_ptr == 10 || *end_ptr == 32)
		*end_ptr-- = '\0';
	return (new);
}

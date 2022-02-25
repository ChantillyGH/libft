/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoroana <mdoroana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 15:38:09 by mdoroana          #+#    #+#             */
/*   Updated: 2022/02/25 17:05:44 by mdoroana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
	{
		str = ft_calloc(1, sizeof(char));
		if (!str)
			return (NULL);
	}
	else if (ft_strlen(s + start) >= len)
	{
		str = ft_calloc(len + 1, sizeof(char));
		if (!str)
			return (NULL);
		str = ft_memmove(str, s + start, len);
	}
	else
	{
		str = ft_calloc(ft_strlen(s + start) + 1, sizeof(char));
		if (!str)
			return (NULL);
		str = ft_memmove(str, s + start, ft_strlen(s + start));
	}
	return (str);
}

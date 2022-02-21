/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoroana <mdoroana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:00:33 by mdoroana          #+#    #+#             */
/*   Updated: 2022/02/17 17:27:39 by mdoroana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	while (s[i] && c != s[i])
		i++;
	if ((char)c == s[i])
		return (((unsigned char *)s)[i]);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:47:25 by lroussel          #+#    #+#             */
/*   Updated: 2024/11/05 16:14:49 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if(s[i] == c)
		{
			return ((char *)s + i);
		}
		i++;
	}
	if (s[i] == c)
		return ((char *)s + i);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 23:14:29 by antdelga          #+#    #+#             */
/*   Updated: 2023/01/05 15:59:33 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*memory;
	size_t	contador;

	memory = malloc(count * size);
	if (memory == NULL)
		return (NULL);
	contador = 0;
	while (contador < (count * size))
	{
		((unsigned char *)memory)[contador] = (unsigned char) 0;
		contador++;
	}
	return (memory);
}

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(char *s, int c)
{
	int	i;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char) c)
			return ((char *)&(s[i]));
		i++;
	}
	return (NULL);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*final;
	size_t	l;
	size_t	l1;
	size_t	i;

	if (!s1)
		s1 = (char *)ft_calloc(1, sizeof(char));
	if (!s1 || !s2)
		return (NULL);
	l1 = ft_strlen(s1);
	l = l1 + ft_strlen(s2);
	final = (char *) ft_calloc(sizeof(char), (l + 1));
	if (!final)
		return (NULL);
	i = -1;
	while (++i < l1)
		final[i] = s1[i];
	while (i < l)
	{
		final[i] = s2[i - l1];
		i++;
	}
	free(s1);
	return (final);
}

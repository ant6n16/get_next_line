/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 20:59:39 by antdelga          #+#    #+#             */
/*   Updated: 2023/01/06 21:13:27 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

static char	*ft_read(int fd, char *letters)
{
	char	*buf;
	int		cont;

	cont = 1;
	buf = (char *) malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	while (ft_strchr(letters, '\n') == 0)
	{
		cont = read(fd, buf, BUFFER_SIZE);
		if (cont == 0)
			break ;
		buf[cont] = '\0';
		letters = ft_strjoin(letters, buf);
	}
	free(buf);
	return (letters);
}

char	*ft_cut_line(char *letters)
{
	int		i;
	char	*line;

	i = 0;
	if (letters[i] == '\0')
		return (NULL);
	while (letters[i] != '\0' && letters[i] != '\n')
		i++;
	if (letters[i] == '\0')
		i--;
	line = (char *) ft_calloc(sizeof(char), (i + 2));
	if (!line)
		return (NULL);
	i = 0;
	while (letters[i] != '\0' && letters[i] != '\n')
	{
		line[i] = letters[i];
		i++;
	}
	if (letters[i] == '\n')
	{
		line[i] = letters[i];
		i++;
	}
	return (line);
}

char	*free_buffer(char *letters)
{
	int		i1;
	int		i2;
	char	*aux;

	i1 = 0;
	while (letters[i1] != '\0' && letters[i1] != '\n')
		i1++;
	if (letters[i1] == '\0')
	{
		free(letters);
		return (NULL);
	}
	aux = (char *) ft_calloc(sizeof(char), (ft_strlen(letters) - i1 + 1));
	if (!aux)
		return (NULL);
	i1++;
	i2 = 0;
	while (letters[i1] != '\0')
		aux[i2++] = letters[i1++];
	free(letters);
	return (aux);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*letters[OPEN_MAX];

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) == -1)
		return (NULL);
	letters[fd] = ft_read(fd, letters[fd]);
	if (!letters[fd])
		return (NULL);
	line = ft_cut_line(letters[fd]);
	letters[fd] = free_buffer(letters[fd]);
	return (line);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 21:34:29 by antdelga          #+#    #+#             */
/*   Updated: 2023/01/12 20:32:57 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

//void check_leaks();

int	main(int argc, char **argv)
{
	char	*line;
	int		fd;

	(void)argc;
	fd = open(argv[1], O_RDONLY);
	line = get_next_line(fd);
	printf("%s", line);
	// line = get_next_line(fd);
	// printf("%s", line);
	// close(fd);
	// fd = open(argv[1], O_RDONLY);
	// line = get_next_line(fd);
	// printf("%s", line);
	free(line);
	//check_leaks();
    return (0);
}

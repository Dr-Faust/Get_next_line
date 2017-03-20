/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opodolia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 16:39:04 by opodolia          #+#    #+#             */
/*   Updated: 2017/03/17 17:06:19 by opodolia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
//#include "libft/libft.h"
#include <stdio.h>
#include <string.h>
#include <fcntl.h>

int		main(int argc, char **argv)
{
	int		fd;
	char	*line;

	line = 0;
	fd = open(argv[1], O_RDONLY);
	while (get_next_line(fd, &line))
		printf("%s\n", line);
	return (0);
}

//header
//
//
#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H
# include "libft.h"
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# define BUFF_SIZE 10

int		get_next_line(int const fd, char **line);
#endif

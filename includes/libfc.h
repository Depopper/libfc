#ifndef LIBFC_H
# define LIBFC_H

# include <term.h>
# include <termios.h>
# include <curses.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft.h"

extern int g_fc_fd;


int				fc_start(int fd);
void			fc_choose_fd(int fd);
int				fc_write(int c);
void			fc_write_cap(char *cap, int nb, int fd);
void			fc_goto(int x, int y);
int				fc_error(char *s1, char *s2);

#endif

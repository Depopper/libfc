#include "libfc.h"

void fc_write_cap(char *cap, int nb, int fd)
{
	fc_choose_fd(fd ? fd : g_fc_fd);
	tputs(tgetstr(cap, NULL), nb, fc_write);
}

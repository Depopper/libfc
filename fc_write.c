#include "libfc.h"

int	fc_write(int c)
{
	write(g_fc_fd, &c, 1);
	return(0);
}

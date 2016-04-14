#include "libfc.h"

int g_fc_fd;

int	fc_start(int fd)
{
	const char *term_name;

	if (!(term_name = getenv("TERM")))
		return (fc_error("ft_select: TERM valiable empty", ""));
	if (tgetent(NULL, term_name) == 0)
		return (fc_error("ft_select: TERM valiable invalide", ""));
	fc_choose_fd(fd);
	return (0);
}

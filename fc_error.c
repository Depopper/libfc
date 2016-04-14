#include "libfc.h"

int fc_error(char *s1, char *s2)
{
	ft_putstr_fd(s1, 2);
	ft_putendl_fd(s2, 2);
	return (-1);
}

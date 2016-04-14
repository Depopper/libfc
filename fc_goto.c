#include "libfc.h"

void	fc_goto(int x, int y)
{
	tputs(tgoto(tgetstr("cm", NULL), x, y), 1, fc_write);
}

/* (C) Copyright 2007 Free Software Foundation GPL3.
 *   The GNU General Public License is a free, copyleft license for
 * software and other kinds of works.
 *
 *   The licenses for most software and other practical works are designed
 * to take away your freedom to share and change the works.  By contrast,
 * the GNU General Public License is intended to guarantee your freedom to
 * share and change all versions of a program--to make sure it remains free
 * software for all its users.  We, the Free Software Foundation, use the
 * GNU General Public License for most of our software; it applies also to
 * any other work released this way by its authors.  You can apply it to
 * your programs, too.
 *
 * Contributors:
 *     Kashyap Ekbote (kashyap.ekbote@gmail.com). */

#include <iostream>

#include "namespace.h"
#include "app.h"

NAMESPACE__ICARYX_START

void
App::build()
{
  std::cout << "Hi!" << std::endl;
}

void
App::run()
{
  m_io_service.run();
}

NAMESPACE__ICARYX_END

/*
  Local Variables:
  mode: c++
  End:
*/

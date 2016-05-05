#ifndef NULLPTR_H
#define NULLPTR_H

#include <sc_cf.h>

#ifdef HAVE_NULLPTR
#include <cstddef>
#else
#  if ( _MSC_VER > 1600 )
#    define nullptr_t void*
#  endif
#  define nullptr NULL
#endif //HAVE_NULLPTR

#endif //NULLPTR_H
